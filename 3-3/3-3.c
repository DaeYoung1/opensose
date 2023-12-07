#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define ROWS 3
#define COLS 3

void main(void) {
	int A[ROWS][COLS] = { {1,0,0} , {0,1,0}, {0,0,1} };
	int B[ROWS][COLS] = { {1,0,0} , {0,1,0}, {0,0,1} };
	int C[ROWS][COLS];

	//두개행렬더한다.
	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLS; j++) {
			C[i][j] = A[i][j] + B[i][j];
			printf("%2d", C[i][j]);
		}
		printf("\n");
	}
	
}