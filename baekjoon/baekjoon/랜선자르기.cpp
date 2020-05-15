//#include <iostream>
//using namespace std;
//const int hMAX = 10000;
//int K, N;
//int have[hMAX];
//bool ranson(long long mid) {
//	long long sum = 0;
//	int n = 0;
//	for (int i = 0; i < K; i++) 
//		n += have[i] / mid;
//	
//	return N > n;
//}
//
//int main() {
//	ios_base::sync_with_stdio(0);
//	cin.tie(0);
//
//	cin >> K >> N;
//	long long total = 0;
//	for (int i = 0; i < K; i++) {
//		cin >> have[i];
//		total += have[i];
//	}
//
//	long long low = 1, high = total;
//	long long result = 0;
//	while (low <= high) {
//		long long mid = (low + high) / 2;
//
//		if (ranson(mid)) {
//			high = mid - 1;
//		}
//		else {
//			if (result < mid)
//				result = mid;
//			low = mid + 1;
//		}
//	}
//	cout << result << "\n";
//}