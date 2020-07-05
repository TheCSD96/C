#include <stdio.h> // standard input output = 표준 입출력 헤더파일
#include <conio.h>
#pragma warning (disable : 4996)

int main(void) {
	/*

	// getchar() / putchar()
	char ch = 0;

	ch = getchar(); // 문자를 입력받음

	putchar(ch); // 변수 ch에 담겨있는 정보를 출력

	putchar('Z'); // 'Z'를 출력

	// 결과적으로 내가 입력한 문자 + Z가 같이 출력된다.

	
	// 문자를 입력받을 때는 2가지 방법이 존재한다. scanf("%c", &변수); / ch = getchar();
	// scanf 또한 입력함수이지만 사용자가 문자 입력 후 Enter를 치게되면 PC에서는 \n이 입력된다.
	// 변수는 아마 char형으로 선언되어 있을텐데 개행문자 또한 문자로 취급하기 때문에 입력이 종료되지 않는다.
	// 강제로 버퍼의 \n을 지워주지 않는 이상 입력은 계속 받게되는 상태로 남게 된다.
	
	
	return 0;
	*/

	/*

	// _getch() _getche()
	char ch = 0;

	printf("아무 키나 누르면 다음으로 넘어갑니다.");
	ch = _getch(); // 출력해보면 사용자가 입력한 문자가 나오지 않는 것을 확인할 수 있다.
				   // stdio 헤더파일에는 _getch() 함수가 존재하지 않는다. 
				   // 따라서 conio.h라는 헤더파일을 선언해줘야 한다.
				   // 추가적으로 _getche() 함수도 있는데 이는 내가 입력한 문자가 화면에 나온다.

	printf("\n입력한 키는 ");
	putchar(ch); // \n을 남기지 않기 위해 printf 함수가 아닌 putchar() 함수를 사용한다.
	printf("입니다.\n");
	return 0;
	*/

	/*
	// gets / puts
	char szName[32] = { 0 };
	
	printf("이름을 입력하세요: ");
	gets(szName); // gets() 함수에는 보안 결함이 있기 때문에 사실상 권장하는 것은 gets_s() 함수를 권장한다.

	printf("당신의 이름은: ");
	puts(szName);
	puts("입니다.");
	return 0;
	*/

	/*
	// gets_s
	char szName[32] = { 0 };

	printf("이름을 입력하세요: ");
	gets_s(szName, sizeof(szName)); // sizeof 연산자는 메모리의 크기를 측정하는 연산자로
									// szName이 가지고 있는 바이트 크기를 계산하라는 의미다.
									// gets()와 비교해보면 솔루션 빌드 창의 경고 메시지가 뜨지 않는 것을 확인할 수 있다.
	printf("당신의 이름은: ");
	puts(szName);
	puts("입니다.");
	return 0;
	*/

	/*
	// printf() / scanf()
	int age = 0;
	char name[32];

	printf("나이를 입력하세요.: ");
	scanf("%d", &age);
	rewind(stdin); // fflush(stdin)으로 입력 버퍼의 개행문자를 지워주는 것이 맞지만 19 studio 버젼 이후로는 rewind(stdin)가 더 잘먹힘..?
	printf("이름을 입력하세요.: ");
	gets_s(name, sizeof(name));

	printf("\n당신의 나이는 %d살이고 이름은 '%s'입니다.", age, name);
	return 0;
	*/

	/*
	// getchar() 함수 이용, 두 번째 글자 출력
	char ch;

	printf("입력: ");
	ch = getchar();
	ch = getchar();

	putchar(ch);
	return 0;
	*/

	/*
	// 정수 두 개를 입력받아 평균을 계산
	int num1, num2;

	printf("두 정수를 입력하세요.: ");
	scanf("%d %d", &num1, &num2);

	printf("AVG : %.2f\n", (double)(num1 + num2) / 2);
	return 0;
	*/

	/*
	// 초를 입력받고 시:분:초로 변환
	int num;
	int hour, minute, second;

	printf("입력: ");
	scanf("%d", &num);

	hour = num / 3600;
	minute = (num % 3600) / 60;
	second = (num % 3600) % 60;

	printf("%d초는 %02d시간 %02d분 %02d초 입니다.", num, hour, minute, second);
	return 0;
	*/

	/*
	// 세 정수를 입력받고 합을 출력
	int nInput = 0, nTotal = 0;
	
	scanf("%d", &nInput);
	nTotal += nInput;
	scanf("%d", &nInput);
	nTotal += nInput;
	scanf("%d", &nInput);
	nTotal += nInput;

	printf("Total : %d\n", nTotal);
	return 0;

	printf("Total : %d\n", nTotal);
	return 0;
	*/
}