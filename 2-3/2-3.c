#include<stdio.h>

void main()
{
	int i = 1, s = 0;
	do {
		s += i;
		i++;
	} while (i <= 50);
	printf("1���� 50������ ������ �� : %d\n\n", s);
}