//#include <iostream>
//#include <string>
//using namespace std;
//int main() {
//	ios_base::sync_with_stdio(0);
//	cin.tie(0);
//	string str;
//	string fs;
//
//	getline(cin, str);
//	getline(cin, fs);
//
//	if (fs.size() > str.size())
//		cout << 0 << "\n";
//	else {
//		int cnt = 0;
//		for (int i = 0; i < str.size() - fs.size() + 1; i++) {
//			bool v = true;
//			for (int j = 0; j < fs.size(); j++) {
//				if (str[i + j] != fs[j]) {
//					v = false;
//					break;
//				}
//			}
//			if (v) {
//				cnt++;
//				i += fs.size() - 1;
//			}
//		}
//		cout << cnt << "\n";
//	}
//}


////// 왜틀렷는지모르게똬...
////#include <iostream>
////#include <string>
////using namespace std;
////int main() {
////	ios_base::sync_with_stdio(0);
////	cin.tie(0); //cin 실행속도 향상
////	string str;
////	string fs;
////
////	getline(cin, str);
////	getline(cin, fs);
////	
////	int cnt = 0;
////	int n = 0;
////	int strsize = str.size();
////	string s;
////	while (1) {
////		s += str[n];
////
////		if (s == fs) {
////			s = "";
////			cnt++;
////		}
////		else {
////			int t = s.size();
////			for (int i = 0; i < t; i++) {
////				if (s[i] != fs[i])
////					s = str[n];
////			}
////		}
////
////
////		if (n == strsize)
////			break;
////		n++;
////	}
////	cout << cnt << "\n";
////}

//ababcaabcababc
//abc