#include<iostream>
using namespace std;
using std::cin;
using std::cout;
using std::endl;

//#define ARITHMETICAL_OPERATORS	//1) ������������� ���������
//#define ASSIGNMENT_OPERATOR		//2)�������� ������������
//#define INCREMENT_DECREMENT		//3)Increment/Decrement (++/--)
//#define COMPOUND_ASSIGNMENTS		//4) ��������� ������������
//#define COMPARISON_OPERATORS	//5) ��������� ���������
//#define LOGICAL_OPERATORS		//6) ��������� ���������

void main()
{
	setlocale(LC_ALL, "");
#ifdef ARITHMETICAL_OPERATORS
	3;
	-3;		//Unary minus
	8 - 3;	//Binary minus
	8 * 3;	//Binary aster
	//*3;		//�������� '*' ����� ���� ������ ��������.

	//Unary:	+, -;
	//Binary:	+, -, *, /, %;
	//	% - ������� �� �������
	cout << 17 / 3 << endl;
	cout << 17 % 3 << endl;
	cout << "\n------------------------------\n";
	cout << 3. / 17 << endl;
	cout << 3. % 17 << endl;
#endif // ARITHMETICAL_OPERATORS

#ifdef ASSIGNMENT_OPERATOR
	//			l-value = r-value;
	//	l-value - ���������� �����
	//	r-value - ��������� ������
	/*int a = 2;
	int b = a * 4 + a * 5;
	const int MAX_SPEED = 250;*/

	int a, b, c;
	a = b = c = 0;
	cout << a << "\t" << b << "\t" << c << endl;
#endif // ASSIGNMENT_OPERATOR

#ifdef INCREMENT_DECREMENT
	//Increment (++) - ��� ������� ��������, ������� ����������� �������� ���������� �� 1
	//Decrement (--) - ��� ������� ��������, ������� ��������� �������� ���������� �� 1
	int i = 0;
	++i;	//Prefix increment
	i++;	//Postfix increment
	--i;	//Prefix decrement
	i--;	//Postfix (Suffix) decrement
	//i = 0
	int j = i++;
	cout << i << endl;	//1
	cout << j << endl;	//0
#endif // INCREMENT_DECREMENT

#ifdef COMPOUND_ASSIGNMENTS
	int a = 2;
	int b = 3;

	a = a + b;			a += b;
	a = a - b;			a -= b;
	a = a * b;			a *= b;
	a = a / b;			a /= b;
	a = a % b;			a %= b;

	cout << a << endl;
#endif // COMPOUND_ASSIGNMENTS

#ifdef COMPARISON_OPERATORS

#endif // COMPARISON_OPERATORS

	//cout << (!true == false) << endl;

	int i = 3;
	i = ++i + 1 + (++i *= 2);
	cout << i << endl;


}