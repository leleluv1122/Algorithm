#include <iostream>
#include <vector>
#include <string>
#include <bitset>

#define endl "\n"
#define MAX 10000
using namespace std;

vector<bitset<26>> know;
vector<bitset<26>> str;
int n, m;

void init() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
}

int main() {
	init();
	cin >> n >> m;

	str.resize(n);
	for (int i = 0; i < n; i++) {
		string s;
		cin >> s;
		for (int j = 0; j < s.size(); j++) {
			str[i][s[j] - 'a'] = true;
		}
	}

	know = str;
	int o;
	char x;

	while(m--) {
		cin >> o >> x;
		if (o == 1) {
			for (int i = 0; i < n; i++)
				if (know[i][x - 'a'] == true)
					str[i][x - 'a'] = false;
		}
		else {
			for (int i = 0; i < n; i++)
				if (know[i][x - 'a'] == true)
					str[i][x - 'a'] = true;
		}
		int cnt = 0;

		for (int i = 0; i < n; i++)
			if (know[i] == str[i])
				cnt++;
		cout << cnt << endl;
	}
}





//// 시간초과
//#include <iostream>
//#include <algorithm>
//#include <vector>
//#include <cstring>
//
//#define endl "\n"
//#define MAX 10000
//using namespace std;
//
//bool know[26];
//// int str[MAX][26];
//vector<string> v;
//int n, m;
//vector<int> cv;
//
//int main() {
//	cin >> n >> m;
//
//	for (int i = 0; i < n; i++) {
//		string s;
//		cin >> s;
//		v.push_back(s);
//		/*for (int j = 0; j < s.size(); j++) {
//			str[i][s[j] - 'a']++;
//		}*/
//	}
//
//	int cnt = 0;
//	memset(know, true, sizeof(know));
//	for (int i = 0; i < m; i++) {
//		int o;
//		char x;
//		cin >> o >> x;
//		if (o == 1)
//			know[x - 'a'] = false;
//		else if (o == 2)
//			know[x - 'a'] = true;
//
//		bool b = true;
//		int cnt = 0;
//		for (int j = 0; j < v.size(); j++) {
//			b = true;
//			for (int k = 0; k < v[j].size(); k++) {
//				if (!know[v[j][k] - 'a'])
//					b = false;
//			}
//			if (b)
//				cnt++;
//		}
//		cv.push_back(cnt);
//	}
//
//	for (int i = 0; i < m; i++)
//		cout << cv[i] << endl;
//}