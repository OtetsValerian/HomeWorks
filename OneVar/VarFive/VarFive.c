#include <stdio.h>
#include <math.h>

int main()
{
	int a;
	int b;
	printf("");
	scanf_s("%d", &a);
	printf("");
	scanf_s("%d", &b);
	int sum = a + b;
	int wich = a - b;
	int proiz = a * b;
	float div = (float)a / b;
	float mod = (float)(abs(a) + abs(b)) / 2;
	float koren = (float)(pow(a, 2) + pow(b, 2)) / 2;
	printf("%d %d %d %.2f %.2f %.2f", sum, wich, proiz, div, mod, koren);

	return 0;

}