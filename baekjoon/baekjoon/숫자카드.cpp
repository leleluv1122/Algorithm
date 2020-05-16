//#include <iostream>
//#include <algorithm>
//using namespace std;
//const int MAX = 500000;
//int N, M, num;
//long long nrr[MAX];
//bool card(int low, int high, int n) {
//	while (low <= high) {
//		int mid = (low + high) / 2;
//		if (nrr[mid] == n)
//			return 1;
//		else if (nrr[mid] < n)
//			low = mid + 1;
//		else if (nrr[mid] > n)
//			high = mid - 1;
//	}
//	return 0;
//}
//int main() {
//	ios_base::sync_with_stdio(0);
//	cin.tie(0);
//	cin >> N;
//	for (int i = 0; i < N; i++)
//		cin >> nrr[i];
//	sort(nrr, nrr + N);
//	cin >> M;
//
//	while (M--) {
//		cin >> num;
//		cout << card(0, N - 1, num) << " ";
//	}
//}