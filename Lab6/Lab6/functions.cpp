#include"functions.h"

int input(int & a, int & b, int & c)
{
	ifstream inf("C:/Programing/Labs/input.txt", ios_base::in);
	if (!inf.is_open())
	{
		cout << "\nFile not found";
		return 0;
	}
	static int line{ 1 };
	for (int i = 0; i < line; ++i)
	{
		inf >> a;
		inf >> b;
		inf >> c;
	}
	line++;
	inf.close();
	return 0;
}

int findParallel(int a, int b, int c)
{
	static int line{ 1 };
	double k, vc;
	srand(time(NULL) + line);
	if (rand() % 3)
		k = rand() % 10 + 1;
	else
		k = (rand() % 10 + 1) * (-1);
	srand(time(NULL) + line);
	if (!rand() % 2)
		vc = rand() % 100;
	else
		vc = (rand() % 100) * (-1);
	ofstream off("C:/Programing/Labs/parallel.txt", ios_base::out | ios_base::app);
	off << line << ". " << a*k;
	if ((b * k) >= 0)
		off << "x + " << b*k;
	else
		off << "x - " << (b*k) * (-1);
	if ((c + vc) >= 0)
		off << "y + " << c + vc << " = 0;" << endl;
	else
		off << "y - " << (c + vc) * (-1) << " = 0;" << endl;
	line++;
	off.close();
	return 0;
}

int findPerpendicular(int a, int b, int c)
{
	double k = b / a;
	int vc;
	static int line{ 1 };
	srand(time(NULL) + line);
	double k1, k2;
	if (rand() % 3)
		k1 = a + rand() % 25;
	else
		k1 = a + rand() % 25 * (-1);
	k2 = k * (k1 + 1.57);
	srand(time(NULL) + line);
	if (!rand() % 2)
		vc = rand() % 99;
	else
		vc = (rand() % 99) * (-1);
	ofstream off ("C:/Programing/Labs/perpendicula.txt", ios_base::out | ios_base::app);
	off << line << ". " << k1;
	if (k2 >= 0)
		off << "x + " << k2;
	else
		off << "x - " << k2 * (-1);
	if ((c + vc) >= 0)
		off << "y + " << c + vc << " = 0;" << endl;
	else
		off << "y - " << (c + vc) * (-1) << " = 0;" << endl;
	line++;
	off.close();
	return 0;
}