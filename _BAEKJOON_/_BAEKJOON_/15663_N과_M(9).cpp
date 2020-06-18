#include <iostream> 
#include <vector>
#include <map>
#include <algorithm> 

#define MAX 8
#define endl "\n"
using namespace std;

int n, m;
vector<int> v;
int visited[MAX];
map<int, int> numberCnt;

void NandM(int idx, int cnt) {
	if (cnt == m) {
		for (int i = 0; i < m; i++)
			cout << v[visited[i]] << " ";
		cout << endl;
		return;
	}
	if (idx == n)
		return;

	for (int i = 0; i < v.size(); i++) {
		if (numberCnt[v[i]]) {
			numberCnt[v[i]]--;

			visited[idx] = i;
			NandM(idx + 1, cnt + 1);

			numberCnt[v[i]]++;
		}
	}
}

void init() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
}

int main() {
	init();
	cin >> n >> m;

	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;

		if (!numberCnt.count(a)) {
			numberCnt[a] = 1;
			v.push_back(a);
		}
		else
			numberCnt[a]++;
	}
	sort(v.begin(), v.end());

	NandM(0, 0);
}