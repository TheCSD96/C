#include <stdio.h>
#pragma warning (disable : 4996)
int main(void) {

	/*
	// ���� �����ڸ� ����� ��
	int cm;

	printf("Ű�� �Է��ϼ���. : ");
	scanf("%d", &cm);

	printf("��� : %s", cm >= 150 ? "�հ�" : "���հ�");
	return 0;
	*/

	/*
	// �� ���� �� ���� ū �� ���ϱ� - ��ʸ�Ʈ
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
	// �� ���� �� ���� ū �� ���ϱ� - �����̹�
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

	// ���� �ڵ带 ���� �ƹ��� ������ ���� ������ ���δ�. ������ ������ �Է��ϰ� �����غ��� 0�� ��µȴ�. ������?
	// nMax�� 0���� �ʱ�ȭ�Ǿ� �ֱ� �����̴�. ù ��° �Է��Լ��� ���� nInput > nMax���� ����ڰ� ������ �Է��ϸ� ������ ������ �Ǳ� ������ nMax�� ��µȴ�.
	// ���� nMax = 0�̱� ������ ��� 0���� ��µǴ� ���̴�. ���� �� ������ �ذ��ϱ� ���ؼ��� ���� ������ �ʱ�ȭ�Ѵ�.
	*/
}
