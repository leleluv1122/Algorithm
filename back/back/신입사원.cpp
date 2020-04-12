//1
//5
//3 2
//1 4
//4 1
//2 3
//5 5

//#include <iostream>
//#include <algorithm>
//#include <vector>
//using namespace std;
//
//struct Test {
//	int sur;
//	int meon;
//};
//bool compare(Test a, Test b) {
//	if (a.sur < b.sur)
//		return true;
//	return false;
//}
//int main() {
//	int T, N;
//	cin >> T;
//
//	for (int i = 0; i < T; ++i) {
//		cin >> N;
//
//		vector<Test> t;
//		for (int j = 0; j < N; ++j) {
//			Test tt;
//			cin >> tt.sur >> tt.meon;
//			t.push_back(tt);
//		}
//
//		sort(t.begin(), t.end(), compare);
//
//		
//		int tmeon = t[0].meon;
//		int cnt = 0;
//		for (int j = 0; j < N; ++j) {
//			if (t[j].meon <= tmeon) {
//				cnt++;
//				tmeon = t[j].meon;
//			}
//		}
//		cout << cnt << endl;
//	}
//}