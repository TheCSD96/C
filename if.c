#include <stdio.h>
#pragma warning (disable : 4996)

int main(void) {

	// �� ������ �Է¹޾� ū �� ��� - �����̹� ����
	int num1, num2, num3;
	int nMax = 0;

	scanf("%d", &num1);
	if (num1 > nMax) {
		nMax = num1;
	}
	scanf("%d", &num2);
	if (num2 > nMax) {
		nMax = num2;
	}
	scanf("%d", &num3);
	if (num3 > nMax) {
		nMax = num3;
	}
	printf("MAX : %d\n", nMax);
	return 0;
	
	// ������� ���
	int pay = 1000;
	int age;

	printf("�Է�: ");
	scanf("%d", &age);

	if (age < 20) {
		printf("������� : %.0f��\n", pay * 0.75);
	}
	else {
		printf("������� : %d��\n", pay);
	}
	return 0;
	
	// �ٸ��� Ǯ���
	int pay = 1000;
	int age;
	double rate = 0.0;

	printf("�Է�: ");
	scanf("%d", &age);

	if (age < 20) {
		rate = 0.25;
		printf("������� : %.0f��\n", pay * (1 - rate));
	}
	else {
		rate = 0;
		printf("������� : %.0f��\n", pay * (1 - rate));
	}
	return 0;
	
	// ���̿� ���� �з� �� ��ݰ��
	int pay = 1000;
	int age;
	double rate = 0.0;

	scanf("%d", &age);
	
	if (age < 13) {
		if (age < 3) {
			rate = 1.0;
			printf("������� : %.0f��\n", pay * (1 - rate));
		}
		else {
			rate = 0.5;
			printf("������� : %.0f��\n", pay * (1 - rate));
		}
	}
	else {
		if (age < 19) {
			rate = 0.25;
			printf("������� : %.0f��\n", pay * (1 - rate));
		}
		else {
			rate = 0.0;
			printf("������� : %.0f��\n", pay * (1 - rate));
		}
	}
	return 0;
	
	// ������ ���� ��� �ο�
	int score;
	char ch;

	printf("������ �Է��ϼ���: ");
	scanf("%d", &score);

	if (score >= 90)
		ch = 'A';
	else if (score >= 80)
		ch = 'B';
	else if (score >= 70)
		ch = 'C';
	else if (score >= 60)
		ch = 'D';
	else
		ch = 'F';
	printf("�Է��Ͻ� ������ %d��, ����� %c�Դϴ�.\n", score, ch);
	return 0;
	
}