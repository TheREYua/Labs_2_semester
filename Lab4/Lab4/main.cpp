#include"functions.h"

//Ввести стрічку довільної довжини, яку трактуватимемо як текст, у якому
//слова відокремлені одним або кількома інтервалами(довжина слів, загалом,довільна).
//Вивести всі слова, які закінчуються заданою буквою, наприкладлітерою Z. Літеру задавати з клавіатури.
int main()
{
	const int length { 256 };
	char arr[length];
	char letter = 'z';

	letter = input(length, arr, letter);
	counter(length, arr, letter);
	system("pause");
	return 0;
}