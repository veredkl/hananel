//
// Created by rivka and vered on 26/10/2021.
//

#ifndef HANANELPROJECT2_ANOMALYDETECTOR_H
#define HANANELPROJECT2_ANOMALYDETECTOR_H

class TimeSeries{/*...*/};
class AnomalyReport{
public:
    const string description;
    const long timeStep;
    AnomalyReport(string description, long timeStep) :
            description(description),timeStep(timeStep){}
};
class TimeSeriesAnomalyDetector {
public:
    virtual void learnNormal(const TimeSeries& ts)=0;
    virtual vector<AnomalyReport> detect(const TimeSeries& ts)=0;
    virtual ~TimeSeriesAnomalyDetector(){}
};

#endif //HANANELPROJECT2_ANOMALYDETECTOR_H
