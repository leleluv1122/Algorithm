#include <iostream>
#include <cmath>
const int INF = 987654321;
using namespace std;

int dy[4] = { 0, 0, 1, 1 };
int dx[4] = { 0, 1, 0, 1 };
int r, c, n, cnt;

void solve(int n, int y, int x, int jump) {
	if (y == r && x == c) {
		cout << cnt << endl;
		return;
	}
	if ((x <= c && c < x + jump) && (y <= r && r < y + jump)) {
		solve(n / 2, y, x, jump / 2);
		solve(n / 2, y, x + jump / 2, jump / 2);
		solve(n / 2, y + jump / 2, x, jump / 2);
		solve(n / 2, y + jump / 2, x + jump / 2, jump / 2);
	}
	else {
		cnt += jump * jump;
		return;
	}
}

void init() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
}

int main() {
	init();
	cin >> n >> r >> c;
	n = pow(2, n);
	
	solve(n, 0, 0, n);
}





//#include <iostream>
//#include <math.h>
//
//#define endl "\n"
//using namespace std;
//
//int main() {
//	int N, r, c;
//	cin >> N >> r >> c;
//
//
//	int zN = pow(2, N);
//	int cnt = 0;
//
//	int a = 0, b = 0;
//	while (1) {
//		if (a == r && b == c) 
//			break;
//		cnt++;
//
//		b++;
//		if (a == r && b == c) 
//			break;
//		cnt++;
//
//		a++;
//		b--;
//		if (a == r && b == c) 
//			break;
//		cnt++;
//		
//		b++;
//		if (a == r && b == c) 
//			break;
//		cnt++;
//
//		a--; b++;
//
//		if (b == zN) {
//			b = 0;
//			a += 2;
//		}
//	}
//
//	cout << cnt << endl;
//}