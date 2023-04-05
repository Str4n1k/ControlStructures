#include"Sort.h"
void Sort(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		//������� i �������� �������, � ������� ����� ��������� ����������� �������� 
		for (int j = i + 1; j < n; j++)
		{
			//������� j ���������� ������� � ������� ������������ ��������
			//arr[i] - �������� ������
			//arr[j] - ������������ �������
			if (arr[j] < arr[i])
			{
				arr[i] ^= arr[j];
				arr[j] ^= arr[i];
				arr[i] ^= arr[j];
			}
		}
	}
}
void Sort(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			for (int r = i; r < ROWS; r++)
			{
				for (int g = r == i ? j + 1 : 0; g < COLS; g++)
				{
					if (arr[r][g] < arr[i][j])
					{
						arr[i][j] ^= arr[r][g]; //arr[i][j]-���������
						arr[r][g] ^= arr[i][j];//arr[r][g]- �������
						arr[i][j] ^= arr[r][g];
					}
				}
			}
		}
	}
}
void Sort(double arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			for (int r = i; r < ROWS; r++)
			{
				for (int g = r == i ? j + 1 : 0; g < COLS; g++)
				{
					if (arr[r][g] < arr[i][j])
					{
						double baf = arr[i][j]; //arr[i][j]-���������
						arr[i][j] = arr[r][g];//arr[r][g]- �������
						arr[r][g] = baf;
					}
				}
			}
		}
	}
}
void Sort(char arr[ROWS][COLS], const int ROWS, const int COLS)
{
	int iterations = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			for (int r = i; r < ROWS; r++)
			{
				for (int g = r == i ? j + 1 : 0; g < COLS; g++)
				{
					if (arr[i][j] > arr[r][g])
					{
						arr[i][j] ^= arr[r][g]; //arr[i][j]-���������
						arr[r][g] ^= arr[i][j];//arr[r][g]- �������
						arr[i][j] ^= arr[r][g];
					}
					iterations++;
				}
			}
		}
	}
}
