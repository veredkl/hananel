//
// Created by rivka and vered on 02/11/2021.
//

#include "TimeSeries.h"
 using namespace std;
#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <fstream>

//this function open,read and close the csv file
TimeSeries::TimeSeries(const char* CSVfile) {
    ifstream CSV;
    CSV.open(CSVfile);
    if (!CSV.is_open()) {
        throw runtime_error("couldn't open this file.");
    }
    readTheTitle(CSV);
    readTheTable(CSV);
    CSV.close();
}
//function to read the title (first line) of the table
void TimeSeries::readTheTitle(ifstream &CSVfile) {

   string line; //first line of the table
    getline(CSVfile, line);
    vector<string> firstLine = seperationOfWords(line);
    feature = firstLine;

}
//function to read the whole table and push to the dataT (data table)
void TimeSeries::readTheTable(ifstream &CSVfile)  {
    string line;
    for (int i = 0; i < feature.size(); ++i) {
        vector<float> vect;
        dataT.push_back(vect);
    }

    while (getline(CSVfile, line)) {
       vector<string> seperations = seperationOfWords(line);
        for (int i = 0; i < feature.size(); ++i) {
            dataT.at(i).push_back(stof(seperations.front()));
            //seperations.f;
        }
    }

}
//this function seperate between the words of the line between each comma
vector<string> TimeSeries::seperationOfWords(string line) {

    int comma = 0 , start = 0;
    string str;
    vector<string> vec;

    while (comma <= line.size()) {
        comma = line.find(",", start);
        vec.push_back(line.substr(start, comma - start));
        start = comma + 1;
    }
    return vec;

}

const vector<vector<float>> TimeSeries::getDataT() const {
    return dataT;
}
//vector<float> TimeSeries::getValues(string str) const {
   // return getDataT()[str];
//}
int TimeSeries::featureS() const {
    return feature.size();
}
vector<float> TimeSeries::getAFeature(int index) const {
    return dataT.at(index);
}
vector<string> TimeSeries:: getTheFeaturesName() const {
    return feature;
}
int TimeSeries::getFeatureN(string name) const {
    for (int i = 0; i < feature.size(); ++i) {
        if (name.compare(feature.at(i)) == 0) return i;
    }
    return -1;
}


