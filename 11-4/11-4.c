#include <stdio.h>

int main(void)
{
	char ch;
	int i;

	//for (i = 0; i < 3; i++)		// 3�� �ݺ�
	//{
	//	scanf("%c", &ch);		// ���� �Է�
	//	printf("%c", ch);		// �Էµ� ���� ���
	//}

	while (1) {
		scanf("%c", &ch);
		if (ch == '\n') break;
		printf("%c", ch);
		printf("|");
	}

	return 0;
}