//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//const int MAX = 100000;
//struct ranking {
//	int xx;
//	int yy;
//};
//vector<ranking> p;
//
//bool compare(ranking a, ranking b) {
//	if (a.xx == b.xx)
//		return a.yy < b.yy;
//	else
//		return a.xx < b.xx;
//}
//
//int main() {
//	int N; cin >> N;
//	for (int i = 0; i < N; i++) {
//		ranking a; cin >> a.xx >> a.yy;
//		p.push_back(a);
//	}
//	sort(p.begin(), p.end(), compare);
//
//	for (int i = 0; i < N; i++) {
//		cout << p[i].xx << " " << p[i].yy << "\n";
//	}
//}