// file: scorewitch.c
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int score;

	printf("���� �Է�: ");
	scanf("%d", &score);

	switch (score / 10) {
	case 10: case 9:
		printf("������ %d ������ ������ %c �Դϴ�.", score, 'A');
		break;
	case 8:
		printf("������ %d ������ ������ %c �Դϴ�.", score, 'B');
		break;
	case 7:
		printf("������ %d ������ ������ %c �Դϴ�.", score, 'B');
		break;
	case 6:
		printf("������ %d ������ ������ %c �Դϴ�.", score, 'C');
		break;
		
	default:
		printf("������ %d ������ ������ %c �Դϴ�.", score, 'F');

	}

	return 0;
}