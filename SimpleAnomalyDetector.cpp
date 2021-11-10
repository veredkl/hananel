//
// Created by rivka and vered on 09/11/2021.
//

#include "SimpleAnomalyDetector.h"
#include "TimeSeries.h"
#include "anomaly_detection_util.h"
#include <cmath>

using namespace std;

SimpleAnomalyDetector::SimpleAnomalyDetector(){

}

SimpleAnomalyDetector::~SimpleAnomalyDetector(){

}

void SimpleAnomalyDetector::learnNormal(const TimeSeries& ts){

    for (int i = 0; i < ts.featureS() ; ++i) {

        ts.getDataT();

        float maxValue = 0;
        float pears = 0;
        int index = 0;
        for (int j = i+1; j <ts.featureS() ; ++j) {
           pears = std::abs(pearson(ts.,ts.getDataT()[j],ts.featureS());
           if(pears > maxValue){
               maxValue = pears;
               index = j;
           }
        }

        if(p){
            correlatedFeatures * cr = new correlatedFeatures;
            cr->corrlation = maxValue;
            cr->feature1 = ts. ;
            cr->feature2 = ts. ;
            cr.lin_reg =
        }

    }
}
vector<AnomalyReport> SimpleAnomalyDetector::detect(const TimeSeries& ts);
vector<correlatedFeatures> SimpleAnomalyDetector::getNormalModel();

