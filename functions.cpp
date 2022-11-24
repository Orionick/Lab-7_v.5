#include "functions.h"
#include <iostream>

namespace functions //using for avoid same functions in the file
{
	void mtrx_read(int A[ROWS][COLUMNS])
	{
		//counts value for each element
		for (int i = 0; i < ROWS; i++)
		{
			for (int j = 0; j < COLUMNS; j++)
			{
				std::cin >> A[i][j]; //writes to matrix
			}
		}
	}

	void mtrx_print(int A[ROWS][COLUMNS])
	{
		for (int i = 0; i < ROWS; i++)
		{
			for (int j = 0; j < COLUMNS; j++)
			{
				std::cout << A[i][j];

				if (j != COLUMNS - 1) std::cout << ' '; //for good print matrix
			}
			std::cout << std::endl;
		}
	}

	void printLine()
	{
		std::cout << "_________________" << std::endl;
	}

	bool diog_check(int A[ROWS][COLUMNS]) // function returns TRUE-val if our task is compliting
	{
		bool contains_3 = false;
		bool contains_5 = false;

		for (int i = 0; i < ROWS; i++) {
			for (int j = 0; j < COLUMNS; j++) {
				if (i == j)
				{
					if (A[i][j] < 0)
					{
						return false;
					}

					if (!contains_3 && A[i][j] == 3)
					{
						contains_3 = true;
					}

					if (!contains_5 && A[i][j] == 5)
					{
						contains_5 = true;
					}
				}
			}
		}

		return contains_3 && contains_5;
	}

	int getMinValue(int A[ROWS][COLUMNS], int columnIndex) //returns column minimal value
	{
		int minValue = INT_MAX;

		for (int i = 0; i < ROWS; i++)
		{
			int value = A[i][columnIndex];

			if (value < minValue)
			{
				minValue = value;
			}
		}

		return minValue;
	}

	int getSumOfSquares(int A[ROWS][COLUMNS], int columnIndex) //sum of elements^2
	{
		int sumOfSquares = 0;

		for (int i = 0; i < ROWS; i++)
		{
			sumOfSquares += pow(A[i][columnIndex], 2);
		}

		return sumOfSquares;
	}

	void replaceColumns(int A[ROWS][COLUMNS]) //replaces minimal values of column and result of previos function
	{
		for (int j = 0; j < COLUMNS; j++)
		{
			int sumOfSquares = getSumOfSquares(A, j);
			int minValue = getMinValue(A, j);

			for (int i = 0; i < ROWS; i++)
			{
				if (A[i][j] == minValue)
				{
					A[i][j] = sumOfSquares;
				}
			}
		}
	}
}