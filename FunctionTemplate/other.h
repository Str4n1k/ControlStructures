#pragma once
#include"Constants.h"
template<typename T> T Sum(const T arr[], const int SIZE);
template<typename T> T Sum(const T arr[ROWS][COLS], const int ROWS, const int COLS);

template<typename T> double Avg(const T arr[], const int SIZE);
template<typename T> double Avg(const T arr[ROWS][COLS], const int ROWS, const int COLS);

template<typename T> T minValueIn(const T arr[], const int SIZE);
template<typename T> T minValueIn(const T arr[ROWS][COLS], const int ROWS, const int COLS);
template<typename T> T maxValueIn(const T arr[], const int SIZE);
template<typename T> T maxValueIn(const T arr[ROWS][COLS], const int ROWS, const int COLS);
