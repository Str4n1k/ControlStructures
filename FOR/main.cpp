#include <iostream>
#include <Windows.h>
using namespace std;

//#define FOR_SYNTAX
//#define MULTIPLICATION_TABLE
//#define PYTHAGORAS
void main()
{
	setlocale(LC_ALL, "");
#ifdef FOR_SYNTAX
	int n; // количетво итериаций.
	cout << "Введите количетво итераций: "; cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Hello FOR";
	}
	cout << endl;
#endif // FOR_SYNTAX

#ifdef MULTIPLICATION_TABLE
	for (int i = 1; i <= 10; i++)
	{
		cout << "Таблица умножения на " << i << ":\n";
		for (int j = 1; j <= 10; j++)
		{
			if (i < 10) cout << " ";
			cout << i << " * ";
			if (j < 10) cout << " ";
			cout << j << " = ";
			if (i * j < 100) cout << " ";
			if (i * j < 10) cout << " ";
			cout << i * j << endl;
			Sleep(0);
		}
		cout << endl;
	}
#endif // MULTIPLICATION_TABLE

#ifdef PYTHAGORAS
	for (int i = 1; i <= 10; i++)
	{
		for (int j = 1; j <= 10; j++)
		{
			cout.width(5);
			cout << i * j;
		}
		cout << endl;
	}
#endif // PYTHAGORAS

}