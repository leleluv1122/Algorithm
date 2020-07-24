#include <iostream>
#include <stack>

#define endl "\n"
using namespace std;

void init() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
}

int main() {
	init();
	int K;
	stack<int> st;

	cin >> K;
	while (K--) {
		int a;
		cin >> a;
		if (a == 0)
			st.pop();
		else
			st.push(a);
	}

	int result = 0, sz = st.size();
	for (int i = 0; i < sz; i++) {
		result += st.top();
		st.pop();
	}

	cout << result << endl;
}