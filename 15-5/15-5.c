#include <stdio.h>

//int main(void)
//{
//	int ary[3][4] = { {1,2,3,4}, {5,6,7,8}, {9,10,11,12} };
//	int(*pa)[4];     // int�� ���� 4���� �迭�� ����Ű�� �迭 ������
//	int i, j;
//
//	pa = ary;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			printf("%5d", pa[i][j]);  // pa�� 2���� �迭ó�� ���
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

//int main(void) 
//{
//	int i, arr_len;
//
//	int num01 = 10, num02 = 20, num03 = 30;
//
//	int* arr[3] = { &num01, &num02, &num03 }; // int�� ������ �迭 ����
//
//	arr_len = sizeof(arr) / sizeof(arr[0]);
//
//	printf("arr�� �����ּ�:%u\n",arr);
//
//	printf("&arr[0]�� �����ּ�:%u\n", &arr[0]);
//	printf("&arr[1]�� �����ּ�:%u\n", &arr[1]);
//	printf("&arr[2]�� �����ּ�:%u\n", &arr[2]);
//
//	printf("arr�� ���ּ�+1:%u\n", &arr + 1);
//
//	printf("arr[0]:%u\n",arr[0]);
//	printf("arr[1]:%u\n",arr[1]);
//	printf("arr[2]:%u\n",arr[2]);
//
//	printf("arr[0]������������:%u\n", *arr[0]);
//	printf("arr[1]������������:%u\n", *arr[1]);
//	printf("arr[2]������������:%u\n", *arr[2]);
//
//	printf("num01:%u\n", num01);
//	printf("num02:%u\n", num02);
//	printf("num03:%u\n", num03);
//
//
//	
//
//	
//	/*for (i = 0; i < arr_len; i++)
//
//	{
//
//		printf("%d\n", *arr[i]);
//
//	}*/
//
//	return 0;
//}



//int main(void)
//{
//    char(*arr)[3];
//
//    char tmp1[3] = { 'b', 'l', 'o' };
//    char tmp2[3] = { 'c', 'k', '\0' };    //���ڿ��� ���� �˸��� '\0'�� �߰�
//    char tmp3[5] = { 'd', 'm', 'a', 's', 'k' };    //�迭�� ����� �ٸ��ϴ�. ����Ű�� �Ұ�.
//   
//    printf("tmp1[3]�� �ּ� : %p\n", tmp1);
//    printf("tmp2[3]�� �ּ� : %p\n", tmp2);
//    printf("tmp3[5]�� �ּ� : %p\n", tmp3);
//
//    printf("\n"); printf("\n");
//
//    arr = &tmp1;    //arr�� tmp1�� �ּҸ� ����ŵ�ϴ�.
//   
//    printf("arr�� �ּ� : %p\t ���ڿ� : ", arr);
//  
//    for (int i = 0; i < (int)sizeof(*arr); i++)
//    {
//        printf("%c", (*arr)[i]);
//    }
//    printf("\n");
//
//    arr = &tmp2;    //arr�� tmp2�� �ּҸ� ����ŵ�ϴ�.
//    printf("arr�� �ּ� : %p\t ���ڿ� : ", arr);
//    for (int i = 0; i < (int)sizeof(*arr); i++)
//    {
//        printf("%c", (*arr)[i]);
//    }
//    printf("\n");
//
//    //arr = &tmp3; �迭�� ����� �ٸ��ٴ°��� Ÿ���� �ٸ��ٴ� �� �Դϴ�.
//    return 0;
//}

//int main() {
//	int i = 0;
//	int arr[5] = { 1,2,3,4,5 };
//	int* pArr = arr;
//	for (i = 0; i < sizeof(arr) / sizeof(int); i++)
//		printf("%d ", pArr[i]);
//	printf("\n");
//
//	printf("%d\n", sizeof(pArr[0]));
//	printf("%d\n", sizeof(arr));
//	printf("%d\n", sizeof(pArr));
//	printf("%d\n", sizeof(int));
//
//}


int main() {
	int i, j;
	int arr[3][4] = {
		{1,2,3,4},
		{5,6,7,8},
		{9,10,11,12}
	};
	int(*pArr)[4] = arr;

	printf("%p\n", arr);
	printf("%d\n", sizeof(pArr[0])); // arr[0]�� ������ �� ����. 16
	printf("%d\n", sizeof(arr[0])); 
	printf("%d\n", sizeof(arr)); // arr�� ������ ���ϱ�. 3 x 4 x 4byte = 48
	printf("%d\n", sizeof(pArr)); // int�� 4���� ��� �迭�� ����ų �� �ִ� �� �ϳ��� ������, ������ ��ü�� ����� ���ϸ� 4�� ����
	printf("%d\n", sizeof(int)); // int ��ü�� ������ϱ�. 4
	printf("\n");

	int row = sizeof(arr) / sizeof(arr[0]);  // 48/16 = 3
	int col = sizeof(arr[0]) / sizeof(arr[0][0]); // 16/4 = 4
	printf("%d\n", row); // 
	printf("%d\n", col); // 
	for (i = 0; i < row; i++) {
		for (j = 0; j < col; j++)
			printf("%d ", pArr[i][j]);
		printf("\n");
	}
	for (i = 0; i < row; i++) {
		for (j = 0; j < col; j++)
			printf("%d ", arr[i][j]);
		printf("\n");
	}

}