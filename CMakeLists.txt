cmake_minimum_required(VERSION 3.17)
project(hananelProject2)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(hananelProject2 anomaly_detection_util.cpp anomaly_detection_util.h TimeSeries.cpp TimeSeries.h SimpleAnomalyDetector.h SimpleAnomalyDetector.cpp main.cpp)
