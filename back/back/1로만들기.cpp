//#include <iostream>
//#include <algorithm>
//using namespace std;
//int main() {
//	int X;
//	cin >> X;
//	int d[1000001];
//	d[1] = 0;
//
//	for (int i = 2; i <= X; ++i) {
//		d[i] = d[i - 1] + 1;
//		if (i % 2 == 0) {
//			d[i] = min(d[i], d[i / 2] + 1);
//		}
//		if (i % 3 == 0) {
//			d[i] = min(d[i], d[i / 3] + 1);
//		}
//	}
//	cout << d[X] << endl;
//}



//#include <iostream>
//#include <algorithm>
//using namespace std;
//int main() {
//	int X;
//	cin >> X;
//	int d[10000];
//	d[1] = 0;
//
//	for (int i = 2; i <= X; ++i) {
//		d[i] = d[i - 1] + 1;
//		if (i % 2 == 0) {
//			d[i] = min(d[i / 2] + 1, d[i]);
//		}
//		if (i % 3 == 0) {
//			d[i] = min(d[i / 3] + 1, d[i]);
//		}
//	}
//	cout << d[X] << endl;
//}