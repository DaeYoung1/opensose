#define _CRT_SECURE_NO_WARNIBGS
#include <stdio.h>

void main()
{
	int num;
	printf("enter a number: ");
	scanf_s("%d", &num);
	switch (num >> 31) {
	case -1:
		printf("number is negative\n"); break;
	default:
		printf("number is positive\n");
	}
}