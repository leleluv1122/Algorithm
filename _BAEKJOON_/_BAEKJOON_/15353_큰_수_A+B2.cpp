#include <iostream>
#include <string>
#include <algorithm>

#define endl "\n"
using namespace std;

int pl = 0;
string x, y;
string result = "";

int main() {
	cin >> x >> y;

	reverse(x.begin(), x.end());
	reverse(y.begin(), y.end());

	while (x.length() < y.length()) {
		x += '0';
	}
	while (x.length() > y.length()) {
		y += '0';
	}

	for (int i = 0; i < x.length(); ++i) {
		int num = (x[i] - '0' + y[i] - '0' + pl) % 10;
		result += to_string(num);
		pl = (x[i] - '0' + y[i] - '0' + pl) / 10;
	}

	if (pl != 0) {
		result += to_string(pl);
	}

	reverse(result.begin(), result.end());
	cout << result << endl;;
}


//#include <iostream>
//#include <string>
//#include <algorithm>
//
//#define endl "\n"
//using namespace std;
//
//int main() {
//	string A, B;
//	cin >> A >> B;
//
//	reverse(A.begin(), A.end());
//	reverse(B.begin(), B.end());
//
//	string result = "";
//	int pl = 0, n = 0;
//	
//
//	while (1) {
//		if (n >= A.size() && n >= B.size()) {
//			if (pl) {
//				int r = pl % 10;
//				result += char(r + '0');
//				pl = pl / 10;
//			}
//			else
//				break;
//		}
//
//		if (n < A.size() && n < B.size()) {
//			int r = (int(A[n] - '0') + int(B[n] - '0') + pl);
//			result += char((r % 10) + '0');
//			pl = (int(A[n] - '0') + int(B[n] - '0') + pl) / 10;
//		}
//		n++;
//	}
//	reverse(result.begin(), result.end());
//	cout << result << endl;
//}