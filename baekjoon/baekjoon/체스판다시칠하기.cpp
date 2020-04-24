//#include <iostream>
//using namespace std;
//string arr[50];
//int chess(int a, int b) {
//	int cnt = 0;
//
//	for (int i = a; i < a + 8; i++) {
//		for (int j = b; j < b + 8; j++) {
//			if ((i + j) % 2 == 0 && arr[i][j] == 'W')
//				continue;
//			if ((i + j) % 2 == 1 && arr[i][j] == 'B')
//				continue;
//			else {
//				cnt++;
//			}
//		}
//	}
//
//	int bnt = 0;
//
//	for (int i = a; i < a + 8; i++) {
//		for (int j = b; j < b + 8; j++) {
//			if ((i + j) % 2 == 0 && arr[i][j] == 'B')
//				continue;
//			if ((i + j) % 2 == 1 && arr[i][j] == 'W')
//				continue;
//			else {
//				bnt++;
//			}
//		}
//	}
//
//	return cnt > bnt ? bnt : cnt;
//}
//int main()
//{
//	int N, M;
//	cin >> N >> M;
//
//
//	for (int i = 0; i < N; i++) {
//		cin >> arr[i];
//	}
//	int ma = 64;
//	for (int i = 0; i <= N - 8; i++) {
//		for (int j = 0; j <= M - 8; j++) {
//			int cc = chess(i, j);
//			if (ma > cc)
//				ma = cc;
//		}
//	}
//	cout << ma << endl;
//}