// �ҽ����� - main.c
#include <stdio.h>
#include "student.h"

int main(void)
{
	Student a = { 315, "ȫ�浿" };  // ����ü ���� ����� �ʱ�ȭ

	printf("�й�:%d, �̸�:%s\n", a.num, a.name);  // ����ü ��� ���

	return 0;
}