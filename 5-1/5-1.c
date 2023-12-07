#include <stdio.h>

int Add(int num1, int num2);
int Sub(int num1, int num2);

void main() {
	int nResult;
	int(*fp)(int, int);	//함수 포인터 정의
	printf("100과 200의 덧셈 연산과 뺄셈 연산\n");

	fp = Add;			//Add() 함수 주소를 포인터에 대입
	nResult = fp(100, 200); // 인수를 전달하여 Add()함수 호출
	printf("덧셈 연산 결과 : %d\n", nResult);

	fp = Sub;				//Sub() 함수 주소를 포인터에 대입
	nResult = fp(100, 200); // 인수를 전달하여 Sub()함수 호출
	printf("뺄셈 연산 결과 : %d\n", nResult);

}
int Add(int num1, int num2) {
	printf("\n[Add() 함수 영역]\n");
	return num1 + num2;
}
int Sub(int num1, int num2) {
	printf("\n[Sub() 함수 영역]\n");
	return num1 - num2;
}
