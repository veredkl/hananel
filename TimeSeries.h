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
    void readTheTitle(ifstream &CSVfile);
    void readTheTable(ifstream &CSVfile);
    vector<string> seperationOfWords(string line);

public:

    TimeSeries(const char *CSVfile);
    const vector<vector<float>> getDataT() const;
    vector<float> getValues(string str) const;
    int featureS() const;
    vector<float> getAFeature(int index) const;
    vector<string> getTheFeaturesName() const;
    int getFeatureN(string name) const;

};


#endif //HANANELPROJECT2_TIMESERIES_H
