#include <stdio.h>
// ���߿� �Է��� �����Դϴ�.
#include <string.h>

int main(void)
{
	char str[80];

	printf("������ ���Ե� ���ڿ� �Է� : ");
	fgets(str, sizeof(str), stdin);              // ���ڿ� �Է�
	// ���߿� �Է��� �����Դϴ�.
	printf("%d\n", strlen(str));
	str[strlen(str)-1] = '\0';
	printf("�Էµ� ���ڿ��� %s�Դϴ�\n", str);   // ���ڿ� ���
	printf("%d\n",strlen(str));

	return 0;
}