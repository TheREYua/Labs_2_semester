#include"functions.h"

/*
Пряма на площині задається рівнянням ax + by + c = 0 , де a і b одночасно
не рівні нулю. Будемо розглядати лише ті прямі, коефіцієнти
яких є цілі числа. Нехай у файлі містяться коефіцієнти декількох прямих
(не менше 3). Сформувати вихідні файли з коефіцієнтів тих прямих, які:
	a) паралельні першій із прямих, заданих у вхідному файлі;
	b) перетинають першу пряму, задану у вхідному файлі;
*/

int main()
{
	int a{ 1 }, b{ 1 }, c{ 1 };
	int num{ 3 };
	ofstream clean1("C:/Programing/Labs/parallel.txt");
	ofstream clean2("C:/Programing/Labs/perpendicula.txt");
	clean1.close();
	clean2.close();
	for (int i = 0; i < num; ++i)
	{
		input(a, b, c);
		findParallel(a, b, c);
		findPerpendicular(a, b, c);
	}
	return 0;
}