#include <stdio.h>
#pragma warning (disable : 4996)

int main(void) {
	
	// ��Ģ���� ��� ���
	char operator = 0;
	int num1, num2;

	printf("�� ������ �Է��ϼ���: ");
	scanf("%d %d", &num1, &num2);

	printf("� ������ �����Ͻðڽ��ϱ�?\n");
	printf("1. +, 2. -, 3. /, 4. %% :");
	rewind(stdin);
	operator = getchar();

	switch(operator) {
	case '1':
		printf("%d + %d = %d\n", num1, num2, num1 + num2);
		break;
	case '2':
		printf("%d - %d = %d\n", num1, num2, num1 - num2);
		break;
	case '3':
		printf("%d / %d = %d\n", num1, num2, (int)num1 / num2);
		break;
	case '4':
		printf("%d %% %d = %d\n", num1, num2, num1 % num2);
		break;
	default:
		puts("ERROR");
	}
	return 0;
	
	// ����, ����, ���� ������ �Է��ϸ� ����� ����ϰ� ��� ���
	int kor, eng, math;
	char grade;
	double avg = 0.0;

	printf("���� ������ �Է��ϼ���: ");
	scanf("%d", &kor);
	printf("���� ������ �Է��ϼ���: ");
	scanf("%d", &eng);
	printf("���� ������ �Է��ϼ���: ");
	scanf("%d", &math);

	avg = (kor + eng + math) / 3.0;
	
	switch ((int)avg) {
	case 90:
		grade = 'A';
	case 80:
		grade = 'B';
	case 70:
		grade = 'C';
	case 60:
		grade = 'D';
	default:
		grade = 'F';
	}
	printf("����� ����� %.2f���̰�, ����� %c�Դϴ�.\n", avg, grade);
	return 0;
	
}