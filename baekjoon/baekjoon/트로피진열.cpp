//#include <iostream>
//using namespace std;
//int N;
//int arr[50];
//int main() {
//	cin >> N;
//	for (int i = 0; i < N; i++)
//		cin >> arr[i];
//
//	int a = arr[0];
//	int ant = 1;
//	for (int i = 1; i < N; i++) {
//		if (a < arr[i]) {
//			ant++;
//			a = arr[i];
//		}
//	}
//	cout << ant << "\n";
//
//	int b = arr[N - 1];
//	int bnt = 1;
//	for (int i = N - 2; i >= 0; i--) {
//		if (b < arr[i]) {
//			bnt++;
//			b = arr[i];
//		}
//	}
//	cout << bnt << "\n";
//}