//#include <stdio.h>
//#include <stdlib.h>
//
//void swap(int& a, int& b) {
//	int t = a;
//	a = b;
//	b = t;
//}
//
//int main() {
//	int n;
//	int sum = 0;
//
//	scanf_s("%d", &n);
//	int* arr = new int[n]();
//	int* arr2 = new int[n]();
//
//
//
//	for (int i = 0; i < n; ++i) {
//		scanf_s("%d", &arr[i]);
//	}
//
//	for (int i = 0; i < n - 1; ++i) {
//		for (int j = i; j < n; ++j) {
//			if (arr[i] > arr[j]) {
//				swap(arr[i], arr[j]);
//			}
//		}
//	}
//
//	/*for (int i = 0; i < n; ++i) {
//		printf("%d ", arr[i]);
//	}*/
//
//	/*printf("\n");*/
//
//	for (int i = 0; i < n; ++i) {
//		for (int j = 0; j <= i; ++j) {
//			arr2[i] += arr[j];
//		}
//	}
//
//	for (int i = 0; i < n; ++i) {
//		sum += arr2[i];
//	}
//
//	printf("%d", sum);
//
//	delete[] arr;
//	delete[] arr2;
//}


//#include <stdio.h>
//#include <stdlib.h>
//
//void swap(int& a, int& b) {
//	int t = a;
//	a = b;
//	b = t;
//}
//
//int main() {
//	int n;
//	int sum = 0;
//
//	scanf_s("%d", &n);
//	int* arr = new int[n]();
//	int* arr2 = new int[n]();
//
//	
//
//	for (int i = 0; i < n; ++i) {
//		scanf_s("%d", &arr[i]);
//	}
//
//	for (int i = 0; i < n-1; ++i) {
//		for (int j = i; j < n; ++j) {
//			if (arr[i] > arr[j]) {
//				swap(arr[i], arr[j]);
//			}
//		}
//	}
//
//	/*for (int i = 0; i < n; ++i) {
//		printf("%d ", arr[i]);
//	}*/
//
//	/*printf("\n");*/
//
//	for (int i = 0; i < n; ++i) {
//		for (int j = 0; j <= i; ++j) {
//			arr2[i] += arr[j];
//		}
//	}
//
//	for (int i = 0; i < n; ++i) {
//		sum += arr2[i];
//	}
//
//	printf("%d", sum);
//
//	delete[] arr;
//	delete[] arr2;
//}