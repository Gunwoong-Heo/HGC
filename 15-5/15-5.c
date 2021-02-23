#include <stdio.h>

//int main(void)
//{
//	int ary[3][4] = { {1,2,3,4}, {5,6,7,8}, {9,10,11,12} };
//	int(*pa)[4];     // int형 변수 4개의 배열을 가리키는 배열 포인터
//	int i, j;
//
//	pa = ary;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			printf("%5d", pa[i][j]);  // pa를 2차원 배열처럼 사용
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
//	int* arr[3] = { &num01, &num02, &num03 }; // int형 포인터 배열 선언
//
//	arr_len = sizeof(arr) / sizeof(arr[0]);
//
//	printf("arr의 시작주소:%u\n",arr);
//
//	printf("&arr[0]의 시작주소:%u\n", &arr[0]);
//	printf("&arr[1]의 시작주소:%u\n", &arr[1]);
//	printf("&arr[2]의 시작주소:%u\n", &arr[2]);
//
//	printf("arr의 끝주소+1:%u\n", &arr + 1);
//
//	printf("arr[0]:%u\n",arr[0]);
//	printf("arr[1]:%u\n",arr[1]);
//	printf("arr[2]:%u\n",arr[2]);
//
//	printf("arr[0]간접참조연산:%u\n", *arr[0]);
//	printf("arr[1]간접참조연산:%u\n", *arr[1]);
//	printf("arr[2]간접참조연산:%u\n", *arr[2]);
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
//    char tmp2[3] = { 'c', 'k', '\0' };    //문자열의 끝을 알리는 '\0'을 추가
//    char tmp3[5] = { 'd', 'm', 'a', 's', 'k' };    //배열의 사이즈가 다릅니다. 가리키기 불가.
//   
//    printf("tmp1[3]의 주소 : %p\n", tmp1);
//    printf("tmp2[3]의 주소 : %p\n", tmp2);
//    printf("tmp3[5]의 주소 : %p\n", tmp3);
//
//    printf("\n"); printf("\n");
//
//    arr = &tmp1;    //arr은 tmp1의 주소를 가리킵니다.
//   
//    printf("arr의 주소 : %p\t 문자열 : ", arr);
//  
//    for (int i = 0; i < (int)sizeof(*arr); i++)
//    {
//        printf("%c", (*arr)[i]);
//    }
//    printf("\n");
//
//    arr = &tmp2;    //arr은 tmp2의 주소를 가리킵니다.
//    printf("arr의 주소 : %p\t 문자열 : ", arr);
//    for (int i = 0; i < (int)sizeof(*arr); i++)
//    {
//        printf("%c", (*arr)[i]);
//    }
//    printf("\n");
//
//    //arr = &tmp3; 배열의 사이즈가 다르다는것은 타입이 다르다는 뜻 입니다.
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
	printf("%d\n", sizeof(pArr[0])); // arr[0]의 사이즈 와 동일. 16
	printf("%d\n", sizeof(arr[0])); 
	printf("%d\n", sizeof(arr)); // arr의 사이즈 구하기. 3 x 4 x 4byte = 48
	printf("%d\n", sizeof(pArr)); // int형 4개를 담는 배열을 가르킬 수 있는 단 하나의 포인터, 포인터 자체의 사이즈만 구하면 4가 나옴
	printf("%d\n", sizeof(int)); // int 자체의 사이즈구하기. 4
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