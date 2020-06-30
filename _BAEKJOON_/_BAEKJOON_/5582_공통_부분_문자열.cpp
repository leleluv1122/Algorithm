#include <iostream>
#include <algorithm>
#include <string>

#define endl "\n"
using namespace std;

string s1, s2;
int result;
int arr[4001][4001];

void init() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
}

int main() {
	init();
	cin >> s1 >> s2;

	result = 0;
	for (int i = 1; i <= s1.size(); i++) {
		for (int j = 1; j <= s2.size(); j++) {
			if (s1[i - 1] == s2[j - 1]) {
				arr[i][j] = arr[i - 1][j - 1] + 1;
			}
			result = max(result, arr[i][j]);
		}
	}

	cout << result << endl;
}

//#include <iostream>
//#include <algorithm>
//#include <string>
//#include <vector>
//
//#define endl "\n"
//using namespace std;
//
//string s1, s2;
//int result;
//
//void init() {
//	ios::sync_with_stdio(false);
//	cin.tie(0);
//	cout.tie(0);
//}
//
//int main() {
//	init();
//	cin >> s1 >> s2;
//	vector<vector<int>> arr(s1.size() + 1, vector<int>(s2.size() + 1, 0));
//
//	result = 0;
//	for (int i = 1; i <= s1.size(); i++) {
//		for (int j = 1; j <= s2.size(); j++) {
//			if (s1[i - 1] == s2[j - 1]) {
//				arr[i][j] = arr[i - 1][j - 1] + 1;
//			}
//			result = max(result, arr[i][j]);
//		}
//	}
//	cout << result << endl;
//}