#include <stdio.h>
#include <string.h>                // strncpy �Լ� ����� ���� ��� ���� ����

int main(void)
{
	char str[20] = "mango tree";   // �迭 �ʱ�ȭ

	strncpy(str, "apple-pie", 5);  // "apple-pie"���� �ټ� ���ڸ� ����

	printf("%s\n", str);           // ���� ���� ���ڿ� ���

	str[5] = '\0';

	printf("%s\n", str);
	printf("%s\n", str+6);

	printf("%p\n", str);
	printf("%p\n", str+6);

	return 0;
}