#include <iostream>
#include <vector>
#include <algorithm>

#define MAX 25
using namespace std;

int N;
int arr[MAX][MAX];
bool visited[MAX][MAX];
int build;
vector<int> v;
int gogoA[4] = { 0,1,0,-1 };
int gogoB[4] = { 1,0,-1,0 };

void building(int a, int b) {
	for (int i = 0; i < 4; i++) {
		int A = a + gogoA[i];
		int B = b + gogoB[i];

		if (A >= 0 && A < N && B >= 0 && B < N)
			if (!visited[A][B] && arr[A][B]) {
				build++;
				visited[A][B] = true;
				building(A, B);
			}
	}
}

int main() {
	cin >> N;
	for (int i = 0; i < N; i++) {
		string s; cin >> s;
		for (int j = 0; j < s.size(); j++)
			arr[i][j] = s[j] - '0';
	}
	
	int cnt = 0;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (!visited[i][j] && arr[i][j]) {
				build = 1;
				visited[i][j] = true;
				building(i, j);
				cnt++;
				v.push_back(build);
			}
		}
	}
	sort(v.begin(), v.end());
	cout << cnt << "\n";
	for (int i = 0; i < v.size(); i++)
		cout << v[i] << "\n";
}