/* ���ϸ�: weight.c

  * ����: PA05. �����Ը� �Է¹޾� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
		 �����Դ� �Ǽ��� �Է¹�����, �Ҽ��� ���� 2�ڸ����� ����Ѵ�.

  * �ۼ���: ������

  * ��¥: 2025.3.31

  * ����: v1.0

  */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	float kg;
	printf("������? ");
	scanf("%f", &kg);
	printf("�Է��� �����Դ� %.2fKG�Դϴ�.\n", kg);

	return 0;
}