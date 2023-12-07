#include <stdio.h>
#include <string.h>

void bubble(char*, int);

void main() {
	char str[80];

	printf("문자열 입력 : ");
	gets(str);
	bubble(str, strlen(str));
	printf("문자열을 버블 정렬한 결과 : %s\n", str);
}

void bubble(char* str, int count) {
	int nPass = 0; // 반복 수행할 카운터 변수
	int nChange = 1; //교체여부 0 : 교체안함, 1 : 교체
	char cTemp;

	printf("\n[버블 정렬 함수 영역]\n");
	// (n-1)회 nPass 반복 수행
	while (nPass < count - 1 && nChange) {
		nChange = 0;
		//오름차순 정렬, 큰 값으로 문자 교체
		for (int i = 0; i < count - nPass - 1; ++i) {
			if (str[i] > str[i + 1]) {
				nChange = 1;
				cTemp = str[i];
				str[i] = str[i + 1];
				str[i + 1] = cTemp;
			}
		}
		nPass++;
	}
}