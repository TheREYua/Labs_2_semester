#include"functions.h"

/*
N населених пунктів пронумеровані від 1 до n.Деякі пари пунктів з’єднані
дорогами.Визначити, чи існує шлях із i –го пункту в j – тий.
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