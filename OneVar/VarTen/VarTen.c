#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <iso646.h>

int main()
{
	setlocale(LC_ALL, "rus");
	int a, b, c;
	printf("������� ������� ������������: ");
	scanf_s("%d %d %d", &a, &b, &c);
	if (a * a + b * b == c * c)
	{
	printf("�������������");
	}
	else if ((a == b && a != c) || (b == c && b !=a) || (a == c && a != b))
	{
		printf("��������������");
	}
	else if (a == b & a == c)
	{
		printf("��������������");
	}
	
	else if ((a + b > c) && (a + c > b) && (c + b > a))
	{
		printf("������������");
	}
	else
	{
		printf("�� �������� �������������");
	}
}