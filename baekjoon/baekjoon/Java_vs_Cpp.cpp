//#include <iostream>
//using namespace std;
//int main()
//{
//	string s; cin >> s;
//
//	bool jv = false, err = false;
//
//	if (s[0] == '_' || s[s.size() - 1] == '_')
//		err = true;
//	if (s[0] >= 65 && s[0] <= 90)
//		err = true;
//
//	int d = 1001;
//	for (int i = 0; i < s.size(); i++) {
//		if (s[i] == '_') {
//			if (d + 1 == i) {
//				err = true;
//				break;
//			}
//			jv = true;
//			d = i;
//		}
//	}
//
//	for (int i = 0; i < s.size(); i++) {
//		if (jv) { // java
//			if (s[0] >= 65 && s[0] <= 90)
//				err = true;
//		}
//		else { // cpp
//			if (s[i] == '_')
//				err = true;
//		}
//	}
//
//	string r = "";
//	if (jv) {
//		int a = 101;
//		for (int i = 0; i < s.size(); i++) {
//			if (s[i] >= 65 && s[i] <= 90)
//				err = true;
//			if (s[i] == '_') {
//				a = i;
//			}
//			else if (i == a+1) {
//				r += (s[i] - 32);
//			}
//			else {
//				r += s[i];
//			}
//		}
//	} // cpp->java
//	else {
//		for (int i = 0; i < s.size(); i++) {
//			if (s[i] == '_')
//				err = true;
//			if (s[i] >= 65 && s[i] <= 90) {
//				r += '_';
//				r += s[i] + 32;
//			}
//			else
//				r += s[i];
//		}
//	} // java->cpp
//
//	if (err)
//		cout << "Error!\n";
//	else
//		cout << r << endl;
//}