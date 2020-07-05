#include <stdio.h>
#pragma warning (disable : 4996)
int main(void) {

	/*
	// 삼항 연산자를 사용한 비교
	int cm;

	printf("키를 입력하세요. : ");
	scanf("%d", &cm);

	printf("결과 : %s", cm >= 150 ? "합격" : "불합격");
	return 0;
	*/

	/*
	// 세 정수 중 가장 큰 수 구하기 - 토너먼트
	int nMax = 0;
	int a, b, c;

	scanf("%d %d %d", &a, &b, &c);

	nMax = a;
	nMax = nMax > b ? nMax : b;
	nMax = nMax > c ? nMax : c;

	printf("MAX : %d\n", nMax);
	return 0;
	*/

	/*
	// 세 정수 중 가장 큰 수 구하기 - 서바이벌
	// int nMax = 0, nInput = 0;
	int nMax = -9999, nInput = 0;

	scanf("%d", &nInput);
	nMax = nInput > nMax ? nInput : nMax;
	scanf("%d", &nInput);
	nMax = nInput > nMax ? nInput : nMax;
	scanf("%d", &nInput);
	nMax = nInput > nMax ? nInput : nMax;

	printf("MAX : %d\n", nMax);
	return 0;

	// 위의 코드를 보면 아무런 문제가 없는 것으로 보인다. 하지만 음수를 입력하고 실행해보면 0만 출력된다. 이유는?
	// nMax가 0으로 초기화되어 있기 때문이다. 첫 번째 입력함수를 보면 nInput > nMax에서 사용자가 음수를 입력하면 무조건 거짓이 되기 때문에 nMax가 출력된다.
	// 따라서 nMax = 0이기 때문에 계속 0으로 출력되는 것이다. 따라서 이 문제를 해결하기 위해서는 값을 음수로 초기화한다.
	*/
}
