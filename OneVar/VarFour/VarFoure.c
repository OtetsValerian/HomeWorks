#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "rus");
	int a;
	printf("������� ������� ����: ");
	scanf_s("%d", &a);
	int V = a * a * a;
	int S = 6 * a * a;
	int s = 4 * a * a;
	printf("����� ���: %d\n������� ����: %d\n������� �������� �����������: %d\n", V, S, s);
	return 0;

}