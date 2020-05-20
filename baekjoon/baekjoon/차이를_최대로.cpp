//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//int main() {
//	ios_base::sync_with_stdio(0);
//	cin.tie(0);
//	int N;
//	vector<int> v;
//
//	cin >> N;
//	for (int i = 0; i < N; i++) {
//		int a; cin >> a;
//		v.push_back(a);
//	}
//	int result = 0;
//	sort(v.begin(), v.end());
//
//	do {
//		int t = 0;
//		for (int i = 0; i < v.size() - 1; i++)
//			t += abs(v[i] - v[i + 1]);
//
//		result = max(result, t);
//	} while (next_permutation(v.begin(), v.end()));
//
//	cout << result << "\n";
//}

//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//int main() {
//
//	vector<int> v(4);
//	for (int i = 0; i < 4; i++) {
//		v[i] = i + 1;
//	}
//	do {
//		for (int i = 0; i < 4; i++) {
//			cout << v[i] << " ";
//		}
//		cout << '\n';
//	} while (next_permutation(v.begin(), v.end()));
//	return 0;
//}