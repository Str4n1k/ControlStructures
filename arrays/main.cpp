#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	const int n = 5;
	int arr[n] = {};
	int sum = 0;
	int surplas = 0;


	cout << "Введите элементы массива: ";
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	// вывод массива на экран
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;

	for (int i = 0; i < n; i++) //Сумма массива
	{
		sum += arr[i];
	}
	cout << "Сумма массива равна: " << sum << endl;

	for (int i = 0; i < n; i++)
	{
		surplas = sum / n;
	}
	cout << "Среднее арифметическое массива равна: " << surplas;

}

