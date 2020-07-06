#include <iostream>
#include <deque>

#define MAX 100001
#define endl "\n"
using namespace std;

int visited[MAX];
int ans[MAX];

void init() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
}

int minSecond(int N, int K) {
	deque<int> dq;
	dq.push_back(N);
	visited[N] = 1;

	while (!dq.empty()) {
		int d = dq.back();  // ���������� ����!
		dq.pop_back(); // ��������������

		if (d == K)
			return ans[d];

		int gogo[3] = { d * 2, d - 1, d + 1 };

		for (int i = 0; i < 3; i++) {
			if (gogo[i] >= 0 && gogo[i] < MAX) {
				if (!visited[gogo[i]]) {
					visited[gogo[i]] = 1;

					if (gogo[i] == d * 2) {
						ans[gogo[i]] = ans[d];
						dq.push_back(gogo[i]);
					}
					else {
						ans[gogo[i]] = ans[d] + 1;
						dq.push_front(gogo[i]); // �տ��ٰ� �־ �����̵����� �ʰ� �������ϱ�.
					}
				}
			}
		}
	}
}

int main() {
	init();
	int N, K;
	cin >> N >> K;

	cout << minSecond(N, K) << endl;
}



////////// �ȴ�
//#include <iostream>
//#include <queue>
//
//#define MAX 100001
//#define endl "\n"
//using namespace std;
//
//void init() {
//	ios::sync_with_stdio(false);
//	cin.tie(0);
//	cout.tie(0);
//}
//
//int minSecond(int N, int K) {
//	queue<pair<int, int>> q;
//	int result = 0;
//	q.push(make_pair(N, 0));
//
//	while (!q.empty()) {
//		int d = q.front().first;
//		int cost = q.front().second;
//		q.pop();
//
//		if (d == K) {
//			result = cost;
//			break;
//		}
//
//		if (d * 2 < MAX)
//			q.push(make_pair(d * 2, cost));
//		q.push(make_pair(d - 1, cost + 1));
//		if (d + 1 < MAX)
//			q.push(make_pair(d + 1, cost + 1));
//	}
//
//	return result;
//}
//
//int main() {
//	init();
//	int N, K;
//	cin >> N >> K;
//
//	cout << minSecond(N, K) << endl;
//}