#include <stdio.h>

int main(void)
{
	char str[80];

	printf("str�� �ּҰ�:%p\n", str);

	printf("���ڿ� �Է� : ");

	scanf("%s", str);                      // %s�� ����ϰ� �迭���� �ش�.
	printf("ù ��° �ܾ� : %s\n", str);    // �迭�� �Էµ� ���ڿ� ���
	/*for (int i = 0; i < sizeof(str) / sizeof(char); i++) {
		printf("%c\n", str[i]);
	}*/

	scanf("%s", str);
	printf("���ۿ� ���� �ִ� �� ��° �ܾ� : %s\n", str);
	/*for (int i = 0; i < sizeof(str) / sizeof(char); i++) {
		printf("%c\n", str[i]);
	}*/

	scanf("%s", str);
	printf("���ۿ� ���� �ִ� �� ��° �ܾ� : %s\n", str);
	/*for (int i = 0; i < sizeof(str) / sizeof(char); i++) {
		printf("%c\n", str[i]);
	}*/
	
	return 0;
}