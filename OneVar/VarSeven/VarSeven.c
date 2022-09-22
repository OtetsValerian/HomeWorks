#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <iso646.h>

int main()
{
	setlocale(LC_ALL, "rus");
	
	int x, y, z;

	printf("Введите x: ");
	scanf_s("%d", &x);
	printf("Введите y: ");
	scanf_s("%d", &y);
	printf("Введите z: ");
	scanf_s("%d", &z);

	if (x != y && x != z && z != y)
	{
		if ((x > y && y > z) || (z > y && x > z))
		{
			z += x;
		}
		else if ((y > x && x > z) || (z > x && y > z))
		{
			z += y;
		}
		else
		{
			z *= z ;
		}
		printf("%d", z);
	}
	else
	{
		if (x == y && y == z)
		{
			printf("Все переменные равны");
		}
		else
		{
			if (x == y && x !=z)
			{
				printf("%d = %d", x, y);
			}
			else if (x == z && x != y)
			{
				printf("%d = %d", x, z);
			}
			else if (z == y && z != x)
			{
				printf("%d = %d", z, y);
			}
		}
	}
}