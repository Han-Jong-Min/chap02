/* ���ϸ�: coffee.c

  * ����: PA07. Ŀ�� ������(S, T, G)�� �ֹ� ������ �Է¹޾Ƽ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
		 Ŀ�� ������� S, T, G �� ���� ���� �� �ϳ��� �Է¹޴´�.

  * �ۼ���: ������

  * ��¥: 2025.3.31

  * ����: v1.0

  */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	char size[10];
	int count;
	printf("Ŀ�� ������(S,T,G)�� �ֹ� ����? ");
	scanf("%s %d", size, &count);
	printf("%s ������ %d���� �ֹ��մϴ�.\n", size, count);

	return 0;
}