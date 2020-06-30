#include <iostream>
#include <algorithm>

#define endl "\n"
#define MAX 101
using namespace std;

string s1, s2, s3;
int arr[MAX][MAX][MAX];

void init() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
}

int main() {
	init();
	cin >> s1 >> s2 >> s3;

	for (int i = 1; i <= s1.size(); i++) {
		for (int j = 1; j <= s2.size(); j++) {
			for (int k = 1; k <= s3.size(); k++) {
				if (s1[i - 1] == s3[k - 1] && s1[i - 1] == s2[j - 1] && s2[j - 1] == s3[k - 1]) {
					arr[i][j][k] = arr[i - 1][j - 1][k - 1] + 1;
				}
				else {
					arr[i][j][k] = max(arr[i - 1][j][k], max(arr[i][j - 1][k], arr[i][j][k - 1]));
				}
			}
		}
	}
	cout << arr[s1.size()][s2.size()][s3.size()] << endl;
}



///// Longest Common Substring·Î Âø°¢ÇÔ...
//#include <iostream>
//#include <algorithm>
//
//#define endl "\n"
//#define MAX 101
//using namespace std;
//
//string s1, s2, s3;
//int arr[MAX][MAX][MAX];
//
//void init() {
//	ios::sync_with_stdio(false);
//	cin.tie(0);
//	cout.tie(0);
//}
//
//int main() {
//	init();
//	cin >> s1 >> s2 >> s3;
//
//	int result = 0;
//
//	for (int i = 1; i <= s1.size(); i++) {
//		for (int j = 1; j <= s2.size(); j++) {
//			if (s1[i - 1] == s2[j - 1]) {
//				for (int k = 1; k <= s3.size(); k++) {
//					if (s1[i - 1] == s3[k - 1]) {
//						arr[i][j][k] = arr[i - 1][j - 1][k - 1] + 1;
//					}
//					result = max(arr[i][j][k], result);
//				}
//			}
//		}
//	}
//
//	cout << result << endl;
//}