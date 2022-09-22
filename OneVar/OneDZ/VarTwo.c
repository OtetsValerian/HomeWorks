#include <stdio.h>

int main()
{
	int a2;
	int a1 = 1;
	printf("%d: ", a1);
	scanf_s("%d", &a2);

	a1++;
	a2++;
	printf("%d: %d\n", a1, a2);

	a1++;
	a2++;
	printf("%d: %d\n", a1, a2);

	return 0;
}