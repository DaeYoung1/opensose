#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

#define STU_NUMBER 1
#define REG_NUMBER 2

struct student
{
	int type;
	union {
		int stu_number;     //학번
		char reg_number[15];//주민등록증
	} id;
	char name[20];
};

void print(struct student s)
{
	switch (s.type) {
	case STU_NUMBER:
		printf("학번: %d\n", s.id.stu_number);
		printf("이름: %s\n", s.name);
		break;
	case REG_NUMBER:
		printf("주민등록번호: %s\n", s.id.reg_number);
		printf("이름: %s\n", s.name);
		break;
	default:
		printf("타입오류\n");
		break;
	}
}
int main(void) {
	struct student s1, s2;

	s1.type = STU_NUMBER;
	s1.id.stu_number = 20200560;
	strcpy(s1.name, "송대영");

	s2.type = REG_NUMBER;
	strcpy(s2.id.reg_number, "010315-3580517");
	strcpy(s2.name, "송대영");

	print(s1);
	print(s2);

}