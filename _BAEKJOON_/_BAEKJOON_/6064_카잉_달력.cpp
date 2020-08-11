// timeout
//#include <iostream>
//
//using namespace std;
//
//void init() {
//	ios::sync_with_stdio(false);
//	cin.tie(0);
//	cout.tie(0);
//}
//
//int main() {
//	init();
//	int T;
//	cin >> T;
//	
//	int M, N, x, y;
//	while (T--) {
//		cin >> M >> N >> x >> y;
//		
//		int cnt = 1;
//		int a = 1, b = 1;
//		while (1) {
//			if (a == x && b == y)
//				break;
//			a++; b++;
//			cnt++;
//
//			if (a > M && b > N) {
//				cnt = -1;
//				break;
//			}
//
//			if (a > M)
//				a = 1;
//			if (b > N)
//				b = 1;
//		}
//
//		cout << cnt << "\n";
//	}
//}