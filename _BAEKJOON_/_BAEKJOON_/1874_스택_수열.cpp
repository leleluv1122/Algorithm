#include <iostream>
#include <stack>
#include <vector>

#define MAX 100000
using namespace std;

int arr[MAX];

void init() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
}

int main() {
	init();
	int n;
	cin >> n;

	for (int i = 0; i < n; i++)
		cin >> arr[i];

	vector<char> v;

	int idx = 0;
	stack<int> st;
	for (int i = 1; i <= n; i++) {
		st.push(i);
		v.push_back('+');

		while (arr[idx] == st.top()) {
			v.push_back('-');
			st.pop();
			idx++;

			if (idx >= n || st.empty())
				break;
		}
	}

	if (!st.empty())
		cout << "NO" << "\n";
	else
		for (int i = 0; i < v.size(); i++)
			cout << v[i] << "\n";
}