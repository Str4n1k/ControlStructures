#include <iostream>
#include <conio.h>


using namespace std;

//#define WHILE_1
//#define WHILE_2

void main()
{
	setlocale(LC_ALL, "");
#ifdef WHILE_1
	int i = 0;        //счётчик цикла.
	int n;            // кол-во интераций.
	cout << "Введите количество итераций: "; cin >> n;
	while (i < n)
	{
		cout << ++i << "Hello" << endl;
	}
#endif // WHILE_1

#ifdef WHILE_2
	int n;
	cout << "Введите количество итераций: "; cin >> n;
	while (n--)
	{
		cout << n << "\t";
	}
	cout << endl;
#endif // WHILE_2

	char key;  // эта переменная будет хранить код нажатой клавиши.
	do
	{
		key = _getch(); //функция _getch() ожидает нажатие клавиши,и возвращает ASCII код нажатой клавиши.
		//функция _getch находится в библиотеке <conio.h>
		cout << (int)key << "\t" << key << endl;
	} while ((int)key != 27);

}