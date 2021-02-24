#include <stdio.h>

int sum(int, int);         // �Լ� ����

int main(void)
{
	int (*fp)(int, int);   // �Լ� ������ ����
	int res;               // ��ȯ���� ������ ����

	fp = sum;              // �Լ����� �Լ� �����Ϳ� ����
	//res = fp(10, 20);      // �Լ� �����ͷ� �Լ� ȣ��
	res = (*sum)(10, 20);
	//res = sum(10, 20);
	printf("result : %d\n", res);   // ��ȯ�� ���

	printf("fp : %p\n", fp);
	printf("sum : %p\n", sum);
	printf("sum(*) : %p\n", *sum);
	printf("sum(&) : %p\n", &sum);

	return 0;
}

int sum(int a, int b)      // �Լ� ����
{
	return (a + b);
}