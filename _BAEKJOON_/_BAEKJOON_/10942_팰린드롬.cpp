#include <iostream>
#define MAX 2000
using namespace std;
int arr[MAX + 1];
int N, M;
bool d[MAX + 1][MAX + 1];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> N;
	
	for (int i = 1; i <= N; i++)
		cin >> arr[i];
	
	// 1개
	for (int i = 1; i <= N; i++)
		d[i][i] = 1;

	// 2개
	for (int i = 1; i < N; i++)
		if (arr[i] == arr[i + 1])
			d[i][i + 1] = 1;

	// 2개 이상
	for (int i = 2; i < N; i++)
		for (int j = 1; j <= N - i; j++)
			if (arr[j] == arr[i + j] && d[j + 1][i + j - 1])
				d[j][i + j] = 1;

	cin >> M;
	while (M--) {
		int a, b; cin >> a >> b;
		cout << d[a][b] << "\n";
	}
}






//// timeout
//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//vector<int> v;
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(0);
//	cout.tie(0);
//	int N, M, a, b; cin >> N;
//	for (int i = 0; i < N; i++) {
//		int a; cin >> a;
//		v.push_back(a);
//	}
//
//	cin >> M;
//	while (M--) {
//		cin >> a >> b;
//		string s1, s2;
//		for (int i = a - 1; i < b; i++) {
//			s1 += (v[i] + '0');
//			s2 += (v[i] + '0');
//		}
//		reverse(s2.begin(), s2.end());
//		s1 == s2 ? cout << 1 << "\n" : cout << 0 << "\n";
//	}
//}