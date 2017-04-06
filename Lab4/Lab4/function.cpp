#include"functions.h"

char input(int length, char* arr, char letter) 
{
	cout << "Enter your text" << endl;
	cin.getline(arr, length);
	cout << "Enter the seeking letter" << endl;
	cin >> letter;
	return letter;
}

void counter(int length, char* arr, char letter)
{
	int i = 0, num = 0;
	int start = 0;
	cout << "\nseking for words ends with: " << letter << endl;
	for (arr[i]; i < length; i++)
	{
		num = 0;
		if (((arr[i] >= 'a') && (arr[i] <= 'z')) || ((arr[i] >= 'A') && (arr[i] <= 'Z')))
		{
			start = i;
			while (((arr[i] >= 'a') && (arr[i] <= 'z')) || ((arr[i] >= 'A') && (arr[i] <= 'Z')))
			{
				num++;
				i++;
			}
			formWord(arr, letter, start, num);
			num = 0;
		}
	}
}

void formWord(char* arr, char letter, int start, int num)
{
	char *word = new char[num];
	char lastLetter = letter;
	for(int j = 0; (j < num) && (word[j] != '/0'); j++)
	{
		lastLetter = word[j] = arr[start++];

	}
	cout << "\nfind the word length: " << num;
	if (lastLetter == letter)
	{
		cout << "\ncorrect word, last letter: " << lastLetter << endl << endl;
		for (int f = 0; f < num; f++)
			cout << word[f];
		cout << endl;
	}
	else
		cout << "\nwrong word, last letter: " << lastLetter << endl;
}

