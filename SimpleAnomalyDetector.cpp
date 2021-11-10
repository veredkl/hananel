//
// Created by rivka and vered on 09/11/2021.
//
#include "SimpleAnomalyDetector.h"

SimpleAnomalyDetector();
virtual ~SimpleAnomalyDetector();
virtual void learnNormal(const TimeSeries& ts);
virtual vector<AnomalyReport> detect(const TimeSeries& ts);
vector<correlatedFeatures> getNormalModel();

