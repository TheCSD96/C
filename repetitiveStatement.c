#include <stdio.h>
#include <conio.h>
#pragma warning (disable : 4996)

int main(void) {

	// 사용자가 Enter를 입력할 때까지 문자 입력받기
	char ch;

	while ((ch = getchar()) != '\n') { // 입력받은 문자가 \n이 나오면 while문을 종료한다.
									   // ch = getchar()를 소괄호로 한 번 더 묶어줘야한다.
		putchar(ch);
	}
	return 0;
	
	// 수를 입력받아 그 수만큼 별을 출력
	// 1보다 작은 수는 무조건 1, 9보다 큰 수는 무조건 9로 고정
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
	
	// 입력받은 수의 구구단 - while
	int num;
	int i = 1;

	printf("입력: ");
	scanf("%d", &num);

	printf("%d단입니다.\n", num);
	while (i <= 9) {
		printf("%d * %d = %d\n", num, i, num * i);
		i++;
	}
	return 0;
	
	// 5 * 5 모양의 별 찍기 - while
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
	
	// 1에서 10까지의 합 구하기 - while
	int i = 1;
	int nTotal = 0;

	while (i <= 10) {
		nTotal += i;
		i++;
	}
	printf("Total : %d\n", nTotal);
	return 0;
	
	// 정수를 입력받고 해당 구구단 출력, 음수는 ERROR 출력 - while
	int num;
	int i = 1;

	printf("입력: ");
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
	
	// 5 * 5 모양의 별 찍기 - for // i는 열을 담당하고, j는 행을 담당한다고 생각하면 편하다.
	int i, j;

	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++) {
			printf("*\t");
		}
		putchar('\n');
	}
	return 0;
	
	// 직각 삼각형 모양의 별 찍기 - 1
	int i, j;

	for (i = 0; i < 5; i++) {
		for (j = 0; j <= i; j++) {
			printf("*\t");
		}
		putchar('\n');
	}
	return 0;
	
	// 직각 삼각형 모양의 별 찍기 - 2
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
	
	// 직각 삼각형 모양의 별 찍기 - 3
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
	// 직각 삼각형 모양의 별 찍기 - 4
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