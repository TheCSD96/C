#include <stdio.h>
#pragma warning (disable : 4996)

int main(void) {
	
	// 사칙연산 골라서 계산
	char operator = 0;
	int num1, num2;

	printf("두 정수를 입력하세요: ");
	scanf("%d %d", &num1, &num2);

	printf("어떤 연산을 선택하시겠습니까?\n");
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
	
	// 국어, 영어, 수학 점수를 입력하면 평균을 계산하고 등급 출력
	int kor, eng, math;
	char grade;
	double avg = 0.0;

	printf("국어 점수를 입력하세요: ");
	scanf("%d", &kor);
	printf("영어 점수를 입력하세요: ");
	scanf("%d", &eng);
	printf("수학 점수를 입력하세요: ");
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
	printf("당신의 평균은 %.2f점이고, 등급은 %c입니다.\n", avg, grade);
	return 0;
	
}