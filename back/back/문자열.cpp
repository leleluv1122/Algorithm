//#include <iostream>
//#include <string>
//#include <algorithm>
//using namespace std;
//int main() {
//	string A, B;
//	cin >> A >> B;
//	int m = 99999;
//	int cnt = 0;
//
//	for (int i = 0; i <= B.size() - A.size(); ++i) {
//		cnt = 0;
//		for (int j = 0; j < A.size(); ++j) {
//			if (A[j] != B[j + i])
//				cnt++;
//		}
//		m = min(m, cnt);
//	}
//	cout << m << endl;
//}




//////////adaabc aababbc
//#include <iostream>
//#include <string>
//#include <algorithm>
//using namespace std;
//
//int main() {
//	string A, B;
//	cin >> A >> B;
//
//	int m = 99999;
//	int cnt = 0;
//	for (int i = 0; i <= B.size() - A.size(); ++i) {
//		cnt = 0;
//		for (int k = 0; k < A.size(); ++k) {
//			if (A[k] != B[k + i])
//				cnt++;
//		}
//		m = min(m, cnt);
//	}
//	cout << m << endl;
//}











//#include <iostream>
//#include <string>
//#include <algorithm>
//
//using namespace std;
//int main() {
//	string A;
//	string B;
//	int m = 99999;
//	cin >> A >> B;
//
//	int cnt = 0;
//	for (int i = 0; i <= B.size() - A.size(); ++i) {
//		cnt = 0;
//		for (int k = 0; k < A.size(); ++k) {
//			if (A[k] != B[k + i])
//				cnt++;
//		}
//		m = min(m, cnt);
//	}
//
//	cout << m << endl;
//
//	/*if (A.size() == B.size()) {
//		for (int i = 0; i < A.size(); ++i) {
//			if (A[i] != B[i])
//				cnt++;
//		}
//	}
//	else {
//		
//	}*/
//}
