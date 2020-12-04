#include <iostream>
#include <algorithm>
#include <vector>
#include <math.h>

#define INF 987654321
#define MAX 1000001
using namespace std;

int N, M;
vector<int> v;

void init() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
}

bool can(int n) {
	if (n == 0) {
		if (find(v.begin(), v.end(), 0) == v.end())
			return true;
		else
			return false;
	}
	while (n) {
		if (find(v.begin(), v.end(), n % 10) != v.end())
			return false;
		n /= 10;
	}
	return true;
}

int length(int n) {
	if (n == 0)
		return 1;
	int rst = 0;
	while (n) {
		n /= 10;
		rst++;
	}
	return rst;
}

int can_push() {
	int rst = INF;
	int s = 0;
	for (int i = 0; i < MAX; i++) {
		if (can(i)) {
			int click = abs(N - i);
			if (rst > click) {
				rst = click;
				s = i;
			}
		}
	}
	return rst + length(s);
}

int main() {
	init();
	cin >> N >> M;
	while (M--) {
		int n; cin >> n;
		v.push_back(n);
	}
	cout << min(abs(N - 100), can_push());
}


//#include <iostream>
//#include <cstring>
//#include <algorithm>
//#include <math.h>
//
//using namespace std;
//int arr[10];
//
//void init() {
//	ios::sync_with_stdio(false);
//	cin.tie(0);
//	cout.tie(0);
//}
//
//bool can_push(int n) {
//	if (n == 0)
//		return arr[0] ? 0 : 1;
//	while (n) {
//		if (arr[n % 10])
//			return false;
//		n /= 10;
//	}
//	return true;
//}
//
//int main() {
//	init();
//	int N, M, num;
//	memset(arr, 0, sizeof(arr));
//	cin >> N >> M;
//	while (M--) {
//		int n; cin >> n;
//		arr[n] = 1;
//	}
//
//	int d = 0;
//	while (1) {
//		if (can_push(N - d) && N - d >= 0) {
//			num = N - d;
//			break;
//		}
//		if (can_push(N + d)) {
//			num = N + d;
//			break;
//		}
//		d++;
//	}
//	int t = num;
//	int result = 0;
//	while (t) {
//		result++;
//		t /= 10;
//	}
//	result += abs(N - num);
//	cout << min(result, abs(100 - N));
//}