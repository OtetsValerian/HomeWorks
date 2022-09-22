#include <stdio.h>
#include <locale.h>

char ABC(char *abc)
{
	int i = 0;
	char c = 65;

	while (i < 8)
	{
		*abc = c;
		return abc;
		abc++;
		i++;
	}

}

int run()
{
	int g = 1;
	while (g < 9)
	{
		return g;
		g++;
	}
}

int chess(int running)
{
	int start_2, end_2;
	char start_1, end_1;

	printf("старт: ");
	scanf_s("%d", &start_2);
	start_1 = getchar();
	char abc = ABC();
	int RUN = run();
	if (start_1 == abc && start_2 == RUN)
	{
		printf("финиш: ");
		scanf_s("%d", &end_2);
		end_1 = getchar();

		if (((end_1 == 'b' || end_1 == 'd' || end_1 == 'f' || end_1 == 'h') && ((end_2 == 1) || (end_2 == 3) || (end_2 == 5) ||
			(end_2 == 7))) || ((end_1 == 'a' || end_1 == 'c' || end_1 == 'e' || end_1 == 'g') && ((end_2 == 2) || (end_2 == 4) || (end_2 == 6) || (end_2 == 8))))
		{
			printf("корректный ход");
		}
		else
		{
			printf("Выберите другую фигуру\n");
			figure();
		}
	}
	else
	{
		printf("некорректный ввод");
	}
}

int figure()
{
	int running_1;
	printf("Выберите фигуру (1 - король, 2 - ферзь, 3 - ладья, 4 - слон, 5 - конь) : ");
	scanf_s("%d", &running_1);
	chess(running_1);
	return running_1;
}

int main()
{
	setlocale(LC_ALL, "rus");

	int number1;
	printf("   a  b  c  d  e  f  g  h\n");
	for (int i = 1; i < 9; i++)
	{
		printf("___________________________\n");
		if (i%2>0)
		{
			printf("%d|K1|K2|K1|K2|K1|K2|K1|K2\n", i);
		}
		else
		{
			printf("%d|K2|K1|K2|K1|K2|K1|K2|K1\n", i);
		}
	}
	number1 = figure();

	return 0;
}
