#include <stdio.h>
#pragma warning (disable : 4996)

int main(void) {

	// 세 정수를 입력받아 큰 수 출력 - 서바이벌 형식
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
	
	// 버스요금 계산
	int pay = 1000;
	int age;

	printf("입력: ");
	scanf("%d", &age);

	if (age < 20) {
		printf("최종요금 : %.0f원\n", pay * 0.75);
	}
	else {
		printf("최종요금 : %d원\n", pay);
	}
	return 0;
	
	// 다르게 풀어보기
	int pay = 1000;
	int age;
	double rate = 0.0;

	printf("입력: ");
	scanf("%d", &age);

	if (age < 20) {
		rate = 0.25;
		printf("최종요금 : %.0f원\n", pay * (1 - rate));
	}
	else {
		rate = 0;
		printf("최종요금 : %.0f원\n", pay * (1 - rate));
	}
	return 0;
	
	// 나이에 따른 분류 및 요금계산
	int pay = 1000;
	int age;
	double rate = 0.0;

	scanf("%d", &age);
	
	if (age < 13) {
		if (age < 3) {
			rate = 1.0;
			printf("최종요금 : %.0f원\n", pay * (1 - rate));
		}
		else {
			rate = 0.5;
			printf("최종요금 : %.0f원\n", pay * (1 - rate));
		}
	}
	else {
		if (age < 19) {
			rate = 0.25;
			printf("최종요금 : %.0f원\n", pay * (1 - rate));
		}
		else {
			rate = 0.0;
			printf("최종요금 : %.0f원\n", pay * (1 - rate));
		}
	}
	return 0;
	
	// 성적에 따른 등급 부여
	int score;
	char ch;

	printf("성적을 입력하세요: ");
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
	printf("입력하신 점수는 %d점, 등급은 %c입니다.\n", score, ch);
	return 0;
	
}