/* ���ϸ�: student.c

  * ����: PA02. �л��� ��ȣ�� ������ �Է¹޾� ����ϴ� ���α׷��� �ۼ��Ͻÿ�. 
		 �л��� ��ȣ�� ������, ������ �Ǽ��� �Է¹޴´�.

  * �ۼ���: ������

  * ��¥: 2025.3.31

  * ����: v1.0

  */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int num;
	double score;
	printf("��ȣ? ");
	scanf("%d", &num);
	printf("����? ");
	scanf("%lf", &score);
	printf("%d�� �л��� ������ %.6lf�Դϴ�.\n", num, score);

	return 0;
}