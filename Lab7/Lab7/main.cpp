#include"functions.h"

/*
N ��������� ������ ������������ �� 1 �� n.���� ���� ������ 璺����
��������.���������, �� ���� ���� �� i ��� ������ � j � ���.
*/

int main()
{
	system("color A");
	int firstPun{ 1 }, secondPun{ 2 };
	int n = inputNum();
	int **roadMap = new int*[n];
	for (int i = 0; i < n; ++i)
		roadMap[i] = new int[n];
	formMas(roadMap, n);
	inputPun(firstPun, secondPun, n);
	func(roadMap, firstPun, secondPun, n);	
	return 0;
}