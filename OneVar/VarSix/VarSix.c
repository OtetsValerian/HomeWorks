#include <stdio.h>

int main() 
{
	int age;
	printf("");	//�� ���� 'printf("");'
	scanf_s("%d", &age);	//���� ��������� scanf ������ scanf_s � �� ���� & ����� age

	if (age <= 13)
	{
		printf("%d - �������", age);	//�� ���� ';'
	}
	else if (14 <= age && age < 25)
	{
		printf("%d - ���������", age);		//�� ��� ������ �����
	}
	else if (25 <= age && age < 60)		// ������ ';'
	{
		printf("%d - ��������", age);	//�� ���� �������	�	�� ��� ������ �����
	}
	else
	{
		printf("%d - ��������", age);	//�� ��� ������ �����
	}
	return 0;
}