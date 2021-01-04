#include <stdio.h>

int main(void)
{
	char str[80];

	printf("str의 주소값:%p\n", str);

	printf("문자열 입력 : ");

	scanf("%s", str);                      // %s를 사용하고 배열명을 준다.
	printf("첫 번째 단어 : %s\n", str);    // 배열에 입력된 문자열 출력
	/*for (int i = 0; i < sizeof(str) / sizeof(char); i++) {
		printf("%c\n", str[i]);
	}*/

	scanf("%s", str);
	printf("버퍼에 남아 있는 두 번째 단어 : %s\n", str);
	/*for (int i = 0; i < sizeof(str) / sizeof(char); i++) {
		printf("%c\n", str[i]);
	}*/

	scanf("%s", str);
	printf("버퍼에 남아 있는 세 번째 단어 : %s\n", str);
	/*for (int i = 0; i < sizeof(str) / sizeof(char); i++) {
		printf("%c\n", str[i]);
	}*/
	
	return 0;
}