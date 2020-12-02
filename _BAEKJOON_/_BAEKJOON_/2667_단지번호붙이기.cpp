#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int arr[25][25];
int cnt, N;
vector<int> v;
bool visited[25][25];
int gogoA[4] = { 0,1,0,-1 };
int gogoB[4] = { 1,0,-1,0 };

void init() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
}

void dangi(int a, int b) {
	visited[a][b] = true;
	for (int i = 0; i < 4; i++) {
		int A = a + gogoA[i];
		int B = b + gogoB[i];

		if (A >= 0 && A < N && B >= 0 && B < N)
			if (!visited[A][B] && arr[A][B]) {
				cnt++;
				dangi(A, B);
			}
	}
}

int main() {
	init();
	cin >> N;
	for (int i = 0; i < N; i++) {
		string s; cin >> s;
		for (int j = 0; j < s.size(); j++)
			arr[i][j] = s[j] - '0';
	}
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (!visited[i][j] && arr[i][j]) {
				cnt = 1;
				dangi(i, j);
				v.push_back(cnt);
			}
		}
	}
	sort(v.begin(), v.end());
	cout << v.size() << "\n";
	for (int i = 0; i < v.size(); i++)
		cout << v[i] << "\n";
}