#include <stdio.h>

struct student {
	int number;
	char name[20];
	double grade;
};

struct student list[] = {
	{2020001, "������", 4.2},
	{2020002, "���μ�", 3.2},
	{2020003, "������", 3.9},
};

void main(void) {
	struct student super_stu;

	int size = sizeof(list) / sizeof(list[0]);
	super_stu = list[0];

	for (int i = 1; i < size; i++) {
		if (list[i].grade > super_stu.grade)
			super_stu = list[i];
	}
	printf("������ ���� ���� �л��� (�̸�: %s, �й�: %d, ����: %.2f)�Դϴ�\n", super_stu.name, super_stu.number, super_stu.grade);
}