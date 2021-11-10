//
// Created by rivka and vered on 02/11/2021.
//

#include "TimeSeries.h"

//this function open,read and close the csv file
TimeSeries::TimeSeries(const char *CSVfile) {
    ifstream CSV;
    CSV.open(CSVfile);
    if (!CSVfile.is_open()) {
        throw runtime_error("couldn't open this file.");
    }
    readTheTitel(CSVfile);
    readTheTable(CSVfile);
    CSV.close();
}
//function to read the title (first line) of the table
void TimeSeries::readTheTitle(const char *CSVfile) {

    string line; //first line of the table
    getline(CSVfile, line);
    list<string> firstLine = seperationOfWords(line);
    features = firstLine;

}
//function to read the whole table and push to the dataT (data table)
void TimeSeries::readTheTable(const char *CSVfile)  {
    string line;
    for (int i = 0; i < feature.size(); ++i) {
        vector<float> vect;
        dataT.push_back(vect);
    }

    while (getline(CSVfile, line)) {
       list<string> seperations = seperationOfWords(line)
        for (int i = 0; i < feature.size(); ++i) {
            dataT.at(i).push_back(stof(seperations.front()));
            seperations.pop_front();
        }
    }

}
//this function seperate between the words of the line between each comma
list<string> seperationOfWords(string line) {

    int comma = 0 , start = 0;
    string str;
    list<string> lis;

    while (comma <= line.size()) {
        comma = line.find(",", start);
        lis.push_back(line.substr(start, comma - start));
        start = comma + 1;
    }
    return lis;

}

const vector<vector<float>> TimeSeries::getDataT() const {
    return dataT;
}
vector<float> TimeSeries::getValues(string str) const {
    return getDataT()[str];
}
int TimeSeries::featureS() const {
    return feature.size();
}
vector<float> TimeSeries::getAFeature(int index) const {
    return dataT.at(index);
}