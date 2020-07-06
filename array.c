#include <stdio.h>
#pragma warning (disable : 4996)

int main(void) {
	
	// 잘못된 배열 예시
	int aList[5] = { 10, 20, 30, 40, 50 };
	int aListNew[5] = { 0 };
	int i = 0;

	// aListNew = aList;
	for (i = 0; i < 5; i++) {
		aListNew[i] = aList[i];
	}

	for (i = 0; i < 5; i++) {
		printf("%d\t", aListNew[i]);
	}
	putchar('\n');
	return 0;

	// 실행시키면 왼쪽 피연산자는 l-value이어야 한다는 오류 메시지가 뜬다.
	// 이는 11번째 행의 aListNew가 변수가 아니라는 뜻이다.
	// 이처럼 배열은 변수가 아닌 주소상수로써 여러 인스턴스가 모여 하나인 것처럼 보일 뿐이지 실제로는 하나가 아니다.
	// 이를 수정하기 위해서는 aListNew[i] = aList[i]; 로 수정해야한다.
	
	// 배열 내부의 인스턴스 값 최소, 최대 비교
	int aList[5] = { 30, 10, 40, 20, 50 };
	int i = 0, nMax = aList[0];

	for (i = 1; i < 5; i++) {
		if (aList[i] > nMax) {
			nMax = aList[i];
		}
		// for 구문에서 i = 1인 것에 중점을 두어본다. 이유는 무엇일까?
		// i = 0으로 해도 출력은 올바르게 되지만 쓸데없이 계산을 한 번 더하는 꼴이다.
		// i = 0이라고 할 경우에는 aList[0] > nMax의 상황이 생기게 되는데 이는 거짓이기 때문에 if 구문을 실행하지 않는다.
		// 따라서 불필요한 상관을 줄이기 위해 i = 1이라고 초기화하는 것이다.
	}
	// nMax 값이 30으로 초기화되어있고, 반복문을 통해 배열 안의 인스턴스를 계속 받아 값을 비교해서 nMax를 재정의한다.
	for (i = 0; i < 5; i++) {
		printf("%d\t", aList[i]);
	}
	// 배열에 어떤 인스턴스들이 있는지 출력한다.
	putchar('\n');
	printf("MAX : %d\n", nMax);
	return 0;
	
	// 배열 내부의 인스턴스 값 최소, 최대 비교 - another
	int aList[5] = { 30, 40, 10, 50, 20 };
	int i = 0;

	for (i = 1; i < 5; i++) {
		if (aList[i] > aList[0]) {
			aList[0] = aList[i];
		}
	}

	for (i = 0; i < 5; i++) {
		printf("%d\t", aList[i]);
	}
	putchar('\n');
	printf("MAX : %d\n", aList[0]);
	return 0;
	
	// 교환하는 방식으로 배열에서 최솟값 구하기
	int aList[5] = { 30, 40, 10, 50, 20 };
	int i = 0, nTmp = 0;

	for (i = 1; i < 5; i++) {
		if (aList[i] < aList[0]) {
			nTmp = aList[0];
			aList[0] = aList[i];
			aList[i] = nTmp;
		}
		// aList[0]에 배열 인스턴스 중 최솟값이 들어가야한다. 
		// nTmp = 30 > aList[0] = 10 > aList[2] = 30;
	}

	for (i = 0; i < 5; i++) {
		printf("%d\t", aList[i]);
	}
	putchar('\n');
	printf("MIN : %d\n", aList[0]);
	return 0;

	// 논리적인 구조를 따져보자면,
	// 문제에서 출력으로 aList[0] 값이 최솟값으로 나와야하기 때문에 aList[0]보다 작은 인스턴스 값을 받으면
	// 이를 nTmp에 기존의 aList[0] 값을 넣고 aList[0]에 새로 받은 인스턴스에 해당하는 배열 주소를 넣는다.
	
	// 문자의 배열
	int aList[5] = { 30, 40, 10, 50, 20 };
	char szBuffer[6] = { 'H', 'e', 'l', 'l', 'o', '\0' }; // 문자열의 끝은 항상 \0(Null) 문자가 존재한다. 생략해도 상관은 없다.
														  // 다만 szBuffer의 크기를 [5]로 지정하고 Null 문자를 생략하면 
														  // \0 문자가 깨지게 되는 현상을 보게될 것이다.
	char szData[8] = { "Hello" };
	// 굳이 따져보자면 szData를 뜯어보면 szBuffer처럼 된다. 단지 Null 문자가 생략되었는가 아닌가의 차이이다.
	char *pszBuffer = "Hello";
	// 포인터 변수가 선언된 모습이다. 메모리의 주소를 저장하기 위한 전용변수이다.

	puts(szBuffer);
	puts(szData);
	puts(pszBuffer);
	return 0;
	
	// Null 문자가 문자의 배열에 있어서 존재해야되는 이유는 존재하지 않게 된다면 무한루프에 빠지게 될 가능성이 있기 때문이다.
	// Null 문자를 기준으로 왼쪽으로 사용된 영역, 오른족은 사용되지 않는 영역으로 구분짓게 되는데 입력은 늘 가변적이므로 무한루프가 발생할 수 있다.
	
	// 다차원 배열 - 2차원 배열
	int aList[3][4] = { { 10, 20, 30, 40 }, { 50, 60, 70, 80 }, { 90, 100, 110, 120 } };
	// aList[3][4]는 aList 배열의 3행 4열이라고 생각하면 된다.
	int i = 0, j = 0;

	for (i = 0; i < 3; i++) {
		for (j = 0; j < 4; j++) {
			printf("%d\t", aList[i][j]);
		}
		putchar('\n');
	}
	return 0;
	
	int aList[3][4] = { {10, 20, 30}, {40, 50, 60} };
	int i = 0, j = 0;

	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) 
			aList[i][3] += aList[i][j]; // 행의 3번째 값을 출력해야 되기 때문에 aList[i][3]이다.
	}
	// 00, 01, 02을 더하고 10, 11, 12을 더하는 식으로 넘어간다. 
	// 0번째에서 0, 1, 2번째 열이 변동있기 때문에 행 > 열 반복문 순으로 들어간다.
	for (j = 0; j < 4; j++) {
		for (i = 0; i < 2; i++) {
			aList[2][j] += aList[i][j];
		}
	}
	// 0번째를 기준으로 보면 0번째 열에서 0, 1, 2번째 행을 더하고 다음 열로 넘어가야 하기 때문에
	// j열에서 i행으로 가는 반복문이 되어야 한다.
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 4; j++) {
			printf("%d\t", aList[i][j]);
		}
		putchar('\n');
	}
	return 0;
	
	// 다차원 배열 - 3차원 배열
	int aList[4][2][3] = { 0 }; // 면이 4이고, 2행 3열의 배열
	int i = 0, j = 0, k = 0, encounter = 0;

	for (i = 0; i < 4; i++) {
		printf("Plane Number : %d\n", i);
		for (j = 0; j < 2; j++) {
			for (k = 0; k < 3; k++) {
				aList[i][j][k] = ++encounter;
				printf("%d\t", aList[i][j][k]);
			}
			putchar('\n');
		}
		printf("\n\n");
	}
	return 0;
	
}