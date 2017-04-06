#include"functions.h"

void calc(double a, double b, int n)
{
	double *X = new double[n];
	double *Y = new double[n];
	double h = (b - a) / (n - 1);
	double Xmin, Xmax, Ymin, Ymax;
	for (int i = 0; i < n; ++i)
	{
		double x = X[i] = a + i * h;
		Y[i] = fX(x);
		cout << "x=" << X[i] << ";   y=" << Y[i] << endl;
	}
	Xmin = Xmax = X[0];
	Ymin = Ymax = Y[0];
	for (int i = 0; i < n; ++i)
	{
		if (X[i] > Xmax)
			Xmax = X[i];
		if (X[i] < Xmin)
			Xmin = X[i];

		if (Y[i] > Ymax)
			Ymax = Y[i];
		if (Y[i] < Ymin)
			Ymin = Y[i];
	}
	cout << "\n min x = " << Xmin << ";   max x = " << Xmax << ";";
	cout << "\n min y = " << Ymin << ";   max y = " << Ymax << ";" << endl;
}

double fX(double x)
{
	return tan(x) + (1 / tan(1 - x * x));
}