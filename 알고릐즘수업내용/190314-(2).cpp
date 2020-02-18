#include <stdio.h>
#include <stdlib.h>

void PrintStarSpace(int n, int i) {

}
int main() {
	int n = 7;

	for (int i = 0; i < (n+1)/2; ++i) {
		for (int j = i; j < (n-1)/2; ++j) {
			printf(" ");
		}
		for (int j = 0; j <(i+1)*2-1; ++j) {
			printf("*");
		}
		printf("\n");
	}

	system("pause");
}

//#include <stdio.h>
//#include <stdlib.h>
//
//void PrintStarNSpace(int n, int i) {
//	for (int j = 0; j < n - i; ++j)
//		printf("%c", ' ');
//	for (int j = 0; j < 2 * (i + 1) - 1; ++j)
//		printf("%c", '*');
//	printf("\n");
//}
//
//int main()
//{
//	int n = 7;
//	int w = n;
//	for (int i = 0; i < n; ++i) {
//		PrintStarNSpace(n, i);
//	}
//	system("pause");
//}

//#include <stdio.h>
//#include <stdlib.h>
//
//void PrintStarNSpace(int n, int i) {
//	for (int j = 0; j < i; ++j)
//		printf("%c", ' ');
//	for (int j = 0; j < n - i; ++j)
//		printf("%c", '*');
//	printf("\n");
//}
//
//int main()
//{
//	int n = 10;
//	int w = n;
//	for (int i = 0; i < n; ++i) {
//		PrintStarNSpace(n, i);
//	}
//	system("pause");
//}

//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//	int n = 12;
//	int w = n;
//	for (int i = 0; i < n; ++i) {
//		for (int j = 0; j < i; ++j)
//			printf("%c", ' ');
//		for (int j = 0; j < n - i; ++j)
//			printf("%c", '*');
//		printf("\n");
//	}
//	system("pause");
//}

//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//	int n = 12;
//	int w = n;
//	for (int i = 0; i < n; ++i) {
//		for (int j = 0; j < n-i; ++j)
//			printf("%c", '*');
//		printf("\n");
//	}
//	system("pause");
//}

//#include <stdio.h>
//#include <stdlib.h>
//
//void PrintStarLine(int n) {
//	for (int j = 0; j < n; ++j)
//		printf("%c", '*');
//	printf("\n");
//}
//int main()
//{
//	int n = 12;
//	int w = n;
//	for (int i = 0; i < n; ++i) {
//		PrintStarLine(n-i);
//	}
//	system("pause");
//}

//#include <stdio.h>
//#include <stdlib.h>
//
//void PrintStarLine(int n) {
//	for (int j = 0; j < n; ++j)
//		printf("%c", '*');
//	printf("\n");
//}
//int main()
//{
//	int n = 5;
//	int w = n;
//	for (int i = 0; i < n; ++i) {
//		PrintStarLine(w--);
//	}
//	system("pause");
//}

//#include <stdio.h>
//#include <stdlib.h>
//
//void PrintStarLine(int n) {
//	for (int j = 0; j < n; ++j)
//		printf("%c", '*');
//	printf("\n");
//}
//int main()
//{
//	int n = 4;
//
//	for (int i = 0; i < n; ++i) {
//		PrintStarLine(n);
//	}
//	system("pause");
//}

//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//	int n = 5;
//
//	for (int i = 0; i < n; ++i) {
//		for (int j = 0; j < n; ++j)
//			printf("%c", '*');
//		printf("\n");
//	}
//	system("pause");
//}

//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//	int n = 3;
//
//	for (int i = 0; i < n; ++i)
//		printf("%c", '*');
//	printf("\n");
//	system("pause");
//}

//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//	int row = 5, col = 10;
//	int** arr = NULL;
//	printf("2차원 행의 개수 입력: ");
//	scanf_s("%d", &row);
//	printf("2차원 열의 개수 입력: ");
//	scanf_s("%d", &col);
//
//	arr = (int**)malloc(sizeof(int*)*row);
//	for (int i = 0; i < row; ++i)
//		arr[i] = (int*)malloc(sizeof(int)*col);
//
//	/////////////////////////
//	for (int i = 0; i < row; ++i)
//		for (int j = 0; j < col; ++j)
//			arr[i][j] = (i * col + (j + 1)) * 10;
//
//	for (int i = 0; i < row; ++i) {
//		for (int j = 0; j < col; ++j)
//			printf("%d ", arr[i][j]);
//		printf("\n");
//	}
//	/////////////////////////
//	for (int i = 0; i < row; ++i)
//		free(arr[i]);
//	system("pause");
//}

//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//	int row = 5, col = 10;
//	int** arr = NULL;
//	printf("2차원 행의 개수 입력: ");
//	scanf_s("%d", &row);
//	printf("2차원 열의 개수 입력: ");
//	scanf_s("%d", &col);
//
//	arr = (int**)malloc(sizeof(int*)*row);
//	for (int i = 0; i < row; ++i)
//		arr[i] = (int*)malloc(sizeof(int)*col);
//
//	/////////////////////////
//	for (int i = 0; i < row; ++i)
//		for (int j = 0; j < col; ++j)
//			arr[i][j] = (i * col + (j + 1)) * 10;
//
//	for (int i = 0; i < row; ++i) {
//		for (int j = 0; j < col; ++j)
//			printf("%d ", arr[i][j]);
//		printf("\n");
//	}
//	/////////////////////////
//	for (int i = 0; i < row; ++i)
//		free(arr[i]);
//	system("pause");
//}

//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//	int row = 5, col = 5;
//	int** arr = NULL;
//
//	arr = (int**)malloc(sizeof(int*)*row);
//	for (int i = 0; i < row; ++i)
//		arr[i] = (int*)malloc(sizeof(int)*col);
//
//	/////////////////////////
//	for (int i = 0; i < row; ++i)
//		for (int j = 0; j < col; ++j)
//			arr[i][j] = (i * col + (j + 1)) * 10;
//
//	for (int i = 0; i < row; ++i) {
//		for (int j = 0; j < col; ++j)
//			printf("%d ", arr[i][j]);
//		printf("\n");
//	}
//	/////////////////////////
//	for (int i = 0; i < row; ++i)
//		free(arr[i]);
//	system("pause");
//}

//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//	int row = 3, col = 3;
//	int** arr = NULL;
//	
//	arr = (int**)malloc(sizeof(int*)*row);
//	for (int i = 0; i < row; ++i)
//		arr[i] = (int*)malloc(sizeof(int)*col);
//
//	/////////////////////////
//	for (int i = 0; i < 3; ++i)
//		for (int j = 0; j < 3; ++j)
//			arr[i][j] = (i * 3 + (j + 1)) * 10;
//	
//	for (int i = 0; i < 3; ++i) {
//		for (int j = 0; j < 3; ++j)
//			printf("%d ", arr[i][j]);
//		printf("\n");
//	}
//
//	/////////////////////////
//
//	for (int i = 0; i < row; ++i)
//		free(arr[i]);
//	system("pause");
//}

//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//	int arr[3][3] = { 0 };
//	int* p = (int*)arr;
//
//	for (int i = 0; i < 9; ++i)
//		p[i] = (i + 1) * 10;
//
//	for (int i = 0; i < 3; ++i) {
//		for (int j = 0; j < 3; ++j)
//			printf("%d ", arr[i][j]);
//		printf("\n");
//	}
//	system("pause");
//}

//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//	int arr[3][3] = { 0 };
//
//	for (int i = 0; i < 3; ++i) {
//		for (int j = 0; j < 3; ++j) {
//			arr[i][j] = i * 3 + (j + 1);
//		}
//	}
//
//	for (int i = 0; i < 3; ++i) {
//		for (int j = 0; j < 3; ++j)
//			printf("%d ", arr[i][j]);
//		printf("\n");
//	}
//	system("pause");
//}

//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//	int arr[3][3] = { 10,20,30,40,50,60,70,80,90 };
//	for (int i = 0; i < 3; ++i) {
//		for (int j = 0; j < 3; ++j)
//			printf("%d ", arr[i][j]);
//		printf("\n");
//	}
//	system("pause");
//}

//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//	int arr[2][3] = { 10,20,30,40,50,60 };
//
//	printf("%d %d %d\n", arr[0][0], arr[0][1], arr[0][2]);
//	printf("%d %d %d\n", arr[1][0], arr[1][1], arr[1][2]);
//	system("pause");
//}

//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//	int arr[2][3] = { 0 };
//
//	printf("%d %d %d\n", arr[0][0], arr[0][1], arr[0][2]);
//	printf("%d %d %d\n", arr[1][0], arr[1][1], arr[1][2]);
//	system("pause");
//}

//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//	//int* arr = (int*)malloc(sizeof(int) * 5);
//	int arr[5] = {0};
//
//	arr[0] = 11;
//	for (int i = 1; i < 5; ++i) {
//		arr[i] = 11 + arr[i - 1];
//	}
//
//	for (int i = 0; i < 5; ++i) {
//		printf("arr[%d]: %d\n", i, arr[i]);
//	}
//	//free(arr);
//	system("pause");
//}

//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//	int* arr = (int*)malloc(sizeof(int) * 5);
//
//	for (int i = 0; i < 5; ++i) {
//		arr[i] = 11 * (i+1);
//	}
//
//	for (int i = 0; i < 5; ++i) {
//		printf("arr[%d]: %d\n", i, arr[i]);
//	}
//	free(arr);
//	system("pause");
//}