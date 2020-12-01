#include <iostream>
#include <deque>
#define endl "\n"
using namespace std;

deque<int> dq;

void init() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
}

int main() {
	init();
	int N, M, cnt = 0;
	cin >> N >> M;
	for (int i = 1; i <= N; i++)
		dq.push_back(i);

	while (M--) {
		int num, idx = 0; cin >> num;
		for (int i = 0; i < dq.size(); i++) {
			if (dq[i] == num) {
				idx = i;
				break;
			}
		}
		if (idx < dq.size() - idx) {
			while (1) {
				if (dq.front() == num) {
					dq.pop_front();
					break;
				}
				++cnt;
				dq.push_back(dq.front());
				dq.pop_front();
			}
		}
		else {
			while (1) {
				if (dq.front() == num) {
					dq.pop_front();
					break;
				}
				++cnt;
				dq.push_front(dq.back());
				dq.pop_back();
			}
		}
	}
	cout << cnt << endl;
}