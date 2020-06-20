#include <iostream>

#define endl "\n"
using namespace std;

int a, b;

int main() {
	cin >> a >> b;

	int cnt = 0;
	while (1) {
		if (a > b) {
			cout << -1 << endl;
			break;
		}
		if (a == b) {
			cout << cnt + 1 << endl;
			break;
		}


		if (b % 10 == 1)
			b /= 10;
		
		else if (b % 2 == 0) 
			b /= 2;
		
		else {
			cout << -1 << endl;
			break;
		}
		cnt++;
	}
}




// 답은나오는데 왜안대징..
//#include <iostream>
//using namespace std;
//
//int A, B;
//int result = 0;
//
//void init() {
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//}
//
//void AB(int a, int cnt) {
//	if (a == B) {
//		result = cnt;
//		return;
//	}
//	if (a > B)
//		return;
//
//	AB(a * 2, cnt + 1);
//	AB(a * 10 + 1, cnt + 1);
//}
//
//int main() {
//	init();
//	cin >> A >> B;
//
//	AB(A, 1);
//	if (result != 0)
//		cout << result << endl;
//	else cout << -1 << endl;
//}