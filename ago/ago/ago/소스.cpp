//#include <stdio.h>
//#include <stdlib.h>
//void PrintInfo(char* name, int age, int number) {
//	printf("%s %d %d\n", name, age, number);
//}
//int main() {
//	int number = 100;
//	int age = 25;
//	char name[20] = "홍길동";
//
//	PrintInfo(name, age, number);
//}

//#include <stdio.h>
//#include <stdlib.h>
//int main() {
//	int number = 100;
//	int age = 25;
//	char name[20] = "홍길동";
//
//	printf("%s %d %d\n", name, number, age);
//}

//#include <stdio.h>
//#include <stdlib.h>
//int main() 
//{
//	int number = 100;
//	int age = 25;
//	const char* name = "홍길동";
//
//	printf("%s %d %d\n", name, number, age);
//}

//#include <stdio.h>
//#include <stdlib.h>
//int main() {
//	int n = 7;
//
//	for (int i = 0; i < (n + 1) / 2; ++i) {
//		for (int j = i; j < (n - 1) / 2; ++j) {
//			printf(" ");
//		}
//		for (int j = 0; j < (i + 1) * 2 - 1; ++j) {
//			printf("*");
//		}
//		printf("\n");
//	}
//}

//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//	int n = 7;
//	for (int i = 0; i < n; ++i) {
//		for (int j = 0; j < n - i; ++j)
//			printf(" ");
//		for (int j = 0; j < 2 * (i + 1) - 1; ++j)
//			printf("*");
//		printf("\n");
//	}
//}

//#include <stdio.h>
//#include <stdlib.h>
//void PrintStar(int n, int i) {
//	for (int j = 0; j < i; ++j)
//		printf(" ");
//	for (int j = 0; j < n - i; ++j)
//		printf("*");
//	printf("\n");
//}
//int main()
//{
//	int n = 12;
//	for (int i = 0; i < n; ++i) {
//		PrintStar(n, i);
//	}
//}

//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//	int n = 12;
//	for (int i = 0; i < n; ++i) {
//		for (int j = 0; j < i; ++j)
//			printf(" ");
//		for (int j = 0; j < n - i; ++j)
//			printf("*");
//		printf("\n");
//	}
//}

//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//	int n = 12;
//	for (int i = 0; i < n; ++i) {
//		for (int j = 0; j < n-i; ++j)
//			printf("*");
//		printf("\n");
//	}
//}


//#include <stdio.h>
//#include <stdlib.h>
//void PrintStarLine(int n) {
//	for (int j = 0; j < n; ++j)
//		printf("*");
//	printf("\n");
//}
//int main()
//{
//	int n = 5;
//	int w = n;
//	for (int i = 0; i < n; ++i) {
//		PrintStarLine(w--);
//	}
//}

//#include <stdio.h>
//#include <stdlib.h>
//void PrintStar(int n) {
//	for (int i = 0; i < n; ++i) {
//		for (int j = n - i - 1; j < n; ++j)
//			printf("*");
//		printf("\n");
//	}
//}
//int main() {
//	int n = 5;
//
//	PrintStar(n);
//}

//#include <stdio.h>
//#include <stdlib.h>
//int main() {
//	int n = 5;
//	for (int i = 0; i < n; ++i) {
//		for (int j = n - i - 1; j < n; ++j)
//			printf("*");
//		printf("\n");
//	}
//}

//#include <stdio.h>
//#include <stdlib.h>
//int main() {
//	int n = 5;
//	for (int i = 0; i < n; ++i) {
//		for (int j = i; j < n; ++j)
//			printf("*");
//		printf("\n");
//	}
//}

//#include <stdio.h>
//#include <stdlib.h>
//int main() {
//	int row = 5, col = 10;
//	int** arr = NULL;
//	printf("2차원 행의 개수: ");
//	scanf_s("%d", &row);
//	printf("2차원 열의 개수: ");
//	scanf_s("%d", &col);
//
//	arr = (int**)malloc(sizeof(int*) * row);
//	for (int i = 0; i < row; ++i)
//		arr[i] = (int*)malloc(sizeof(int) * col);
//
//	for (int i = 0; i < row; ++i)
//		for (int j = 0; j < col; ++j)
//			arr[i][j] = (i * col + (j + 1)) * 10;
//
//	for (int i = 0; i < row; ++i) {
//		for (int j = 0; j < col; ++j)
//			printf("%3d ", arr[i][j]);
//		printf("\n");
//	}
//	for (int i = 0; i < row; ++i)
//		free(arr[i]);
//}


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
//	printf("메모리의 개수를 입력: ");
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