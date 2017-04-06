#include"functions.h"

int main()
{
	int n = arrSizeInput();
	double **arr = new double*[n];
	//arrInput(arr, n);
	randInput(arr, n);
	output(arr, n);
	func(arr, n);
	output(arr, n);
	system("pause");
	return 0;
}