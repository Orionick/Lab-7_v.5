#pragma once

#define ROWS 3
#define COLUMNS 3

namespace functions {
	void mtrx_read(int A[ROWS][COLUMNS]);

	void mtrx_print(int A[ROWS][COLUMNS]);

	void printLine();

	bool diog_check(int A[ROWS][COLUMNS]);

	int getMinValue(int A[ROWS][COLUMNS], int columnIndex);

	int getSumOfSquares(int A[ROWS][COLUMNS], int columnIndex);

	void replaceColumns(int A[ROWS][COLUMNS]);
}
//All of the added comments are in .ccp file of functions' realisation!