//#include <iostream>
//#include <algorithm>
//#include <climits>
//using namespace std;
//const int MAX = 100000;
//int N, M;
//int blue[MAX];
//
//bool ray(int mid) {
//	int sum = 0;
//	int num = 1;
//
//	for (int i = 0; i < N; i++) {
//		if (blue[i] > mid)
//			return false;
//		sum += blue[i];
//		if (sum > mid) {
//			sum = blue[i];
//			num++;
//		}
//	}
//	return M >= num;
//}
//
//int main() {
//	ios_base::sync_with_stdio(0);
//	cin.tie(0);
//	cin >> N >> M;
//
//	int sum = 0;
//	for (int i = 0; i < N; i++) {
//		cin >> blue[i];
//		sum += blue[i];
//	}
//	int l = 1, h = sum;
//	int result = 0;
//	while (l <= h) {
//		int mid = (l + h) / 2;
//		if (ray(mid)) {
//			result = mid;
//			h = mid - 1;
//		}
//		else
//			l = mid + 1;
//	}
//	cout << result << "\n";
//}


//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <cstring>
//using namespace std;
//const int MAX = 100000 + 1;
//int N, M;
//vector<int> v;
//int lesson[MAX];
//int main() {
//	cin >> N >> M;
//	int summin = 0;
//	for (int i = 0; i < N; i++) {
//		int a; cin >> a;
//		v.push_back(a);
//		summin += v[i]; 
//	}
//	int result = 0;
//	int l = 0, h = summin;
//	while (l <= h) {
//		memset(lesson, 0, sizeof(lesson));
//		int mid = (l + h) / 2;
//		int n = 0;
//		for (int i = 0; i < N; i++) {
//			if (lesson[n] + v[i] <= mid)
//				lesson[n] += v[i];
//			else {
//				lesson[++n] += v[i];
//			}
//		}
//
//		if (M >= n + 1) {
//			result = mid;
//			h = mid - 1;
//		}
//		else
//			l = mid + 1;
//	}
//	cout << l << "\n";
//}