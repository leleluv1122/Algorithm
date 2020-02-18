//#include <stdio.h>
//#include <algorithm>
//using namespace std;
//void PrintList(int list[], int size)
//{
//	for (int i = 0; i < size; ++i)
//		printf("%5d", list[i]);
//	printf("\n");
//}
//int main() {
//	int list[10] = { 60, 50, 80, 40, 30, 55, 90, 25, 65, 77 };
//	int heapSize = 0;
//	PrintList(list, 10);
//
//	make_heap(list, list + 10);
//	PrintList(list, 10);
//	heapSize = 10;
//	//sort_heap(list, list + 10); -> 삭제연산10번
//	pop_heap(list, list + 10);
//	--heapSize;
//	pop_heap(list, list + 10);
//	--heapSize;
//	pop_heap(list, list + 10);
//	--heapSize;
//	PrintList(list, 10);
//}

//////<자료구조>힙 정렬 -> 메모리 아님 (( 이진 완전 트리 > 자료구조 Heap > Heap Sort ))
//#include <stdio.h>
//#include <algorithm>
//using namespace std;
//void PrintList(int list[], int size)
//{
//	for (int i = 0; i < size; ++i)
//		printf("%5d", list[i]);
//	printf("\n");
//}
//int main() {
//	int list[10] = { 60, 50, 80, 40, 30, 55, 90, 25, 65, 77 };
//	int heapSize = 0;
//	PrintList(list, 10);
//
//	make_heap(list, list + 10);
//	PrintList(list, 10);
//	sort_heap(list, list + 10);
//	PrintList(list, 10);
//}

//////버블정렬 
//#include <stdio.h>
//void PrintList(int list[], int size)
//{
//	for (int i = 0; i < size; ++i)
//		printf("%5d", list[i]);
//	printf("\n");
//}
//void Swap(int& a, int& b) {
//	int x = a;
//	a = b;
//	b = x;
//}
//void Sort(int list[], int size) {
//	for (int i = 0; i < size - 1 ; ++i) { //index번호까지 돌기때문에 4까지 돌아야된다.
//		for (int j = 0; j < size - 1 - i; ++j) {
//			if (list[j] > list[j + 1])
//				Swap(list[j], list[j + 1]);
//		}
//	}
//}
//int main() {
//	int list[] = { 60, 50, 80, 40, 30, 55, 90, 25, 65, 77 };
//	
//	PrintList(list, 10);
//	Sort(list, 10);
//	PrintList(list, 10);
//}

#include <stdio.h>
void PrintList(int list[], int size)
{
	for (int i = 0; i < size; ++i)
		printf("%5d", list[i]);
	printf("\n");
}
void Swap(int& a, int& b) {
	int x = a;
	a = b;
	b = x;
}
void Sort(int list[], int size) {
	for (int i = 0; i < size - 1; ++i) {
		int min = i;
		for (int j = i + 1; j < size; ++j) 
			if (list[j] < list[min])
				min = j;
		Swap(list[i], list[min]);
	}
}
int main() {
	int list[] = { 60, 50, 80, 40, 30, 55, 90, 25, 65, 77 };
	PrintList(list, 10);

	Sort(list, 10);
	PrintList(list, 10);
}

//#include <stdio.h>
//void PrintList(int list[], int size)
//{
//	for (int i = 0; i < size; ++i)
//		printf("%5d", list[i]);
//	printf("\n");
//}
//void Swap(int& a, int& b) {
//	int x = a;
//	a = b;
//	b = x;
//}
//void Sort(int list[], int size) {
//	int min = 0;
//	for (int j = 1; j < size; ++j) {
//		if (list[j] < list[min])
//			min = j;
//		Swap(list[0], list[min]);
//	}
//}
//int main() {
//	int list[] = { 60, 50, 80, 40, 30, 55, 90, 25, 65, 77 };
//	PrintList(list, 10);
//
//	Sort(list, 10);
//	PrintList(list, 10);
//}

//#include <stdio.h>
//void PrintList(int list[], int size)
//{
//	for (int i = 0; i < 10; ++i)
//		printf("%5d", list[i]);
//	printf("\n");
//}
//int Min(int list[], int size) {
//	int min = 0;
//	for (int i = 1; i < size; ++i) {
//		if (list[i] < list[min])
//			min = i;
//	}
//	return min;
//}
//int Max(int list[], int size) {
//	int max = 0;
//	for (int i = 1; i < size; ++i) {
//		if (list[i] > list[max])
//			max = i;
//	}
//	return max;
//}
//int main() {
//	int list[] = { 60, 50, 80, 40, 30, 55, 90, 25, 65, 77 };
//
//	int idx = Min(list, 10);
//	printf("min[%d]: %d\n", idx, list[idx]);
//	idx = Max(list, 10);
//	printf("max[%d]: %d\n", idx, list[idx]);
//
//	PrintList(list, 10);
//}

//////////////////////////색칠하기//////////////////////////

//#include <stdio.h>
//#include <Windows.h>
//#include <stdlib.h>
//int image[10][10] = {
//	0,0,0,0,0,0,0,0,0,0,
//	0,0,0,1,1,1,1,0,0,0,
//	0,0,1,0,1,0,1,0,0,0,
//	0,0,0,0,0,0,1,0,0,0,
//	0,0,0,0,0,0,1,0,0,0,
//	0,0,5,5,5,5,0,0,0,0,
//	0,0,0,0,5,5,0,0,0,0,
//	0,0,0,0,5,0,5,0,0,0,
//	0,0,0,0,5,5,5,5,0,0,
//	0,0,0,0,0,0,5,5,5,0
//};
//void PrintImage(int image[][10]) {
//	system("cls");
//	for (int i = 0; i < 10; ++i) {
//		for (int j = 0; j < 10; ++j)
//			printf("%3d", image[i][j]);
//		printf("\n");
//	}
//	Sleep(1000); //1초
//}
//void _Fill(int image[][10], int i, int j, int newColor, int oldColor) {
//	/////// 종료조건 ///////
//	if (i < 0 || i>=10 || j < 0 || j >= 10) 
//		return;
//	if (image[i][j] != oldColor) //온위치의 색이 old컬러인지? 아니면 종료!
//		return;
//	////// newColor로 바꾸기
//	image[i][j] = newColor;
//	PrintImage(image);
//	_Fill(image, i - 1, j, newColor, oldColor);
//	_Fill(image, i + 1, j, newColor, oldColor);
//	_Fill(image, i, j - 1, newColor, oldColor);
//	_Fill(image, i, j + 1, newColor, oldColor);
//}
//void Fill(int image[][10], int i, int j, int newColor) {
//	if (newColor != image[i][j])
//		_Fill(image, i, j, newColor, image[i][j]);
//}
//int main() {
//	Fill(image, 1, 4, 6);
//	PrintImage(image);
//}

//////////////////////////피보나치//////////////////////////

//#include <stdio.h>
//void Fibonacci(int n, int c1, int c2, int* presult) { //out parameter로 값을 담아가야되서 포인터를 붙임
//	if (n == 1)
//		*presult = c1;
//	else if (n == 2)
//		*presult = c2;
//	else {
//		int f1, f2;
//		Fibonacci(n - 1, c1, c2, &f1);
//		Fibonacci(n - 2, c1, c2, &f2);
//		*presult = f1 + f2;
//	}
//}
//int main() {
//	int result;
//	Fibonacci(5, 1, 2, &result);
//	printf("n : %d\n", result);
//}

//#include <stdio.h>
//int Fibonacci(int n, int c1, int c2) {
//	if (n == 1)
//		return c1;
//	else if (n == 2)
//		return c2;
//	else
//		return Fibonacci(n - 1, c1, c2) + Fibonacci(n - 2, c1, c2);
//}
//int main() {
//	printf("n : %d\n", Fibonacci(5, 1, 2));
//	printf("n : %d\n", Fibonacci(5, 2, 3));
//}

//#include <stdio.h>
//int Fibonacci(int n) {
//	if (n == 1)
//		return 1;
//	else if (n == 2)
//		return 2;
//	else
//		return Fibonacci(n - 1) + Fibonacci(n - 2);
//}
//int main() {
//	printf("n : %d\n", Fibonacci(5));
//}

//#include <stdio.h>
//void Print(int n) {
//	printf("+%d\n", n);
//	if (n - 1 >= 0)
//		Print(n - 1);
//	if (n - 2 >= 0)
//		Print(n - 2);
//	
//	printf("-%d\n", n);
//}
//int main() {
//	Print(5);
//}

//#include <stdio.h>
//void Print(int n) {
//	printf("+%d\n", n);
//	if (n > 0) {
//		Print(n - 1);
//		Print(n - 2);
//	}
//	printf("-%d\n", n);
//}
//int main() {
//	Print(5);
//}

//#include <stdio.h>
//void Print(int n) {
//	printf("+%d\n", n);
//	if (n > 0) {
//		Print(n - 1);
//		Print(n - 1);
//	}
//	printf("-%d\n", n);
//}
//int main() {
//	Print(5);
//}

//#include <stdio.h>
//void Print(int n) {
//	printf("+%d\n", n);
//	if (n > 0)
//		Print(n - 1);
//	printf("-%d\n", n);
//}
//int main() {
//	Print(5);
//}