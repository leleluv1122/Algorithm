#include <iostream>

#define endl "\n"
#define MAX 1000001
using namespace std;

bool num[MAX];

void init() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
}

int main() {
	init();
	long long max, min;

	int cnt = 0;

	cin >> min >> max;

	for (long long i = 2; i * i <= max; i++) {
		long long x = min / (i * i);
		if (min % (i * i))
			x++;

		while (x * (i * i) <= max) {
			num[x * (i * i) - min] = true;
			x++;
		}
	}

	for (int i = 0; i <= max - min; i++)
		if (!num[i])
			cnt++;
	cout << cnt << endl;
}





///// runtime error
//#include <iostream>
//#include <algorithm>
//#include <math.h>
//#include <vector>
//
//#define endl "\n"
//using namespace std;
//
//void init() {
//	ios::sync_with_stdio(false);
//	cin.tie(0);
//	cout.tie(0);
//}
//
//int main() {
//	init();
//	long long mini, maxi;
//	cin >> mini >> maxi;
//
//	vector<bool> v(maxi + 1);
//	for (int i = 2; i <= maxi; i++)
//		v[i] = true;
//
//	for (int i = 2; i <= sqrt(maxi); i++) {
//		if (v[i])
//			for (int j = i * i; j <= maxi; j = pow(j, 2))
//				v[j] = false;
//	}
//
//	long long cnt = 0;
//	for (int i = mini; i <= maxi; i++)
//		if (v[i])
//			cnt++;
//
//	cout << cnt << endl;
//}