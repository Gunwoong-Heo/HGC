#include <stdio.h>

int main(void)
{
	int res;             // scanf �Լ��� ��ȯ���� ������ ����
	char ch;             // ���ڸ� �Է��� ����

	while (1)
	{
		res = scanf("%c", &ch);  // ���� �Է�, <Ctrl> + <Z>�� ������ -1 ��ȯ
		//if (res == -1) break;    // ��ȯ���� -1�̸� �ݺ� ����
		if (res == EOF) break;    // ��ȯ���� -1�̸� �ݺ� ���� (EOF �� `end of file` �� ����
		printf("%d ", ch);       // �Էµ� ������ �ƽ�Ű �ڵ� �� ���
	}

	return 0;
}