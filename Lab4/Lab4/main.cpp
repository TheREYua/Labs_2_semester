#include"functions.h"

//������ ������ ������� �������, ��� �������������� �� �����, � �����
//����� ���������� ����� ��� ������� �����������(������� ���, �������,�������).
//������� �� �����, �� ����������� ������� ������, ��������������� Z. ˳���� �������� � ���������.
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