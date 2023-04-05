#include"stdafx.h"
#include"constans.h"
#include"FillRand.h"
#include"Print.h"
#include"Statistic.h"
#include"Sort.h"
#include"Shift.h"
#include"Search.h"

#define ARRAYS_1
#define ARRAYS_2

void main()
{
	setlocale(LC_ALL, "");
#ifdef ARRAYS_1
	const int n = 10;
	int arr[n] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	FillRand(arr, n, 0, 5);
	//UniqueRand(arr, n);
	Print(arr, n);
	cout << "Сумма массива равна: " << Sum(arr, n) << endl;
	cout << "Среднее арифметическое элеметов массива: " << Avg(arr, n) << endl;
	cout << "Минимальное значение в массиве: " << minValueIn(arr, n) << endl;
	cout << "Максимальное значение в массиве: " << maxValueIn(arr, n) << endl;
	Search(arr, n);
	Sort(arr, n);
	Print(arr, n);

	/*int number_of_shifts;
	cout << "Введите количество сдвигов: "; cin >> number_of_shifts;
	shiftLeft(arr, n, number_of_shifts);
	Print(arr, n);
	shiftRicht(arr, n, number_of_shifts);
	Print(arr, n);*/

	const int SIZE = 8;
	double d_arr[SIZE];
	FillRand(d_arr, SIZE);
	Print(d_arr, SIZE);
#endif // ARRAYS_1

	int number_of_shifts = 2;
	int i_arr_2[ROWS][COLS];
	double d_arr_2[ROWS][COLS];
	FillRand(i_arr_2, ROWS, COLS);
	FillRand(d_arr_2, ROWS, COLS);
	std::cout << "Массив " << std::endl;
	Print(i_arr_2, ROWS, COLS);
	Print(d_arr_2, ROWS, COLS);

	std::cout << "Сумма целых элеметов: " << Sum(i_arr_2, ROWS, COLS) << std::endl;
	std::cout << "Сумма вещественных элеметов: " << Sum(d_arr_2, ROWS, COLS) << std::endl;

	std::cout << "Среднее арифметическое целых элеметво: " << Avg(i_arr_2, ROWS, COLS) << std::endl;
	std::cout << "Среднее арифметическое вещественных элеметво: " << Avg(d_arr_2, ROWS, COLS) << std::endl;

	std::cout << "Минимальное целых элементов матрицы: " << minValueIn(i_arr_2, ROWS, COLS) << std::endl;
	std::cout << "Минимальное арифметическое вещественных элементов матрицы: " << minValueIn(d_arr_2, ROWS, COLS) << std::endl;

	std::cout << "Максимальное целых элементов: " << maxValueIn(i_arr_2, ROWS, COLS) << std::endl;
	std::cout << "Максимальное арифметическое вещественных элементов: " << maxValueIn(d_arr_2, ROWS, COLS) << std::endl;

	std::cout << "Сдвиг" << endl;
	shiftLeft(i_arr_2, ROWS, COLS, number_of_shifts);
	Print(i_arr_2, ROWS, COLS); std::cout << endl;
	shiftRicht(i_arr_2, ROWS, COLS, number_of_shifts);
	Print(i_arr_2, ROWS, COLS); std::cout << endl;

	shiftLeft(d_arr_2, ROWS, COLS, number_of_shifts);
	Print(d_arr_2, ROWS, COLS); std::cout << endl;
	shiftRicht(d_arr_2, ROWS, COLS, number_of_shifts);
	Print(d_arr_2, ROWS, COLS); std::cout << endl;


	std::cout << "Сортировка" << endl;
	Sort(i_arr_2, ROWS, COLS);
	Print(i_arr_2, ROWS, COLS); std::cout << endl;

	Sort(d_arr_2, ROWS, COLS);
	Print(d_arr_2, ROWS, COLS); std::cout << endl;

	std::cout << "Повторы в массиве: " << std::endl;
	Search(i_arr_2, ROWS, COLS); std::cout << std::endl;
	Search(d_arr_2, ROWS, COLS); std::cout << std::endl;
}