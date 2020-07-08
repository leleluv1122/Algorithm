#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>

#define endl "\n"
using namespace std;


void init() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
}

int main() {
	init();

	int N, M;
	cin >> N >> M;

	vector<int> v(N);
	int result = 2e9;

	for (int i = 0; i < N; i++)
		cin >> v[i];
	sort(v.begin(), v.end());

	int a = 0, b = 0;

	while (a < N && b < N) {
		int r = abs(v[a] - v[b]);
		if (r >= M) {
			result = min(r, result);
			if (b < v.size())
				a++;
		}
		else {
			if (a < v.size())
				b++;
		}
	}
	cout << result << endl;
}


//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <math.h>
//
//#define endl "\n"
//using namespace std;
//
//int N, M;
//
//void init() {
//	ios::sync_with_stdio(false);
//	cin.tie(0);
//	cout.tie(0);
//}
//
//int main() {
//	init();
//	cin >> N >> M;
//	vector<int> v(N);
//	int result = 2e9;
//
//	for (int i = 0; i < N; i++)
//		cin >> v[i];
//
//	int a = 0, b = 1;
//	while (1) {
//		if (b >= N - 1) {
//			a++;
//			b = a + 1;
//		}
//		if (a == N - 1)
//			break;
//
//		int r = abs(v[a] - v[b]);
//
//		if (r >= M)
//			result = min(result, r);
//		b++;
//	}
//
//	cout << result << endl;
//}