#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	cout << "Hello Contorls!" << endl;
	int t;
	cout << "Введите температуру воздуха:"; cin >> t;
	if (t > 0)
	{
		cout << "На улице тепло" << endl;
	}
	else
	{
		cout << "На улице холодно" << endl;
    }

}