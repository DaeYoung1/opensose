#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {
	int x, y;
	char xy;
	printf("**** result **** \n\n");
	printf("input x xy y ==? ");
	scanf("%d %c %d", &x, &xy, &y);
	switch (xy) {
	case '*':
		printf("%d * %d = %d\n", x, y, x * y); break;
	case '/':
		printf("%d / %d = %d\n", x, y, x / y); break;
	case '+':
		printf("%d + %d = %d\n", x, y, x + y); break;
	default:
		printf("%d - %d = %d\n", x, y, x - y);
	}
}