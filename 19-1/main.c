// 소스파일 - main.c
#include <stdio.h>
#include "student.h"

int main(void)
{
	Student a = { 315, "홍길동" };  // 구조체 변수 선언과 초기화

	printf("학번:%d, 이름:%s\n", a.num, a.name);  // 구조체 멤버 출력

	return 0;
}