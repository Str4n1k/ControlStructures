#include <iostream>
#include <conio.h>


using namespace std;

//#define WHILE_1
//#define WHILE_2

void main()
{
	setlocale(LC_ALL, "");
#ifdef WHILE_1
	int i = 0;        //������� �����.
	int n;            // ���-�� ���������.
	cout << "������� ���������� ��������: "; cin >> n;
	while (i < n)
	{
		cout << ++i << "Hello" << endl;
	}
#endif // WHILE_1

#ifdef WHILE_2
	int n;
	cout << "������� ���������� ��������: "; cin >> n;
	while (n--)
	{
		cout << n << "\t";
	}
	cout << endl;
#endif // WHILE_2

	char key;  // ��� ���������� ����� ������� ��� ������� �������.
	do
	{
		key = _getch(); //������� _getch() ������� ������� �������,� ���������� ASCII ��� ������� �������.
		//������� _getch ��������� � ���������� <conio.h>
		cout << (int)key << "\t" << key << endl;
	} while ((int)key != 27);

}