#include<stdio.h>

void main()
{
	int i = 1, s = 0;
	do {
		s += i;
		i++;
	} while (i <= 50);
	printf("1부터 50까지의 정수의 합 : %d\n\n", s);
}