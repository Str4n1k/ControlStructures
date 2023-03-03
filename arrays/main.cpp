#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	const int n = 5;
	int arr[n] = {};

	cout << "Введите элемент массива: ";
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
}

