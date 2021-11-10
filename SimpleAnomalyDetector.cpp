//
// Created by rivka and vered on 09/11/2021.
//
#include "SimpleAnomalyDetector.h"
#include "TimeSeries.h"
#include "anomaly_detection_util.h"
#include <cmath>

using namespace srd;

SimpleAnomalyDetector(){

}
virtual ~SimpleAnomalyDetector(){

}

void learnNormal(const TimeSeries& ts){

    for (int i = 0; i < ts.featureS() ; ++i) {

        float maxValue = 0;
        float pears = 0;
        int index = 0;
        for (int j = i+1; j <ts.featureS() ; ++j) {
           pears = std::abs(pearson(ts,ts.getDataT()[j],ts.featureS());
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
vector<AnomalyReport> detect(const TimeSeries& ts);
vector<correlatedFeatures> getNormalModel();

