//#include <stdio.h>
//
//int main() {
//	int arr[6] = { 500,100,50,10,5,1 };
//
//	int money;
//	scanf_s("%d", &money);
//	int jandon = 1000 - money;
//
//	int cnt = 0;
//
//	for (int i = 0; i < 6; ++i) {
//		if (jandon >= arr[i]) {
//			cnt += jandon / arr[i];
//			jandon = (jandon % arr[i]);
//		}
//	}
//	printf("%d", cnt);
//}