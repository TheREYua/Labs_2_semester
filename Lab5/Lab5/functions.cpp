#include"functions.h"

int input()
{
	int n;
	cout << "\n Enter the number of routes: " << "\0" << endl;
		while (!(cin >> n) && (n < 0) || (cin.peek() != '\n'))
		{
			cin.clear();
			while (cin.get() != '\n');
			cout << "\n Enter correct number of routes (must be an integer number and above zero): " << endl;
		}
		return n;
}

void arrInput(MARSHRUT *arr, int n)
{
	for (int i = 0; i < n; ++i)
	{
		cout << "\n Enter departure location: " << endl;
		cin >> arr[i].beginPunct;
		cout << "\n Enter arrival location: " << endl;
		cin >> arr[i].endPunct;
		cout << "\n Enter ID of the route:  " << "\0" << endl;
		while (!(cin >> arr[i].id) && (arr[i].id < 0) || (cin.peek() != '\n'))
		{
			cin.clear();
			while (cin.get() != '\n');
			cout << "\n Insert correct ID of the route (must be an integer number): ";
		}
	}
}

void choise(MARSHRUT *arr, int n)
{
	char ch{ 'v' };
	cout << "\n If you want to see all rouds press 'v';\n If you want to find roud by ID press 'i';\n If you want to find roud by departure or arrival location press 'f';\n Enter data again 'b';";
	cout << "\n To quit press 'Alt' + 'F4' or 'q';" << endl;
	cin >> ch;
	switch (ch)
	{
		case 'q':
			break;
		case 'i':
			findByID(arr, n);
			break;
		case 'f':
			findByWord(arr, n);
			break;
		case 'v':
			sortById(arr, n);
			break;
		case 'b':
			main();
		default:
			cout << "Plese enter one of sugested letters" << endl;
			choise(arr, n);
	}
}

void findByID(MARSHRUT *arr, int n)
{
	cout << "\n Enter ID: " << endl;
	int id{ 0 };
	while (!(cin >> id) && (id < 0) || (cin.peek() != '\n'))
	{
		cin.clear();
		while (cin.get() != '\n');
		cout << "\n Enter correct ID (must be an integer number and above zero): " << endl;
	}
	bool error = true;
	for (int i = 0; i < n; ++i)
	{
		if (arr[i].id == id)
		{
			error = false;

			table();
			cout.width(15);
			cout << left << arr[i].beginPunct;
			cout << "	|";
			cout.width(15);
			cout << left << arr[i].endPunct;
			cout << "	|";
			cout.width(15);
			cout << left << arr[i].id << endl;
			cout.width(50);
			cout.fill('_');
			cout << right << "|" << endl;
			cout.fill(' ');
		}
	}
	if (error)
		cout << "\n No match found" << endl;
	char c{ 'c' };
	cout << "\n To continue press 'c',\n to search again press 'r',\n to quit any other;" << endl;
	cin >> c;
	if (c == 'c')
		choise(arr, n);
	else
		if (c == 'r')
			findByID(arr, n);
}

void findByWord(MARSHRUT *arr, int n)
{
	cout << "\n in working proces" << endl;

	cout << "\n Enter departing or arriving location: " << endl;
	char somePunct[fieldSize];
	cin >> somePunct;
	bool formTable = true;
	bool error = true;
	for (int i = 0; i < n; ++i)
	{
		bool findMatch = true;
		bool displayRoude = true;
		for (int j = 0; j < fieldSize, ((somePunct[j] >= 'A') && (somePunct[j] <= 'Z')) || ((somePunct[j] >= 'a') && (somePunct[j] <= 'z')); ++j)
		{
			if ((somePunct[j] != arr[i].beginPunct[j]) && (somePunct[j] != arr[i].endPunct[j]))
			{
				findMatch = false;
				break;
			}
		}
		if (findMatch == true)
		{
			error = false;

			if (formTable == true)
			{
				table();
				formTable = false;
			}
			if (displayRoude == true)
			{
				cout.width(15);
				cout << left << arr[i].beginPunct;
				cout << "	|";
				cout.width(15);
				cout << left << arr[i].endPunct;
				cout << "	|";
				cout.width(15);
				cout << left << arr[i].id << endl;
				cout.width(50);
				cout.fill('_');
				cout << right << "|" << endl;
				cout.fill(' ');
				displayRoude = false;
			}
		}
		
	}
	if (error)
		cout << "\n No match found" << endl;
	char c{ 'c' };
	cout << "\n To continue press 'c',\n to search again press 'r',\n to quit any other;" << endl;
	cin >> c;
	if (c == 'c')
		choise(arr, n);
	else
		if (c == 'r')
			findByWord(arr, n);
}

void sortById(MARSHRUT *arr, int n)
{
	bool f = true;
	for (int i = 1; (i <= n) && (f == true); ++i)
	{
		f = false;
		for (int j = 0; j < (n - i); ++j)
		{
			if (arr[j].id > arr[j + 1].id)
			{
				std::swap(arr[j], arr[j + 1]);
				f = true;
			}
		}
	}
	table();
	for(int a = 0; a < n; ++a)
	{
		cout.width(15);
		cout << left <<arr[a].beginPunct;
		cout << "	|";
		cout.width(15);
		cout << left << arr[a].endPunct;
		cout << "	|";
		cout.width(15);
		cout << left << arr[a].id << endl;
		cout.width(50);
		cout.fill('_');
		cout << right << "|" << endl;
		cout.fill(' ');
	}
	cout.clear();
	char c{ 'c' };
	cout << "\n To continue press 'c', to quit any other;" << endl;
	cin >> c;
	if (c == 'c')
		choise(arr, n);
}

void table()
{
	cout.width(50);
	cout.fill('_');
	cout << "_";
	cout.fill(' ');
	cout.width(15);
	cout << "\nDeparture";
	cout.width(15);
	cout << "|Arrival";
	cout.width(15);
	cout << "	|ID" << endl;
	cout.width(50);
	cout.fill('_');
	cout << "|" << endl;
	cout.fill(' ');
}