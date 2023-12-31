#define _CRT_SECURE_NO_WARNINGS
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

void size_add(int* s, int* arr);

void main() {
    //size 가 3인 배열 생성
    int* Np;
    int i = 0;
    int nSize = 3;
    Np = malloc(sizeof(int) * nSize);

    scanf("%d", &Np[0]);

    if (Np[0] != -1) {
        for (i = 1;; i++) {
            scanf("%d", &Np[i]);
            if (Np[i] == -1) break;
            if (i + 1 >= nSize) size_add(&nSize, &Np);

        }
        for (int j = 0; j <= i; j++)
            printf(" %d", Np[j]);
    }

}

void size_add(int* s, int** arr) {
    // 새로운 Size를 획득한다.
    int nNewsize = *s + 3;
    int* temp;
    temp = malloc(sizeof(int) * nNewsize);

    //temp에 기존의 배열 원소들을 복사한다. 
    for (int i = 0; i < *s; i++) temp[i] = (*arr)[i];
    //기존의 arr메모리들을 해제한다. 
    free(*arr);

    *arr = temp;
    *s = nNewsize;
}