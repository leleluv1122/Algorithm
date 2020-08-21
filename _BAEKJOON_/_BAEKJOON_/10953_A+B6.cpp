#include <stdio.h>
int main()
{
	int n, i, a, b;
	scanf_s("%d", &n);

	for (i = 0; i < n; i++) {
		scanf_s("%d,%d", &a, &b); // 이렇게가 더 쉽네,, 오진다
		printf("%d\n", a + b);
	}
}

//#include <iostream>
//#include <string>
//using namespace std;
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(0);
//	cout.tie(0);
//	int T; cin >> T;
//	while (T--) {
//		string s; cin >> s;
//
//		string a, b;
//		int n = 0;
//		for (int i = 0; i < s.size(); i++) {
//			if (s[i] == ',') {
//				n++;
//				continue;
//			}
//			if (n == 0)
//				a += s[i];
//			else
//				b += s[i];
//		}
//		cout << stoi(a) + stoi(b) << "\n";
//	}
//}