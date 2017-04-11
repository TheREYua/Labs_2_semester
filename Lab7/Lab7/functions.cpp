#include"functions.h"

int inputNum()
{
	int n;
	cout << "\n Enter the number of settelments: " << "\0" << endl;
	while (!(cin >> n) && (n < 0) || (cin.peek() != '\n'))
	{
		cin.clear();
		while (cin.get() != '\n');
			cout << "\n Enter correct number of settelments (must be an integer number and above zero): " << endl;
	}
	return n;
}

int inputPun(int &firstPun, int &secondPun, int n)
{
	cout << "\n Enter the number of first settelment: " << "\0" << endl;
	while (!(cin >> firstPun) || (cin.peek() != '\n') || (firstPun <= 0) || (firstPun > n))
	{
		cin.clear();
		while (cin.get() != '\n');
		cout << "\n Enter correct number of the settelment (must be an integer number above zero and belov the number of sttelments): " << endl;
	}
	cout << "\n Enter the number of second settelment: " << "\0" << endl;
	while (!(cin >> secondPun) || (cin.peek() != '\n') || (secondPun <= 0) || (secondPun > n) || (secondPun == firstPun))
	{
		cin.clear();
		while (cin.get() != '\n');
		cout << "\n Enter correct number of the settelment (must be an integer number above zero and belov the number of sttelments): " << endl;
	}
	cout << endl;
	cout << "\n First punct is " << firstPun;
	cout << "\n Second punct is " << secondPun << endl;
	return 0;
}

void formMas(int** roadMap, int n)
{
	srand(time(0));
	for (int i = 0; i < n; ++i)
		for (int j = 0; j < n; ++j)
			if (rand() % 2)
				roadMap[i][j] = roadMap[j][i] = 1;
			else
				roadMap[i][j] = roadMap[j][i] = 0;
	for (int i = 0; i < n; ++i)
	{
		cout << "\n";
		for (int j = 0; j < n; ++j)
			cout << roadMap[i][j] << ' ';
	}
}
void func(int** roadMap, int firstPun, int secondPun, int n)
{
	if (roadMap[firstPun - 1][secondPun - 1])
		cout << "\nRoude exists" << endl;
	else
		cout << "\nRoude not exists" << endl;
	choise(roadMap, firstPun, secondPun, n);
}
int choise(int** roadMap, int firstPun, int secondPun, int n)
{
	cout << "\n Try again?\n Y/N" << endl;
	char again{ 'n' };
	cin >> again;
	if ((again == 'y') || (again == 'Y'))
	{
		inputPun(firstPun, secondPun, n);
		func(roadMap, firstPun, secondPun, n);
	}
	else
		if ((again == 'n') || (again == 'N'))
			return 0;
		else
		{
			cout << "\n Please selest eiser 'Y' or 'N'";
			choise(roadMap, firstPun, secondPun, n);
		}
}