#include <stdio.h>
#include <stdlib.h>
int main() {
	int row = 5, col = 10;
	int** arr = NULL;
	printf("2���� ���� ����: ");
	scanf_s("%d", &row);
	printf("2���� ���� ����: ");
	scanf_s("%d", &col);

	arr = (int**)malloc(sizeof(int*) * row);
	for (int i = 0; i < row; ++i)
		arr[i] = (int*)malloc(sizeof(int) * col);

	for (int i = 0; i < row; ++i)
		for (int j = 0; j < col; ++j)
			arr[i][j] = (i * col + (j + 1)) * 10;

	for (int i = 0; i < row; ++i) {
		for (int j = 0; j < col; ++j)
			printf("%3d ", arr[i][j]);
		printf("\n");
	}
	for (int i = 0; i < row; ++i)
		free(arr[i]);
}


//#include <stdio.h>
//#include <stdlib.h>
//int main() {
//	int arr[3][3] = { 0 };
//
//	for (int i = 0; i < 3; ++i) {
//		for (int j = 0; j < 3; ++j) {
//			arr[i][j] = i * 3 + (j + 1);
//		}
//	}
//	for (int i = 0; i < 3; ++i) {
//		for (int j = 0; j < 3; ++j)
//			printf("%d ", arr[i][j]);
//		printf("\n");
//	}
//}

//#include <stdio.h>
//#include <stdlib.h>
//int main() {
//	int arr[5] = { 0 };
//	arr[0] = 11;
//
//	for (int i = 1; i < 5; ++i)
//		arr[i] = 11 + arr[i - 1];
//
//	for (int i = 0; i < 5; ++i)
//		printf("arr[%d] : %d\n", i, arr[i]);
//}

//#include <stdio.h>
//#include <stdlib.h>
//int main() {
//	int* arr = (int*)malloc(sizeof(int) * 5);
//
//	for (int i = 0; i < 5; ++i)
//		arr[i] = 11 * (i + 1);
//
//	for (int i = 0; i < 5; ++i)
//		printf("arr[%d]: %d\n", i, arr[i]);
//
//	free(arr);
//}


//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//	int total;
//	printf("�޸��� ������ �Է�: ");
//	scanf_s("%d", &total);
//
//	int* arr = (int*)malloc(total * sizeof(int));
//
//	for (int i = 0; i < total; ++i)
//		arr[i] = i + 1;
//	for (int i = 0; i < total; ++i)
//		printf("%d ", arr[i]);
//	printf("\n");
//
//	free(arr);
//}