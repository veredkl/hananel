//
// Created by rivka and vered on 02/11/2021.
//

#include "TimeSeries.h"

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

void TimeSeries::readTheTitle(const char *CSVfile) {

    string line; //first line of the table
    getline(CSVfile, line);
    list<string> firstLine = seperationOfWords(line);
    features = firstLine;

}

void TimeSeries::readTheTable(const char *CSVfile)  {


}

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

const vector<vector<float>> TimeSeries::getData() const {
    return data;
}

















void TimeSeries::readCSVFile(const char *CSVfile) {
    ifstream CSV;
    CSV.open(CSVfile);
    if (!CSVfile.is_open()) {
        throw runtime_error("couldn't open this file.");
    }

    string line;
    //getting the first line from the file(the names of the features).
    getline(CSVfile, line);
    //creating features name vector.
    feature_name = dataSeparation(line, ',');
    //using this vector to save lines over and over again, till the 'while' loop wil be end.
    vector<string> newValues;
    //getting all the other lines from the text convert them to a float.
    while (getline(CSVfile, line)) {

        newValues = dataSeparation(line, ',');
        addValuesToTHeMap(line, newValues);
    }
    CSVfile.close();
}

TimeSeries::TimeSeries(const char *CSVfileName) {
    readCSVFile(CSVfileName);
}

void TimeSeries::addValuesToTHeMap(string line, vector<string> vec) {
    for (int i = 0; i < feature_name.size(); ++i) {
        //pushing this value to its suitable vector according to the name of the feature.
        data_table[feature_name[i]].push_back(stof(vec[i]));
    }
}

vector<string> TimeSeries::dataSeparation(string line, char comma) {
    stringstream s(line);
    string str;
    vector<string> vec;
    //removing all the punctuation marks from this line, and pushing word after word to the vector.
    while (getline(s, str, comma)) {
        vec.push_back(str);
    }
    return vec;
}

map<string, vector<float>> TimeSeries::getDataTable() const {
    return data_table;
}

vector<float> TimeSeries::getValues(string str) const {
    return getDataTable()[str];
}
