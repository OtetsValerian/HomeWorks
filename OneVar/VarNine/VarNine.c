#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "rus");
	int num1, num2, num3;
	printf("������� ���� ������: ");
	scanf_s("%d %d % d", &num1, &num2, &num3);
	if (num1 == 5 & num1 == 5 & num1 == 5)
	{
		printf("��������");
	}
	else if ((num1 == 4 & num2 == 4 && num3 == 4) || (num1 == 4 & num2 == 5 && num3 == 5) || (num1 == 4 & num2 == 4 && num3 == 5) || (num1 == 5 & num2 == 5 && num3 == 4) || (num1 == 4 & num2 == 5 && num3 == 4) || (num1 == 5 & num2 == 4 && num3 == 4))
	{
		printf("��������");
	}
	else if ((num1 == 3 & num2 == 3 && num3 == 3) || (num1 == 3 & num2 == 5 && num3 == 5) || (num1 == 3 & num2 == 3 && num3 == 5) || (num1 == 5 & num2 == 5 && num3 == 3) || (num1 == 3 & num2 == 5 && num3 == 3) || (num1 == 5 & num2 == 3 && num3 == 3) || (num1 == 3 & num2 == 4 && num3 == 5) || (num1 == 3 & num2 == 5 && num3 == 4) || (num1 == 5 & num2 == 4 && num3 == 3) || (num1 == 4 & num2 == 5 && num3 == 3) || (num1 == 5 & num2 == 3 && num3 == 4) || (num1 == 3 & num2 == 4 && num3 == 4) || (num1 == 3 & num2 == 3 && num3 == 4) || (num1 == 4 & num2 == 4 && num3 == 3) || (num1 == 3 & num2 == 4 && num3 == 3) || (num1 == 4 & num2 == 3 && num3 == 3))
	{
		printf("��������");
	}
	else if (num1 == 2 || num2 == 2 || num3 == 2 || num1 == -1 || num2 == -1 || num3 == -1)
	{
		printf("�� ����");
	}
}