#include <iostream>
using namespace std;


void FillRand(int arr[], const int n);
void Print(const int arr[], const int n);
int Sum(const int arr[], const int n);
double Avg(const int arr[], const int n);
int minValueIn(const int arr[], const int n);
int maxValueIn(const int arr[], const int n);

void main()
{
	setlocale(LC_ALL, "");
	const int n = 5;
	int arr[n] = {3,5,8};
	FillRand(arr, n);
	Print(arr, n);
	cout << "Сумма массива равна: " << Sum(arr, n) << endl;
	cout << "Среднее арифметическое элеметов массива: " << Avg(arr, n) << endl;
	cout << "Минимальное значение в массиве: " << minValueIn(arr,n) << endl;
	cout << "Максимальное значение в массиве: " << maxValueIn(arr,n) << endl;
}

	void FillRand(int arr[], const int n)
	{
		for (int i = 0; i < n; i++)
		{
			arr[i] = rand() % 100;
		}
	}
	void Print(const int arr[], const int n)
	{
		for (int i = 0; i < n; i++)
		{
			cout << arr[i] << "\t";
		}
		cout << endl;
	}
	int Sum(const int arr[], const int n)
	{
		int sum = 0;
		for (int i = 0; i < n; i++)
		{
			sum += arr[i];
		}
		return sum;
	}
	double Avg(const int arr[], const int n)
	{
		return (double)Sum(arr, n) / n;
	}
	int minValueIn(const int arr[], const int n)
	{
		int min = arr[0];
		for (int i = 0; i < n; i++)
		{
			if (arr[i] < min)min = arr[i];
		}
		return min;
	}
	int maxValueIn(const int arr[], const int n)
	{
		int max = arr[0];
		for (int i = 0; i < n; i++)
		{
			if (arr[i] > max)max = arr[i];
		}
		return max;
	}