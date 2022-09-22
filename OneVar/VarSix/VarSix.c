#include <stdio.h>

int main() 
{
	int age;
	printf("");	//не было 'printf("");'
	scanf_s("%d", &age);	//было записанно scanf вместо scanf_s и не было & перед age

	if (age <= 13)
	{
		printf("%d - детство", age);	//не было ';'
	}
	else if (14 <= age && age < 25)
	{
		printf("%d - молодость", age);		//не тот формат числа
	}
	else if (25 <= age && age < 60)		// лишнее ';'
	{
		printf("%d - зрелость", age);	//не было отступа	и	не тот формат числа
	}
	else
	{
		printf("%d - старость", age);	//не тот формат числа
	}
	return 0;
}