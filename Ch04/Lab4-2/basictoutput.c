// file: basictoutput.c

#include <stdio.h>

int main(void)
{
	int age = 23;
	double gpa = 4.395f;
	char gender = 'M';
	float weight = 62.489F;

	printf("����: %c\n", gender);
	printf("�̸�: %s\n", "�� �ο�");
	printf("����: %d\n", age);
	printf("������: %.2f\n", weight);
	printf("�������(GPA): %.3f\n", gpa);

	return 0;
}