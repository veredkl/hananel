//
// Created by rivka and vered on 02/11/2021.
//

#ifndef HANANELPROJECT2_TIMESERIES_H
#define HANANELPROJECT2_TIMESERIES_H
#include <string>
#include <vector>
#include <list>
using namespace std;


class TimeSeries {

    vector<string> feature;
    vector<vector<float>> dataT;
    void readTheTitle(const char *CSVfile);
    void readTheTable(const char *CSVfile);
    list<string> seperationOfWords(string line);

public:

    TimeSeries(const char *CSVfile);
    const vector<vector<float>> getDataT() const;
    vector<float> getValues(string str) const;
    int featureS() const;
    vector<float> getAFeature(int index) const;
    vector<string> getTheFeaturesName() const;

};


#endif //HANANELPROJECT2_TIMESERIES_H
