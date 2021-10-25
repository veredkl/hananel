/*
* anomaly_detection_util.cpp
* Authors: Rivka Bouhnik - 321659039 and Vered Klein - 315468462
*/
#include <cmath>
#include "anomaly_detection_util.h"

// this function return the expected value
float u(float* x, int size){
    float sum = 0;
    for (int i = 0; i < size; ++i) {
        sum += x[i];
    }
    return sum/size;
}
// returns the variance of X
float var(float* x, int size) {
    float E = u(x,size);
    float sum1 = 0;
    for (int i = 0; i < size; ++i) {
        sum1 += pow((x[i]-E),2);
    }
    float varX = sum1/size;
    return varX;

}
// returns the covariance of X and Y
float cov(float* x, float* y, int size) {
    float sum = 0;
    for (int i = 0; i < size; ++i) {
        sum += x[i]*y[i];
    }
    float sum1 = sum/size;
    return (sum1 - u(x,size)*u(y,size));
}
// returns the Pearson correlation coefficient of X and Y
float pearson(float* x, float* y, int size) {
    return (cov(x,y,size)/(sqrt(var(x,size))*sqrt(var(y,size))));
}
// performs a linear regression and return s the line equation
Line linear_reg(Point** points, int size){
    float x[size],y[size];
    for (int i = 0; i < size; ++i) {
        x[i] = points[i]->x;
        y[i] = points[i]->y;
    }
    float a = (cov(x,y,size)/ var(x,size));
    float b = (u(y,size) - a*u(x,size));
    return Line(a,b);
}
// returns the deviation between point p and the line equation of the points
float dev(Point p,Point** points, int size) {
    Line line = linear_reg(points,size);
    float f = line.f(p.x);
    return std::abs(f-p.y);
}
// returns the deviation between point p and the line
float dev(Point p,Line l) {
    float f = l.f(p.x);
    return std::abs(f-p.y);
}


