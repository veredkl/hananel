//
// Created by rivka and vered on 09/11/2021.
//
#include "SimpleAnomalyDetector.h"
#include "TimeSeries.h"
#include "anomaly_detection_util.h"

SimpleAnomalyDetector();
virtual ~SimpleAnomalyDetector();

virtual void learnNormal(const TimeSeries& ts){
    for (int i = 0; i < featureS() ; ++i) {
        List<int><int>;
        float maxValue = 0;
        int index = 0, pears =0 ;
        for (int j = i+1; j <ts.featureS() ; ++j) {
           pears =  math.abs(pearson(ts.,ts.getDataT()[j],ts.featureS());
           if(pears > maxValue){
               maxValue = pears;
               index = j;
           }
        }

        if(p     ){
            correlatedFeatures  cr = new correlatedFeatures;
            cr.corrlation = maxValue;
            cr.feature1 = ts. ;
            cr.feature2 = ts.   ;
            cr.lin_reg =
        }

    }
}
virtual vector<AnomalyReport> detect(const TimeSeries& ts);
vector<correlatedFeatures> getNormalModel();

