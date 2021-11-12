//
// Created by rivka and vered on 09/11/2021.
//

#include "SimpleAnomalyDetector.h"
#include "TimeSeries.h"
#include "anomaly_detection_util.h"
#include <cmath>

using namespace std;

SimpleAnomalyDetector::SimpleAnomalyDetector(){
   // TODO Auto-generated constructor stub
}

SimpleAnomalyDetector::~SimpleAnomalyDetector(){
    // TODO Auto-generated destructor stub
}

void SimpleAnomalyDetector::learnNormal(const TimeSeries& ts){

    for (int i = 0; i < ts.featureS() ; ++i) {

        ts.getDataT();

        float maxValue = 0;
        float pears = 0;
        int index = 0;
        for (int j = i+1; j <ts.featureS() ; ++j) {
           float feature1x[ts.getAFeature(i).size()];
          float feature2y[ts.getAFeature(j).size()];
            for (int k = 1; k <ts.getAFeature(i).size(); ++k) {
                feature1x[k] = ts.getAFeature(i).at(k);
                feature2y[k] = ts.getAFeature(i).at(k);
            }
           pears = fabs(pearson(feature1x,feature2y,ts.featureS()));
           if(pears > maxValue){
               maxValue = pears;
               index = j;
           }
        }

        if(pears >= 0.9){
           struct correlatedFeatures * cr;
            cr->corrlation = maxValue;
            cr->feature1 = ts.getTheFeaturesName().at(i);
            cr->feature2 = ts.getTheFeaturesName().at(index) ;
           // float feature1xPoint[cr->feature1.size()];
          //  float feature2yPoint[cr->feature2.size()];
            Point pointArray[cr->feature1.size()];
            for (int j = 0; j < cr->feature1.size(); ++j) {
                //feature1xPoint[j] = ts.getAFeature(i)[j];
               // feature2yPoint[j] = ts.getAFeature(index)[j];
                pointArray[j].x = ts.getAFeature(i)[j];
                pointArray[j].y = ts.getAFeature(index)[j];
            }
           cr->lin_reg = linear_reg(pointArray,cr->feature1.size());

        }

    }
}
vector<AnomalyReport> SimpleAnomalyDetector::detect(const TimeSeries& ts);
vector<correlatedFeatures> SimpleAnomalyDetector::getNormalModel();

