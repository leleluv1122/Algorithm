//#include <iostream>
//#include <string>
//#include <cstring>
//using namespace std;
//int N, M;
//string A[50];
//string B[50];
//int main() {
//	cin >> N >> M;
//
//	for (int i = 0; i < N; i++)
//		cin >> A[i];
//	for (int i = 0; i < N; i++)
//		cin >> B[i];
//
//	int arr[50];
//	memset(arr, 0, sizeof(arr));
//	for (int i = 0; i < N; i++) {
//		int cnt = 0;
//		for (int j = 0; j < M; j++) {
//			if (A[i][j] != B[i][j]) {
//				cnt++;
//			}
//		}
//		arr[i] = cnt;
//	}
//	bool b = true;
//	int a = arr[0];
//	for (int i = 1; i < N; i++)
//		if (a != arr[i])
//			b = false;
//
//	if (b)
//		cout << a << "\n";
//	else
//		cout << -1 << "\n";
//}