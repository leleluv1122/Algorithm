//#include <iostream>
//#include <algorithm>
//#define endl "\n"
//using namespace std;
//int L, C;
//char munja[15];
//// a c i s t w
//void backTracking(int pos, string str, int ja, int mo) {
//	if (str.size() == L) {
//		if (ja < 2 || mo < 1)
//			return;
//		cout << str << endl;
//	}
//	for (int i = pos; i < C; i++) {
//		if (munja[i] == 'a' || munja[i] == 'e' || munja[i] == 'i' ||
//			munja[i] == 'o' || munja[i] == 'u')
//			backTracking(i + 1, str + munja[i], ja, mo + 1);
//		else
//			backTracking(i + 1, str + munja[i], ja + 1, mo);
//	}
//}
//
//int main() {
//	cin >> L >> C;
//	for (int i = 0; i < C; i++)
//		cin >> munja[i];
//	sort(munja, munja + C); // a c i s t w
//
//	backTracking(0, "", 0, 0);
//}