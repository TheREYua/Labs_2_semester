#include"functions.h"

/*
����� �� ������ �������� �������� ax + by + c = 0 , �� a � b ���������
�� ��� ����. ������ ���������� ���� � ����, �����������
���� � ��� �����. ����� � ���� �������� ����������� �������� ������
(�� ����� 3). ���������� ������ ����� � ����������� ��� ������, ��:
	a) ��������� ������ �� ������, ������� � �������� ����;
	b) ����������� ����� �����, ������ � �������� ����;
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