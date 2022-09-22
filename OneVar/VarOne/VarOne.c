#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
	setlocale(LC_ALL, "rus");

	float x1, y1;
	float x2, y2;
	float x3, y3;

	printf("¬ведите координаты вершины A: ");
	scanf_s("%f %f", &x1, &y1);

	printf("¬ведите координаты вершины B: ");
	scanf_s("%f %f", &x2, &y2);


	printf("¬ведите координаты вершины C: ");
	scanf_s("%f %f", &x3, &y3);

	float AB = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
	float AC = sqrt(pow(x1 - x3, 2) + pow(y1 - y3, 2));
	float CB = sqrt(pow(x3 - x2, 2) + pow(y3 - y2, 2));

	float P = (AB + AC + CB) / 2;
	float S = sqrt(P * (P - AB) * (P - AC) * (P - CB));

	printf("ѕериметр треугольника: %.2f\nѕлощадь треугольника: %.2f\n", P, S);


	return 0;
}