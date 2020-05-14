//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//int N, M;
//vector<int> v;
//int main() {
//	ios_base::sync_with_stdio(0);
//	cin.tie(0);
//	cin >> N;
//	int maxmoney = 0;
//	for (int i = 0; i < N; i++) {
//		int a; cin >> a;
//		v.push_back(a);
//		maxmoney = max(maxmoney, v[i]);
//	}
//	cin >> M;
//	int result = 0;
//	int l = 0, h = maxmoney;
//	while (l <= h) {
//		int mid = (l + h) / 2;
//		long long sum = 0;
//		for (int i = 0; i < N; i++)
//			sum += min(v[i], mid);
//		if (sum <= M) {
//			l = mid + 1;
//			result = mid;
//		}
//		else
//			h = mid - 1;
//	}
//	cout << result;
//}


//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//int N, M;
//vector<int> v;
//int main() {
//	ios_base::sync_with_stdio(0);
//	cin.tie(0);
//	cin >> N; //지방의 수
//	int maxmoney = 0;
//	for (int i = 0; i < N; i++) {
//		int a; cin >> a;
//		v.push_back(a);
//		maxmoney = max(maxmoney, v[i]);
//	}
//	cin >> M; //총예산
//	
//	int l = 0, h = maxmoney;
//	int result = 0;
//	while (l <= h) {
//		int mid = (l + h) / 2;
//		long long sum = 0;
//
//		for (int i = 0; i < N; i++)
//			sum += min(v[i], mid);
//		if (sum <= M) {
//			result = mid;
//			l = mid + 1;
//		}
//		else
//			h = mid - 1;
//	}
//	cout << result << "\n";
//}