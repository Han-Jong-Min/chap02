/*
이름: 한종민
학과: 영어교육과
학번: 202111604
프로그램 작성일: 2025-03-19
*/


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void introMe(void);

int main()
{
	introMe();
	return 0;
}
void introMe(void)
{
	char name[64]; //이름 저장 변수
	int age; //나이 저장 변수
	char hello[256]; //인사말 저장 변수

	printf("이름, 나이, 인사말을 입력해주세요 \n");
	scanf("%s %d %s", name, &age, hello);
	printf("이름: %s 나이: %d\n인사말: %s", 
		name, age, hello);

	return 0;
}