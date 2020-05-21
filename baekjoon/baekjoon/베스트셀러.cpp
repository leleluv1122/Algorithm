//#include <iostream>
//#include <algorithm>
//#include <vector>
//using namespace std;
//const int MAX = 1000;
//int N;
//struct bestsell {
//	int cnt;
//	string book;
//};
//vector<bestsell> v;
//bool compare(bestsell a, bestsell b) {
//	if (a.cnt == b.cnt)
//		return a.book < b.book;
//	else
//		return a.cnt > b.cnt;
//}
//
//int main() {
//	cin >> N;
//	for (int i = 0; i < N; i++) {
//		int n = 0;
//		int t = 0;
//		string s; cin >> s;
//		for (int i = 0; i < v.size(); i++) {
//			if (v[i].book == s) {
//				n++;
//				t = i;
//				break;
//			}
//		}
//		if (n) {
//			v[t].cnt += 1;
//		}
//		else {
//			bestsell bb;
//			bb.book = s;
//			bb.cnt = 1;
//			v.push_back(bb);
//		}
//	}
//	sort(v.begin(), v.end(), compare);
//	
//	cout << v[0].book << "\n";
//}