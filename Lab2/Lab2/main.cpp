#include"functions.h"
#include<iostream>

void main(void)
{
	double x ;
	cout << "Insert x" << endl;
	cin >> x;
	if (!cin)
	{
		cout << "wrong input" << endl;
	}
	else
	{
		if (x == 0)
		{
			cout << "n - undefined" << endl << "Sn - undefined" << endl;
		}
		else
			func(x);
	}
	system("pause");
}