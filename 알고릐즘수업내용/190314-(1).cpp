#include <stdio.h>
#include <stdlib.h>

int main()
{
	int total;
	printf("메모리의 개수를 입력하시오: ");
	scanf_s("%d", &total);

	int* arr = (int*)malloc(total * sizeof(int));

	for (int i = 0; i < total; ++i)
		arr[i] = i+1;
	for (int i = 0; i < total; ++i)
		printf("%d ", arr[i]);
	printf("\n\n");

	free(arr); //메모리 제거
}


//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//	int* arr = (int*)malloc(10 * sizeof(int));
//
//	for (int i = 0; i < 10; ++i)
//		arr[i] = 10 + i;
//
//	for (int i = 0; i < 10; ++i) {
//		printf("arr[%d]: %d\n", i, arr[i]);
//	}
//
//	free(arr); //메모리 제거
//
//	arr = (int*)malloc(sizeof(int));
//	arr[0] = 10;
//
//	printf("%d\n", arr[0]);
//	free(arr); //메모리 제거
//
//	arr = (int*)malloc(5 * sizeof(int));
//
//	for (int i = 0; i < 5; ++i)
//		arr[i] = 10*(i+1);
//
//	for (int i = 0; i < 5; ++i) {
//		printf("arr[%d]: %d\n", i, arr[i]);
//	}
//	free(arr); //메모리 제거
//}

//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//	int* arr = (int*) malloc(10*sizeof(int));
//
//	for (int i = 0; i < 10; ++i)
//		arr[i] = 10 + i;
//
//	for (int i = 0; i < 10; ++i) {
//		printf("arr[%d]: %d\n", i, arr[i]);
//	}
//
//	free(arr); //메모리 제거
//}

//#include <stdio.h>
//int main()
//{
//	//int arr[10] = { 10 };
//	int arr[10] = { 0 };
//	for (int i = 0; i < 10; ++i)
//		arr[i] = 10 + i;
//
//	for (int i = 0; i < 10; ++i) {
//		printf("arr[%d]: %d\n", i, arr[i]);
//	}
//}

//#include <stdio.h>
//int main()
//{
//	//int arr[10] = { 10 };
//	int arr[10] = { 0 };
//
//	for (int i = 0; i < 10; ++i) {
//		printf("arr[%d]: %d\n",i, arr[i]);
//	}
//}

//#include <stdio.h>
//int main()
//{
//	int i;
//	//int arr[10] = { 10 };
//	int arr[10] = { 0 };
//
//	for (i = 0; i < 10; ++i) {
//		printf(" %d ", arr[i]);
//	}
//}

//#include <stdio.h>
//int main()
//{
//	int i;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//
//	for (i = 0; i < 10; ++i) {
//		printf(" %d ", arr[i]);
//	}
//}

//#include <stdio.h>
//int main()
//{
//	int n = 10;
//
//	printf("%d\n", n);
//}


//#include <stdio.h>
//int main() 
//{
//	printf("Hello\n");
//}