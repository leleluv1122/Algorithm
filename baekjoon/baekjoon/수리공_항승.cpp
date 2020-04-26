//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//int main() {
//	vector<int> v;
//	int N, L;
//	cin >> N >> L;
//	for (int i = 0; i < N; i++) {
//		int a; cin >> a;
//		v.push_back(a);
//	}
//	sort(v.begin(), v.end());
//	
//	int t = v[0], cnt = 1;
//	for (int i = 0; i < N; i++) {
//		if (t + L - 1 < v[i])
//			t = v[i], cnt++;
//	}
//	cout << cnt << endl;
//}