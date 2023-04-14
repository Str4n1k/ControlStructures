#include"stdafx.h"
#include"Constants.h"
#include"FillUniq.cpp"
#include"other.cpp"
#include"Print.cpp"
#include"Search.cpp"
#include"Shifts.cpp"
#include"Sort.cpp"

void main()
{
	setlocale(LC_ALL, "");
	
	const int n = 10;
	int arr[n] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	FillRand(arr, n);
	UniqueRand(arr, n);
	Print(arr, n);
	cout << "����� ��������� �������: " << Sum(arr, n) << endl;
	cout << "������� �������������� ��������� �������: " << Avg(arr, n) << endl;
	cout << "����������� �������� � �������:  " << minValueIn(arr, n) << endl;
	cout << "������������ �������� � �������: " << maxValueIn(arr, n) << endl;
	Search(arr, n);
	Sort(arr, n);
	Print(arr, n);

	int number_of_shifts;
	cout << "������� ���������� �������: "; cin >> number_of_shifts;
	shiftLeft(arr, n, number_of_shifts);
	Print(arr, n);
	shiftRight(arr, n, number_of_shifts);
	Print(arr, n);

	const int SIZE = 8;
	double d_arr[SIZE];
	FillRand(d_arr, SIZE);
	Print(d_arr, SIZE);
	cout << "����� ��������� �������: " << Sum(d_arr, SIZE) << endl;
	cout << "�������-�������������� ��������� �������: " << Avg(d_arr, SIZE) << endl;
	cout << "����������� �������� � �������: " << minValueIn(d_arr, SIZE) << endl;
	cout << "������������ �������� � �������: " << maxValueIn(d_arr, SIZE) << endl;
	Sort(d_arr, SIZE);
	Print(d_arr, SIZE);
	
	cout << "������� ���������� �������: "; cin >> number_of_shifts;
	shiftLeft(d_arr, SIZE, number_of_shifts);
	Print(d_arr, SIZE);

	int i_arr_2[ROWS][COLS];
	double d_arr_2[ROWS][COLS];
	char c_arr_2[ROWS][COLS];
	FillRand(i_arr_2, ROWS, COLS);
	FillRand(d_arr_2, ROWS, COLS);
	FillRand(c_arr_2, ROWS, COLS);
	cout << "��������������� �������" << endl;
	Print(i_arr_2, ROWS, COLS);
	Print(d_arr_2, ROWS, COLS);
	Print(c_arr_2, ROWS, COLS);

	cout << "����� ��������� �������: " << Sum(i_arr_2, ROWS,COLS) << endl;
	cout << "����� ��������� �������: " << Sum(d_arr_2, ROWS,COLS) << endl;
	cout << "����� ��������� �������: " << Sum(c_arr_2, ROWS,COLS) << endl;
	cout << "�������-�������������� ��������� �������: " << Avg(i_arr_2,ROWS,COLS) << endl;
	cout << "�������-�������������� ��������� �������: " << Avg(d_arr_2,ROWS,COLS) << endl;
	cout << "�������-�������������� ��������� �������: " << Avg(c_arr_2,ROWS,COLS) << endl;
	cout << "����������� �������� � �������: " << minValueIn(i_arr_2,ROWS,COLS) << endl;
	cout << "����������� �������� � �������: " << minValueIn(d_arr_2,ROWS,COLS) << endl;
	cout << "����������� �������� � �������: " << minValueIn(c_arr_2,ROWS,COLS) << endl;
	cout << "������������ �������� � �������: " << maxValueIn(i_arr_2,ROWS,COLS) << endl;
	cout << "������������ �������� � �������: " << maxValueIn(d_arr_2,ROWS,COLS) << endl;
	cout << "������������ �������� � �������: " << maxValueIn(c_arr_2,ROWS,COLS) << endl;
	cout << "������� ���������� ������� � ����: "; cin >> number_of_shifts;
	shiftLeft(i_arr_2, ROWS, COLS, number_of_shifts);
	Print(i_arr_2, ROWS, COLS); cout << endl;
	shiftLeft(d_arr_2, ROWS, COLS, number_of_shifts);
	Print(d_arr_2, ROWS, COLS); cout << endl;
	shiftLeft(c_arr_2, ROWS, COLS, number_of_shifts);
	Print(c_arr_2, ROWS, COLS); cout << endl;
	cout << "������� ���������� ������� ������: "; cin >> number_of_shifts;
	shiftRight(i_arr_2, ROWS, COLS, number_of_shifts);
	Print(i_arr_2, ROWS, COLS); cout << endl;
	shiftRight(d_arr_2, ROWS, COLS, number_of_shifts);
	Print(d_arr_2, ROWS, COLS); cout << endl;
	shiftRight(c_arr_2, ROWS, COLS, number_of_shifts);
	Print(c_arr_2, ROWS, COLS); cout << endl;
	cout << "������������" << endl;
	Sort(i_arr_2, ROWS, COLS);
	Print(i_arr_2, ROWS, COLS); cout << endl;
	Sort(d_arr_2, ROWS, COLS);
	Print(d_arr_2, ROWS, COLS); cout << endl;
	Sort(c_arr_2, ROWS, COLS);
	Print(c_arr_2, ROWS, COLS); cout << endl;
	cout << "����� �������� " << endl;
	Search(i_arr_2, ROWS, COLS); cout << endl;
	Search(d_arr_2, ROWS, COLS); cout << endl;
	Search(c_arr_2, ROWS, COLS); cout << endl;
}





