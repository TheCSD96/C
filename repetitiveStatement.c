#include <stdio.h>
#include <conio.h>
#pragma warning (disable : 4996)

int main(void) {

	// ����ڰ� Enter�� �Է��� ������ ���� �Է¹ޱ�
	char ch;

	while ((ch = getchar()) != '\n') { // �Է¹��� ���ڰ� \n�� ������ while���� �����Ѵ�.
									   // ch = getchar()�� �Ұ�ȣ�� �� �� �� ��������Ѵ�.
		putchar(ch);
	}
	return 0;
	
	// ���� �Է¹޾� �� ����ŭ ���� ���
	// 1���� ���� ���� ������ 1, 9���� ū ���� ������ 9�� ����
	int num = 0;
	int i = 0;

	scanf("%d", &num);

	if (num < 1) {
		num = 1;
	}
	if (num > 9) {
		num = 9;
	}
	while (i < num) {
		putchar('*');
		i++;
	}
	putchar('\n');
	
	// �Է¹��� ���� ������ - while
	int num;
	int i = 1;

	printf("�Է�: ");
	scanf("%d", &num);

	printf("%d���Դϴ�.\n", num);
	while (i <= 9) {
		printf("%d * %d = %d\n", num, i, num * i);
		i++;
	}
	return 0;
	
	// 5 * 5 ����� �� ��� - while
	int i = 0, j = 0;

	while (i < 5) {
		while (j < 5) {
			printf("*\t");
			j++;
		}
		j = 0;
		i++;
		putchar('\n');
	}
	return 0;
	
	// 1���� 10������ �� ���ϱ� - while
	int i = 1;
	int nTotal = 0;

	while (i <= 10) {
		nTotal += i;
		i++;
	}
	printf("Total : %d\n", nTotal);
	return 0;
	
	// ������ �Է¹ް� �ش� ������ ���, ������ ERROR ��� - while
	int num;
	int i = 1;

	printf("�Է�: ");
	scanf("%d", &num);

	if (num < 2 || num > 9) {
		printf("ERROR\n");
	}
	else {
		while (i < 10) {
			printf("%d * %d = %d\n", num, i, num * i);
			i++;
		}
	}
	return 0;
	
	// 5 * 5 ����� �� ��� - for // i�� ���� ����ϰ�, j�� ���� ����Ѵٰ� �����ϸ� ���ϴ�.
	int i, j;

	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++) {
			printf("*\t");
		}
		putchar('\n');
	}
	return 0;
	
	// ���� �ﰢ�� ����� �� ��� - 1
	int i, j;

	for (i = 0; i < 5; i++) {
		for (j = 0; j <= i; j++) {
			printf("*\t");
		}
		putchar('\n');
	}
	return 0;
	
	// ���� �ﰢ�� ����� �� ��� - 2
	int i, j;

	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++) {
			if (i + j >= 4) {
				printf("*\t");
			}
			else
				printf("\t");
		}
		putchar('\n');
	}
	return 0;
	
	// ���� �ﰢ�� ����� �� ��� - 3
	int i, j;

	for (i = 0; i < 5; i++) {
		for (j = 0; i + j < 4; j++) {
			printf("\t");
		}
		for (j = 0; j <= i; j++) {
			printf("*\t");
		}
		putchar('\n');
	}
	return 0
	;
	// ���� �ﰢ�� ����� �� ��� - 4
	int i, j;

	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5 + i; j++) {
			if (i + j >= 4) {
				printf("*\t");
			}
			else
				printf("\t");
		}
		putchar('\n');
	}
	return 0;
}