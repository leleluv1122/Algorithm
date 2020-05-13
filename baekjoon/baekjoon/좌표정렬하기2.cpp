//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//vector<pair<int, int>> p;
//
//bool compare(pair<int, int> a, pair<int, int> b) {
//	if (a.second == b.second)
//		return a.first < b.first;
//	else
//		return a.second < b.second;
//}
//
//int main() {
//	int N;
//	cin >> N;
//
//	for (int i = 0; i < N; i++) {
//		int x, y; cin >> x >> y;
//		p.push_back(make_pair(x, y));
//	}
//	sort(p.begin(), p.end(), compare);
//
//	for (int i = 0; i < N; i++) {
//		cout << p[i].first << " " << p[i].second << "\n";
//	}
//}