#include <iostream>
using namespace std;

const int ROWS = 3;
const int COLS = 4;

void FillRand(int arr[], const int n,int minRand=0,int maxRand=100);
void FillRand(double arr[], const int n);
void FillRand(int arr[ROWS][COLS], const int ROWS, const int COLS);
void FillRand(double arr[ROWS][COLS], const int ROWS, const int COLS);
void FillRand(char arr[ROWS][COLS], const int ROWS, const int COLS);

void Print(const int arr[], const int n);
void Print(const double arr[], const int n);
void Print(const int arr[ROWS][COLS], const int ROWS, const int COLS);
void Print(const double arr[ROWS][COLS], const int ROWS, const int COLS);
void Print(const char arr[ROWS][COLS], const int ROWS, const int COLS);

int Sum(const int arr[], const int n);
int Sum(const double arr[], const int n);
int Sum(const int arr[ROWS][COLS], const int ROWS, const int COLS);
double Sum(const double arr[ROWS][COLS], const int ROWS, const int COLS);
char Sum(const char arr[ROWS][COLS], const int ROWS, const int COLS);

double Avg(const int arr[], const int n);
double Avg(const int arr[ROWS][COLS], const int ROWS, const int COLS);
double Avg(const double arr[ROWS][COLS], const int ROWS, const int COLS);
double Avg(const char arr[ROWS][COLS], const int ROWS, const int COLS);

int minValueIn(const int arr[], const int n);
int minValueIn(const int arr[ROWS][COLS], const int ROWS, const int COLS);
double minValueIn(const double arr[ROWS][COLS], const int ROWS, const int COLS);
char minValueIn(const char arr[ROWS][COLS], const int ROWS, const int COLS);

int maxValueIn(const int arr[], const int n);
int maxValueIn(const int arr[ROWS][COLS], const int ROWS, const int COLS);
double maxValueIn(const double arr[ROWS][COLS], const int ROWS, const int COLS);
char maxValueIn(const char arr[ROWS][COLS], const int ROWS, const int COLS);


void Sort(int arr[], const int n);
void Sort(int arr[ROWS][COLS], const int ROWS, const int COLS);
void Sort(double arr[ROWS][COLS], const int ROWS, const int COLS);
void Sort(char arr[ROWS][COLS], const int ROWS, const int COLS);

void shiftLeft(int arr[], const int n, int number_of_shifts);
void shiftLeft(int arr[ROWS][COLS], const int ROWS, const int COLS);
void shiftLeft(double arr[ROWS][COLS], const int ROWS, const int COLS);
void shiftLeft(char arr[ROWS][COLS], const int ROWS, const int COLS);

void shiftRicht(int arr[], const int n, int number_of_shifts);
void shiftRicht(int arr[ROWS][COLS], const int ROWS, const int COLS);
void shiftRicht(double arr[ROWS][COLS], const int ROWS, const int COLS);
void shiftRicht(char arr[ROWS][COLS], const int ROWS, const int COLS);

void UniqueRand(int arr[], const int n);
void UniqueRand(int arr[ROWS][COLS], const int ROWS, const int COLS);
void UniqueRand(double arr[ROWS][COLS], const int ROWS, const int COLS);
void UniqueRand(char arr[ROWS][COLS], const int ROWS, const int COLS);

void Search(int arr[], const int n);
void Search(int arr[ROWS][COLS], const int ROWS, const int COLS);
void Search(double arr[ROWS][COLS], const int ROWS, const int COLS);
void Search(char arr[ROWS][COLS], const int ROWS, const int COLS);

//#define ARRAYS_1
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

	int number_of_shifts = 5;
	int i_arr_2[ROWS][COLS];
	double d_arr_2[ROWS][COLS];
	char c_arr_2[ROWS][COLS];
	FillRand(i_arr_2, ROWS, COLS);
	FillRand(d_arr_2, ROWS, COLS);
	FillRand(c_arr_2, ROWS, COLS);
	std::cout << "Массив " << endl;
	Print(i_arr_2, ROWS, COLS);
	Print(d_arr_2, ROWS, COLS);
	Print(c_arr_2, ROWS, COLS);
	
	std::cout << "Сумма целых элеметов: " << Sum(i_arr_2, ROWS, COLS) << endl;
	std::cout << "Сумма вещественных элеметов: " << Sum(d_arr_2, ROWS, COLS) << endl;
	std::cout << "Сумма символьных элеметов: " << Sum(c_arr_2, ROWS, COLS) << endl;
	
	std::cout << "Среднее арифметическое целых элеметво: " << Avg(i_arr_2, ROWS, COLS) << endl;
	std::cout << "Среднее арифметическое вещественных элеметво: " << Avg(d_arr_2, ROWS, COLS) << endl;
	std::cout << "Среднее арифметическое символоьных элеметво: " << Avg(c_arr_2, ROWS, COLS) << endl;
	
	std::cout << "Минимальное целых элементов матрицы: " << minValueIn(i_arr_2, ROWS, COLS) << endl;
	std::cout << "Минимальное арифметическое вещественных элементов матрицы: " << minValueIn(d_arr_2, ROWS, COLS) << endl;
	std::cout << "Минимальное арифметическое символьных элементов матрицы: " << minValueIn(c_arr_2, ROWS, COLS) << endl << endl;
	
	std::cout << "Максимальное целых элементов матрицы: " << maxValueIn(i_arr_2, ROWS, COLS) << endl;
	std::cout << "Максимальное арифметическое вещественных элементов матрицы: " << maxValueIn(d_arr_2, ROWS, COLS) << endl;
	std::cout << "Максимальное арифметическое символьных элементов матрицы: " << maxValueIn(c_arr_2, ROWS, COLS) << endl << endl;
	
	std::cout << "Сдвиг" << endl;
	shiftLeft(i_arr_2, ROWS, COLS, number_of_shifts);
	Print(i_arr_2, ROWS, COLS); std::cout << endl;
	shiftRicht(i_arr_2, ROWS, COLS, number_of_shifts);
	Print(i_arr_2, ROWS, COLS); std::cout << endl;

	shiftLeft(d_arr_2, ROWS, COLS, number_of_shifts);
	Print(d_arr_2, ROWS, COLS); std::cout << endl;
	shiftRicht(d_arr_2, ROWS, COLS, number_of_shifts);
	Print(d_arr_2, ROWS, COLS); std::cout << endl;

	shiftLeft(c_arr_2, ROWS, COLS, number_of_shifts);
	Print(c_arr_2, ROWS, COLS); std::cout << endl;
	shiftRicht(c_arr_2, ROWS, COLS, number_of_shifts);
	Print(c_arr_2, ROWS, COLS); std::cout << endl;
	
	std::cout << "Сортировка" << endl;
	Sort(i_arr_2, ROWS, COLS);
	Print(i_arr_2, ROWS, COLS); std::cout << endl;

	Sort(d_arr_2, ROWS, COLS);
	Print(d_arr_2, ROWS, COLS); std::cout << endl;

	Sort(c_arr_2, ROWS, COLS);
	Print(c_arr_2, ROWS, COLS); std::cout << endl;

	std::cout << "Поиск повторов в массиве" << endl;
	Search(i_arr_2, ROWS, COLS); std::cout << endl;
	Search(d_arr_2, ROWS, COLS); std::cout << endl;
	Search(c_arr_2, ROWS, COLS); std::cout << endl;

	std::cout << "Уникальность " << endl;
	UniqueRand(i_arr_2, ROWS, COLS);
	Print(i_arr_2, ROWS, COLS); std::cout << endl;

	UniqueRand(d_arr_2, ROWS, COLS);
	Print(d_arr_2, ROWS, COLS); std::cout << endl;

	UniqueRand(c_arr_2, ROWS, COLS);
	Print(c_arr_2, ROWS, COLS); std::cout;
}

void FillRand(int arr[], const int n, int minRand, int maxRand)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % (maxRand - minRand) + minRand;
	}
}
void FillRand(double arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 10000;
		arr[i] /= 100;
	}
}
void FillRand(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = rand() % 100;
		}
	}
}
void FillRand(double arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = rand() % 1000;
			arr[i][j] /= 100;
		}
	}
}
void FillRand(char arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = rand();
		}
	}
}

void Print(const int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		std::cout << arr[i] << "\t";
	}
	std::cout << endl;
}
void Print(const double arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		std::cout << arr[i] << "\t";
	}
	std::cout << endl;
}
void Print(const int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			std::cout << arr[i][j] << "\t";
		}
		std::cout << endl;
	}
}
void Print(const double arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			std::cout << arr[i][j] << "\t";
		}
		std::cout << endl;
	}
}
void Print(const char arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			std::cout << arr[i][j] << "\t";
		}
		std::cout << endl;
	}
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
int Sum(const double arr[], const int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
}
int Sum(const int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	{
		int sum = 0;
		for (int i = 0; i < ROWS; i++)
		{
			sum += arr[i][ROWS];
		}
		return sum;
	}
}
double Sum(const double arr[ROWS][COLS], const int ROWS, const int COLS)
{
	{
		double sum = 0;
		for (int i = 0; i < ROWS; i++)
		{
			sum += arr[i][ROWS];
		}
		return sum;
	}
}
char Sum(const char arr[ROWS][COLS], const int ROWS, const int COLS)
{
	{
		int sum = 0;
		for (int i = 0; i < ROWS; i++)
		{
			sum += arr[i][ROWS];
		}
		return sum;
	}
}

double Avg(const int arr[], const int n)
{
	return (double)Sum(arr, n) / n;
}
double Avg(const double arr[], const int n)
{
	return (double)Sum(arr, n) / n;
}
double Avg(const int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	return (double)Sum(arr,ROWS, COLS) / (ROWS * COLS);
}
double Avg(const double arr[ROWS][COLS], const int ROWS, const int COLS)
{
	return (double)Sum(arr, ROWS, COLS) / (ROWS * COLS);
}
double Avg(const char arr[ROWS][COLS], const int ROWS, const int COLS)
{
	return (double)Sum(arr, ROWS, COLS) / (ROWS * COLS);
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
int minValueIn(const double arr[], const int n)
{
	int min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min)min = arr[i];
	}
	return min;
}
int minValueIn(const char arr[], const int n)
{
	int min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min)min = arr[i];
	}
	return min;
}
int minValueIn(const int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	int min = arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (arr[i][j] < min)min = arr[i][j];
		}
	}
	return min;
}
double minValueIn(const double arr[ROWS][COLS], const int ROWS, const int COLS)
{
	double min = arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (arr[i][j] < min)min = arr[i][j];
		}
	}
	return min;
}
char minValueIn(const char arr[ROWS][COLS], const int ROWS, const int COLS)
{
	int min = arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (arr[i][j] < min)min = arr[i][j];
		}
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
int maxValueIn(const double arr[], const int n)
{
	int max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max)max = arr[i];
	}
	return max;
}
int maxValueIn(const char arr[], const int n)
{
	int max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max)max = arr[i];
	}
	return max;
}
int maxValueIn(const int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	int max = arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (arr[i][j] > max)max = arr[i][j];
		}
	}
	return max;
}
double maxValueIn(const double arr[ROWS][COLS], const int ROWS, const int COLS)
{
	int max = arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (arr[i][j] > max)max = arr[i][j];
		}
	}
	return max;
}
char maxValueIn(const char arr[ROWS][COLS], const int ROWS, const int COLS)
{
	int max = arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (arr[i][j] > max)max = arr[i][j];
		}
	}
	return max;
}


void shiftLeft(int arr[], const int n, int number_of_shifts)
{
	for (int i = 0; i < number_of_shifts; i++)
	{
		int buffer = arr[0];
		for (int i = 0; i < n; i++)
		{
			arr[i] = arr[i + 1];
		}
		arr[n - 1] = buffer;
	}
}
void shiftLeft(double arr[], const int n, int number_of_shifts)
{
	for (int i = 0; i < number_of_shifts; i++)
	{
		int buffer = arr[0];
		for (int i = 0; i < n; i++)
		{
			arr[i] = arr[i + 1];
		}
		arr[n - 1] = buffer;
	}
}
void shiftLeft(char arr[], const int n, int number_of_shifts)
{
	for (int i = 0; i < number_of_shifts; i++)
	{
		int buffer = arr[0];
		for (int i = 0; i < n; i++)
		{
			arr[i] = arr[i + 1];
		}
		arr[n - 1] = buffer;
	}
}
void shiftLeft(int arr[ROWS][COLS], const int ROWS, const int COLS,int number_of_shifts)
{
	for (int i = 0; i < number_of_shifts; i++)
	{
		int buffer = arr[0][0];
		for (int i = 0; i < ROWS; i++)
		{
			for (int j = 0; j < COLS; j++)
			{
				arr[i][j] = arr[i][j + 1];
			}
		}
		arr[ROWS - 1][COLS - 1] = buffer;
	}
}
void shiftLeft(double arr[ROWS][COLS], const int ROWS, const int COLS, int number_of_shifts)
{
	for (int i = 0; i < number_of_shifts; i++)
	{
		double buffer = arr[0][0];
		for (int i = 0; i < ROWS; i++)
		{
			for (int j = 0; j < COLS; j++)
			{
				arr[i][j] = arr[i][j + 1];
			}
		}
		arr[ROWS - 1][COLS - 1] = buffer;
	}
}
void shiftLeft(char arr[ROWS][COLS], const int ROWS, const int COLS, int number_of_shifts)
{
	for (int i = 0; i < number_of_shifts; i++)
	{
		char buffer = arr[0][0];
		for (int i = 0; i < ROWS; i++)
		{
			for (int j = 0; j < COLS; j++)
			{
				arr[i][j] = arr[i][j + 1];
			}
		}
		arr[ROWS - 1][COLS - 1] = buffer;
	}
}

void Sort(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		//Счётчик i выбирает элемент, в который нужно поместить минимальное значение 
		for (int j = i + 1; j < n; j++)
		{
			//Счётчик j перебирает элменты в поисках минимального значения
			//arr[i] - Выбраный элмент
			//arr[j] - перебираемый элемент
			if (arr[j] < arr[i])
			{
				arr[i] ^= arr[j];
				arr[j] ^= arr[i];
				arr[i] ^= arr[j];
			}
		}
	}
}
void Sort(int arr[COLS][ROWS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			for (int r = 0; r < ROWS; r++)
			{
				for (int g = 0; g < COLS; g++)
				{
					if (arr[r][g] < arr[i][j])
						{
							int buffer = arr[i][j]; //arr[i][j]-выбранный
							arr[i][j] == arr[r][g];//arr[r][g]- перебор
				         	arr[r][g] == buffer;
						}
				}
			}
		}
	}
}
void Sort(double arr[COLS][ROWS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			for (int r = 0; r < ROWS; r++)
			{
				for (int g = 0; g < COLS; g++)
				{
					if (arr[r][g] < arr[i][j])
						{
							double buffer = arr[i][j]; //arr[i][j]-выбранный
							arr[i][j] == arr[r][g];//arr[r][g]- перебор
							arr[r][g] == buffer;
						}
				}
			}
		}
	}
}
void Sort(char arr[COLS][ROWS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			for (int r = 0; r < ROWS; r++)
			{
				for (int g = 0; g < COLS; g++)
				{
					if (arr[r][g] < arr[i][j])
						{
							char buffer = arr[i][j]; //arr[i][j]-выбранный
							arr[i][j] == arr[r][g];//arr[r][g]- перебор
							arr[r][g] == buffer;
						}
				}
			}
		}
	}
}

void shiftRicht(int arr[], const int n, int number_of_shifts)
{
	for (int i = 0 ; i < number_of_shifts; i++)
		{
			int buffer = arr[n - 1];
			for (int i = n - 1; i > 0; i--)
			{
				arr[i] = arr[i-1];
			}
		arr[0] = buffer;
	}
	/*shiftLeft(arr, n, n - number_of_shifts);*/
}
void shiftRicht(double arr[], const int n, int number_of_shifts)
{
	for (int i = 0 ; i < number_of_shifts; i++)
		{
			int buffer = arr[n - 1];
			for (int i = n - 1; i > 0; i--)
			{
				arr[i] = arr[i-1];
			}
		arr[0] = buffer;
	}
	shiftLeft(arr, n, n - number_of_shifts);
}
void shiftRicht(char arr[], const int n, int number_of_shifts)
{
	for (int i = 0 ; i < number_of_shifts; i++)
		{
			int buffer = arr[n - 1];
			for (int i = n - 1; i > 0; i--)
			{
				arr[i] = arr[i-1];
			}
		arr[0] = buffer;
	}
	shiftLeft(arr, n, n - number_of_shifts);
}
void shiftRicht(int arr[ROWS][COLS], const int ROWS, const int COLS, int number_of_shifts)
{
	for (int i = 0; i < number_of_shifts; i++)
	{
		char buffer = arr[0][0];
		for (int i = 0; i < ROWS; i++)
		{
			for (int j = 0; j < COLS; j++)
			{
				arr[i][j] = arr[i][j + 1];
			}
		}
		arr[ROWS - 1][COLS - 1] = buffer;
	}
	shiftLeft(arr, ROWS, COLS, ROWS * COLS - number_of_shifts);
}
void shiftRicht(double arr[ROWS][COLS], const int ROWS, const int COLS, int number_of_shifts)
{
	for (int i = 0; i < number_of_shifts; i++)
	{
		char buffer = arr[0][0];
		for (int i = 0; i < ROWS; i++)
		{
			for (int j = 0; j < COLS; j++)
			{
				arr[i][j] = arr[i][j + 1];
			}
		}
		arr[ROWS - 1][COLS - 1] = buffer;
	}
	shiftLeft(arr, ROWS, COLS, ROWS * COLS - number_of_shifts);
}
void shiftRicht(char arr[ROWS][COLS], const int ROWS, const int COLS, int number_of_shifts)
{
	for (int i = 0; i < number_of_shifts; i++)
	{
		char buffer = arr[0][0];
		for (int i = 0; i < ROWS; i++)
		{
			for (int j = 0; j < COLS; j++)
			{
				arr[i][j] = arr[i][j + 1];
			}
		}
		arr[ROWS - 1][COLS - 1] = buffer;
	}
	shiftLeft(arr, ROWS, COLS, ROWS * COLS - number_of_shifts);
}

void UniqueRand(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 10;
		for (int j = 0; j < i; j++)
		{
			if (arr[i] == arr[j])
			{
				i--;
				break;
			}
		}
	}
}
void UniqueRand(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	int g;
	bool baf = true;
	for (i = 0; i < ROWS; i++)
	{
		for (j = 0; j < COLS; )
		{
			baf = true;
			g = rand() % 15;
			for (r = 0; r < ROWS; r++)
			{
				for (s = 0; s < COLS; s++)
				{
					if (arr[r][s] == g)baf = false;
				}
			}
			if (baf)
			{
				arr[i][j] = g;
				j++;
			}

		}
	}
}
void UniqueRand(double arr[ROWS][COLS], const int ROWS, const int COLS)
{
	double g;
	bool baf = true;
	for (i = 0; i < ROWS; i++)
	{
		for (j = 0; j < COLS; )
		{
			baf = true;
			g = rand() % 15;
			for (r = 0; r < ROWS; r++)
			{
				for (s = 0; s < COLS; s++)
				{
					if (arr[r][s] == g)baf = false;
				}
			}
			if (baf)
			{
				arr[i][j] = g;
				j++;
			}

		}
	}
}
void UniqueRand(char arr[ROWS][COLS], const int ROWS, const int COLS)
{
	int g;
	bool baf = true;
	for (i = 0; i < ROWS; i++)
	{
		for (j = 0; j < COLS; )
		{
			baf = true;
			g = rand() % 15;
			for (r = 0; r < ROWS; r++)
			{
				for (s = 0; s < COLS; s++)
				{
					if (arr[r][s] == g)baf = false;
				}
			}
			if (baf)
			{
				arr[i][j] = g;
				j++;
			}

		}
	}
}
void UniqueRand(double arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 10;
		for (int j = 0; j < i; j++)
		{
			if (arr[i] == arr[j])
			{
				i--;
				break;
			}
		}
	}
}
void UniqueRand(char arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 10;
		for (int j = 0; j < i; j++)
		{
			if (arr[i] == arr[j])
			{
				i--;
				break;
			}
		}
	}
}

void Search(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		bool met_before = false;//предположем что искомое число не встречалось в массиве ранее, 
		//но это нужно проверить:
		for (int j = 0; j < i; j++)
		{
			if (arr[i] == arr[j])
			{
				met_before = true; //Запоминает то, что число встречалось ранее
				break;
			}
		}
		if (met_before)continue;
		int count = 0; // Счётчик повторений
		for (int j = i + 1; j < n; j++)
		{
			if (arr[i] == arr[j])
			{
				count++;
			}
		}
		if (count)printf("Значение %i повторяется %i раз\n", arr[i], count);
		/*if (count)cout << "Значение " << arr[i] << " повторяется " << count << " раз" << endl;*/

	}
}
void Search(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < n; i++)
	{
		bool met_before = false;//предположем что искомое число не встречалось в массиве ранее, 
		//но это нужно проверить:
		for (int j = 0; j < i; j++)
		{
			if (arr[i] == arr[j])
			{
				met_before = true; //Запоминает то, что число встречалось ранее
				break;
			}
		}
		if (met_before)continue;
		int count = 0; // Счётчик повторений
		for (int j = i + 1; j < n; j++)
		{
			if (arr[i] == arr[j])
			{
				count++;
			}
		}
		if (count)printf("Значение %i повторяется %i раз\n", arr[i], count);
		/*if (count)cout << "Значение " << arr[i] << " повторяется " << count << " раз" << endl;*/

	}
}
void Search(double arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < n; i++)
	{
		bool met_before = false;//предположем что искомое число не встречалось в массиве ранее, 
		//но это нужно проверить:
		for (int j = 0; j < i; j++)
		{
			if (arr[i] == arr[j])
			{
				met_before = true; //Запоминает то, что число встречалось ранее
				break;
			}
		}
		if (met_before)continue;
		int count = 0; // Счётчик повторений
		for (int j = i + 1; j < n; j++)
		{
			if (arr[i] == arr[j])
			{
				count++;
			}
		}
		if (count)printf("Значение %i повторяется %i раз\n", arr[i], count);
		/*if (count)cout << "Значение " << arr[i] << " повторяется " << count << " раз" << endl;*/

	}
}
void Search(char arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < n; i++)
	{
		bool met_before = false;//предположем что искомое число не встречалось в массиве ранее, 
		//но это нужно проверить:
		for (int j = 0; j < i; j++)
		{
			if (arr[i] == arr[j])
			{
				met_before = true; //Запоминает то, что число встречалось ранее
				break;
			}
		}
		if (met_before)continue;
		int count = 0; // Счётчик повторений
		for (int j = i + 1; j < n; j++)
		{
			if (arr[i] == arr[j])
			{
				count++;
			}
		}
		if (count)printf("Значение %i повторяется %i раз\n", arr[i], count);
		/*if (count)cout << "Значение " << arr[i] << " повторяется " << count << " раз" << endl;*/

	}
}
void Search(double arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		bool met_before = false;//предположем что искомое число не встречалось в массиве ранее, 
		//но это нужно проверить:
		for (int j = 0; j < i; j++)
		{
			if (arr[i] == arr[j])
			{
				met_before = true; //Запоминает то, что число встречалось ранее
				break;
			}
		}
		if (met_before)continue;
		int count = 0; // Счётчик повторений
		for (int j = i + 1; j < n; j++)
		{
			if (arr[i] == arr[j])
			{
				count++;
			}
		}
		if (count)printf("Значение %i повторяется %i раз\n", arr[i], count);
		/*if (count)cout << "Значение " << arr[i] << " повторяется " << count << " раз" << endl;*/

	}
}
void Search(char arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		bool met_before = false;//предположем что искомое число не встречалось в массиве ранее, 
		//но это нужно проверить:
		for (int j = 0; j < i; j++)
		{
			if (arr[i] == arr[j])
			{
				met_before = true; //Запоминает то, что число встречалось ранее
				break;
			}
		}
		if (met_before)continue;
		int count = 0; // Счётчик повторений
		for (int j = i + 1; j < n; j++)
		{
			if (arr[i] == arr[j])
			{
				count++;
			}
		}
		if (count)printf("Значение %i повторяется %i раз\n", arr[i], count);
		/*if (count)cout << "Значение " << arr[i] << " повторяется " << count << " раз" << endl;*/

	}
}