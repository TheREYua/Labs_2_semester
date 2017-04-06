#include"functions.h"

void func(double x)
{
	double sum1 = 0;
	double sum2 = (-1 / 2.7) * x;
	int i = 1;
	do 
	{
		i++;
		sum1 = sum2;
		sum2 += pow(-1, i) / ((fact(i)) * (pow((i / 2.7), i)) * (pow(x, i)));
	} 
	while ((sum2 - sum1) > 0.001);
	cout << "n = " << i << endl;
	cout << "Sn = " << sum2 << endl;
	cout << "Sn-1 = " << sum1 << endl;
}

double fact(int N)
{
	if (N < 0) 
		return 0; 
	if (N == 0) 
		return 1; 
	else 
		return N * fact(N - 1); 
}