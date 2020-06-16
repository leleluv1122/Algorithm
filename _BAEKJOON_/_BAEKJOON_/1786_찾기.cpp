///// 시간초과
//#include <iostream>
//#include <string>
//#include <vector>
//
//#define endl "\n"
//using namespace std;
//
//int cnt;
//vector<int> v;
//bool b;
//string T, P;
//
//void init() {
//	ios::sync_with_stdio(false);
//	cin.tie(0);
//	cout.tie(0);
//}
//
//int main() {
//	init();
//	getline(cin, T);
//	getline(cin, P);
//
//	cnt = 0;
//	for (int i = 0; i < T.size(); i++) {
//		b = true;
//		if (T[i] == P[0] && i + P.size() <= T.size()) {
//			for (int j = 0; j < P.size(); j++) {
//				if (T[i + j] != P[j])
//					b = false;
//			}
//			if (b) {
//				v.push_back(i + 1);
//				cnt++;
//			}
//		}
//	}
//	cout << cnt << endl;
//	for (int i = 0; i < v.size(); i++)
//		cout << v[i] << " ";
//	cout << endl;
//}