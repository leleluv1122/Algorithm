#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>

#define MAX 1000000 + 1
#define endl "\n"
using namespace std;

int N;
bool visited[MAX];

void init() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
}

int main() {
	init();
	int T;
	cin >> T;

	while(T--) {
		cin >> N;
		
		priority_queue<pair<int, int>> maxHeap;
		priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> minHeap;
		
		for (int i = 0; i < N; i++) {
			char c; int num;
			cin >> c >> num;
			if (c == 'I') {
				maxHeap.push(make_pair(num, i));
				minHeap.push(make_pair(num, i));
				visited[i] = true;
			}
			else {
				if (num == 1) {
					while (!maxHeap.empty() && !visited[maxHeap.top().second])
						maxHeap.pop();
					if (!maxHeap.empty()) {
						visited[maxHeap.top().second] = false;
						maxHeap.pop();
					}
				}
				else {
					while (!minHeap.empty() && !visited[minHeap.top().second])
						minHeap.pop();
					if (!minHeap.empty()) {
						visited[minHeap.top().second] = false;
						minHeap.pop();
					}
				}
			}
		}
		while (!maxHeap.empty() && !visited[maxHeap.top().second])
			maxHeap.pop();
		while (!minHeap.empty() && !visited[minHeap.top().second])
			minHeap.pop();

		if (minHeap.empty() && maxHeap.empty())
			cout << "EMPTY" << endl;
		else
			cout << maxHeap.top().first << " " << minHeap.top().first << endl;
	}
}


//// 20%에서 틀림
//#include <iostream>
//#include <queue>
//#include <vector>
//#include <algorithm>
//
//#define endl "\n"
//using namespace std;
//
//void init() {
//	ios::sync_with_stdio(false);
//	cin.tie(0);
//	cout.tie(0);
//}
//
//int main() {
//	init();
//	int T;
//	cin >> T;
//
//	while (T--) {
//		// 큰숫자부터
//		priority_queue<long long> bigq;
//		// 작은숫자부터
//		priority_queue<long long, vector<long long>, greater<long long>> smallq;
//		int k;
//
//		cin >> k;
//
//		while (k--) {
//			char c; long long n;
//			cin >> c >> n;
//
//			if (c == 'I') {
//				bigq.push(n);
//				smallq.push(n);
//			}
//			else if (c == 'D') {
//				if (bigq.empty() || smallq.empty())
//					continue;
//				else {
//					if (n == -1) {
//						smallq.pop();
//					}
//					else {
//						bigq.pop();
//					}
//				}
//			}
//		}
//
//		if (smallq.empty() && bigq.empty())
//			cout << "EMPTY" << endl;
//		else if(smallq.top() == bigq.top())
//			cout << "EMPTY" << endl;
//		else
//			cout << bigq.top() << " " << smallq.top() << endl;
//	}
//}