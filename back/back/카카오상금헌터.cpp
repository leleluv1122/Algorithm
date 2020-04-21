//#include <iostream>
//#include <vector>
//using namespace std;
//struct ranking {
//	int t7;
//	int t8;
//};
//struct money {
//	int money;
//	int man;
//};
//money mak(int a, int b) {
//	money m;
//	m.money = a;
//	m.man = b;
//	return m;
//}
//int main()
//{
//	int n; cin >> n;
//
//	vector<money> m7;
//	m7.push_back(mak(5000000, 1));
//	m7.push_back(mak(3000000, 2));
//	m7.push_back(mak(2000000, 3));
//	m7.push_back(mak(500000, 4));
//	m7.push_back(mak(300000, 5));
//	m7.push_back(mak(100000, 6));
//
//	vector<money> m8;
//	m8.push_back(mak(5120000, 1));
//	m8.push_back(mak(2560000, 2));
//	m8.push_back(mak(1280000, 4));
//	m8.push_back(mak(640000, 8));
//	m8.push_back(mak(320000, 16));
//
//	vector<ranking> v;
//	for (int i = 0; i < n; i++) {
//		ranking t;
//		cin >> t.t7 >> t.t8;
//		v.push_back(t);
//	}
//
//	int min;
//	int mm;
//	for (int i = 0; i < n; i++) {
//		int my7money = 0;
//		int my8money = 0;
//		min = 0;
//		for (int j = 0; j < 6; j++) {
//			mm = min;
//			min += m7[j].man;
//			if (v[i].t7 > mm && v[i].t7 <= min) {
//				my7money = m7[j].money;
//				break;
//			}
//		}
//		min = 0;
//		for (int j = 0; j < 5; j++) {
//			mm = min;
//			min += m8[j].man;
//			if (v[i].t8 > mm && v[i].t8 <= min) {
//				my8money = m8[j].money;
//				break;
//			}
//		}
//		cout << my7money + my8money << endl;
//	}
//}