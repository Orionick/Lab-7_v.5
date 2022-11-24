#include <iostream>
#include "functions.h"

int main()
{
	int A[ROWS][COLUMNS];

	functions::mtrx_read(A);
	functions::printLine();
	functions::mtrx_print(A);

	if (functions::diog_check(A)) {
		functions::replaceColumns(A);
		functions::printLine();
		functions::mtrx_print(A);
	}
}	
