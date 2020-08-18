#include <iostream>

using namespace std;

void init() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
}

int main() {
	init();
	int t; cin >> t;

	while (t--) {
		long a, b;
		cin >> a >> b;
		long rst = a;

		b = b % 4 + 4;
		for (long i = 2; i <= b; i++)
			rst = (rst * a) % 10;

		if (rst == 0)
			rst = 10;
		cout << rst << "\n";
	}
}


//#include <iostream>
//
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
//	int t;
//	cin >> t;
//	
//	while (t--) {
//		long a, b;
//		cin >> a >> b;
//		
//		long d = a;
//		for (long i = 2; i <= b; i++)
//			d = (d * a) % 10;
//		
//		if (d == 0)
//			d = 10;
//		cout << d << "\n";
//	}
//}