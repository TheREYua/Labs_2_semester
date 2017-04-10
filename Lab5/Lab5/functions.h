#pragma once
#include<iostream>
#include <algorithm>

using namespace std;

const int fieldSize{ 20 };
struct MARSHRUT
{
	char beginPunct[fieldSize];
	char endPunct[fieldSize];
	int id;
};

int main();
int input();
void arrInput(MARSHRUT*, int);
void sortById(MARSHRUT*, int);
void choise(MARSHRUT*, int);
void findByID(MARSHRUT*, int);
void findByWord(MARSHRUT*, int);
void table();