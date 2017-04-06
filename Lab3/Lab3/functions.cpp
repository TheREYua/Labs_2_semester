#include"functions.h"
void func(double** arr, int n)
{
	for (int i = 0; i < n * 4; ++i)
		cout << "___";
	cout << endl;
	double *sum = new double[n];
		for (int i = 0; i < n; ++i)
		{
			sum[i] = 0;
			for (int j = 0; j < n; ++j)
				sum[i] += arr[j][i];
		}
	for (int i = 0; i < n; ++i)
		cout << "	" << sum[i];
	cout << endl;
	sort(arr, sum, n);
	cout << endl;
	for (int i = 0; i < n; ++i)
		cout << "	" << sum[i];
	cout << endl;
	for (int i = 0; i < n * 4; ++i)
		cout << "___";
}
void output(double** arr, int n)
{
	for (int i = 0; i < n; ++i)
	{
		cout << endl;
		for (int j = 0; j < n; ++j)
			cout << "	" << arr[i][j];
	}
	cout << endl;
}

int arrSizeInput()
{
	char number[81];
	while(atoi(number) == 0)
	{
		cout << "insert correct n:" << endl;
		cin >> number;
	}
		return atoi(number);
}

void arrInput(double** arr, int n)
{
	for (int i = 0; i < n; ++i)
		arr[i] = new double[n];

	for (int i = 0; i < n; ++i)
		for (int j = 0; j < n; ++j)
		{
			cout << "Insrt arr[" << i + 1 << "][" << j + 1 << "];" << endl;
			cin >> arr[i][j];
		}
}

void randInput(double** arr, int n)
{
	for (int i = 0; i < n; ++i)
		arr[i] = new double[n];
	srand(time(NULL));
	for (int i = 0; i < n; ++i)
		for (int j = 0; j < n; ++j)
		{
			if(rand() % 2)
				arr[i][j] = rand() % 100;
			else
				arr[i][j] = rand() % 100 *(-1);
		}
}

void sort(double** arr, double* sum, int n)
{
	bool f = true;
	unsigned int k = 1;
	
	while (f == true)
	{
		f = false;
		
		for (int i = 0; i < (n - k); ++i)
		{
			if (sum[i] > sum[i + 1] && k < n)
			{
				double var = sum[i]; sum[i] = sum[i + 1]; sum[i+1] = var;
				for (int j = 0; j < n; j++)
				{
					double var = arr[j][i]; arr[j][i] = arr[j][i + 1]; arr[j][i + 1] = var;
				}
				f = true;
			}
		}
		k++;
	}
}

