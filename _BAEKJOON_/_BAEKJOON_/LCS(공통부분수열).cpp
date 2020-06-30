#include <iostream>
#include <algorithm>

#define endl "\n"
using namespace std;

string s1, s2;
int arr[500][500];

void init() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
}

int main() {
	init();
	cin >> s1 >> s2;

	for (int i = 1; i <= s1.size(); i++) {
		for (int j = 1; j <= s2.size(); j++) {
			if (s1[i - 1] == s2[j - 1]) 
				arr[i][j] = arr[i - 1][j - 1] + 1;
			else 
				arr[i][j] = max(arr[i - 1][j], arr[i][j - 1]);
		}
	}

	cout << arr[s1.size()][s2.size()] << endl;
}