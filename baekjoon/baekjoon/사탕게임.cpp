////ธ๘วิ////
//#include <iostream>
//using namespace std;
//void swap(int a, int b) {
//	int t = a;
//	a = b;
//	b = t;
//}
//int main()
//{
//	int N; cin >> N;
//
//	string arr[5];
//
//	for (int i = 0; i < N; i++) {
//		cin >> arr[i];
//	}
//	int cnt = 1;
//	for (int i = 0; i < N; i++) {
//		for (int j = 0; j < N - 1; j++) {
//			swap(arr[i][j], arr[i][j + 1]);
//
//			char d;
//			while (1) {
//				int a = 0, b = 0;
//				if (b < N && a < N) {
//					if (b == N - 1) {
//						d = arr[a][b];
//						cout << arr[a][b] << " ";
//						b = 0; a++;
//					}
//					else {
//						cout << arr[a][b] << " ";
//						d = arr[a][b++];
//					}
//				}
//				else
//					break;
//			}
//		}
//	}
//}