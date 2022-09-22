#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "rus");
	int a;
	printf("Введите сторону куба: ");
	scanf_s("%d", &a);
	int V = a * a * a;
	int S = 6 * a * a;
	int s = 4 * a * a;
	printf("Объем куб: %d\nПлощадь куба: %d\nПлощадь боковвой поверхности: %d\n", V, S, s);
	return 0;

}