#include <stdio.h> // standard input output = ǥ�� ����� �������
#include <conio.h>
#pragma warning (disable : 4996)

int main(void) {
	/*

	// getchar() / putchar()
	char ch = 0;

	ch = getchar(); // ���ڸ� �Է¹���

	putchar(ch); // ���� ch�� ����ִ� ������ ���

	putchar('Z'); // 'Z'�� ���

	// ��������� ���� �Է��� ���� + Z�� ���� ��µȴ�.

	
	// ���ڸ� �Է¹��� ���� 2���� ����� �����Ѵ�. scanf("%c", &����); / ch = getchar();
	// scanf ���� �Է��Լ������� ����ڰ� ���� �Է� �� Enter�� ġ�ԵǸ� PC������ \n�� �Էµȴ�.
	// ������ �Ƹ� char������ ����Ǿ� �����ٵ� ���๮�� ���� ���ڷ� ����ϱ� ������ �Է��� ������� �ʴ´�.
	// ������ ������ \n�� �������� �ʴ� �̻� �Է��� ��� �ްԵǴ� ���·� ���� �ȴ�.
	
	
	return 0;
	*/

	/*

	// _getch() _getche()
	char ch = 0;

	printf("�ƹ� Ű�� ������ �������� �Ѿ�ϴ�.");
	ch = _getch(); // ����غ��� ����ڰ� �Է��� ���ڰ� ������ �ʴ� ���� Ȯ���� �� �ִ�.
				   // stdio ������Ͽ��� _getch() �Լ��� �������� �ʴ´�. 
				   // ���� conio.h��� ��������� ��������� �Ѵ�.
				   // �߰������� _getche() �Լ��� �ִµ� �̴� ���� �Է��� ���ڰ� ȭ�鿡 ���´�.

	printf("\n�Է��� Ű�� ");
	putchar(ch); // \n�� ������ �ʱ� ���� printf �Լ��� �ƴ� putchar() �Լ��� ����Ѵ�.
	printf("�Դϴ�.\n");
	return 0;
	*/

	/*
	// gets / puts
	char szName[32] = { 0 };
	
	printf("�̸��� �Է��ϼ���: ");
	gets(szName); // gets() �Լ����� ���� ������ �ֱ� ������ ��ǻ� �����ϴ� ���� gets_s() �Լ��� �����Ѵ�.

	printf("����� �̸���: ");
	puts(szName);
	puts("�Դϴ�.");
	return 0;
	*/

	/*
	// gets_s
	char szName[32] = { 0 };

	printf("�̸��� �Է��ϼ���: ");
	gets_s(szName, sizeof(szName)); // sizeof �����ڴ� �޸��� ũ�⸦ �����ϴ� �����ڷ�
									// szName�� ������ �ִ� ����Ʈ ũ�⸦ ����϶�� �ǹ̴�.
									// gets()�� ���غ��� �ַ�� ���� â�� ��� �޽����� ���� �ʴ� ���� Ȯ���� �� �ִ�.
	printf("����� �̸���: ");
	puts(szName);
	puts("�Դϴ�.");
	return 0;
	*/

	/*
	// printf() / scanf()
	int age = 0;
	char name[32];

	printf("���̸� �Է��ϼ���.: ");
	scanf("%d", &age);
	rewind(stdin); // fflush(stdin)���� �Է� ������ ���๮�ڸ� �����ִ� ���� ������ 19 studio ���� ���ķδ� rewind(stdin)�� �� �߸���..?
	printf("�̸��� �Է��ϼ���.: ");
	gets_s(name, sizeof(name));

	printf("\n����� ���̴� %d���̰� �̸��� '%s'�Դϴ�.", age, name);
	return 0;
	*/

	/*
	// getchar() �Լ� �̿�, �� ��° ���� ���
	char ch;

	printf("�Է�: ");
	ch = getchar();
	ch = getchar();

	putchar(ch);
	return 0;
	*/

	/*
	// ���� �� ���� �Է¹޾� ����� ���
	int num1, num2;

	printf("�� ������ �Է��ϼ���.: ");
	scanf("%d %d", &num1, &num2);

	printf("AVG : %.2f\n", (double)(num1 + num2) / 2);
	return 0;
	*/

	/*
	// �ʸ� �Է¹ް� ��:��:�ʷ� ��ȯ
	int num;
	int hour, minute, second;

	printf("�Է�: ");
	scanf("%d", &num);

	hour = num / 3600;
	minute = (num % 3600) / 60;
	second = (num % 3600) % 60;

	printf("%d�ʴ� %02d�ð� %02d�� %02d�� �Դϴ�.", num, hour, minute, second);
	return 0;
	*/

	/*
	// �� ������ �Է¹ް� ���� ���
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