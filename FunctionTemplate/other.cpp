#include"Constants.h"

template<typename T> T Sum(const T arr[], const int SIZE)
{
	//Вычисление суммы элементов массива:
	T sum = 0;
	for (int i = 0; i < SIZE; i++)
	{
		sum += arr[i];
	}
	return sum;
}
template<typename T> T Sum(const T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	T sum = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			sum += arr[i][j];
		}
	}
	return sum;
}

template<typename T> double Avg(const T arr[], const int SIZE)
{
	return (double)Sum(arr, SIZE) / SIZE;
}
template<typename T> double Avg(const T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	return (double)Sum(arr, ROWS, COLS) / (ROWS * COLS);
}

template<typename T> T minValueIn(const T arr[], const int SIZE)
{
	T min = arr[0];
	for (int i = 0; i < SIZE; i++)
	{
		if (arr[i] < min)min = arr[i];
	}
	return min;
}
template<typename T> T minValueIn(const T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	T min = arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (arr[i][j] < min)min = arr[i][j];
		}
	}
	return min;
}
template<typename T> T maxValueIn(const T arr[], const int SIZE)
{
	T max = arr[0];
	for (int i = 0; i < SIZE; i++)
	{
		if (arr[i] > max)max = arr[i];
	}
	return max;
}
template<typename T> T maxValueIn(const T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	T max = arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (arr[i][j] > max)max = arr[i][j];
		}
	}
	return max;
}