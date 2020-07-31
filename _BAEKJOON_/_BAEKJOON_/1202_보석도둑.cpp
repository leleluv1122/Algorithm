#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>

#define MAX 300000
using namespace std;

int N, K;
int bag[MAX];
pair<int, int> jewelry[MAX];
priority_queue<int> pq;

void init() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
}

int main() {
	init();
	cin >> N >> K;

	for (int i = 0; i < N; i++)
		cin >> jewelry[i].first >> jewelry[i].second;
	for (int i = 0; i < K; i++)
		cin >> bag[i];
	sort(jewelry, jewelry + N);
	sort(bag, bag + K);

	long long total = 0;
	int idx = 0;
	for (int i = 0; i < K; i++) {
		while (idx < N && jewelry[idx].first <= bag[i])
			pq.push(jewelry[idx++].second);

		if (!pq.empty()) {
			total += pq.top();
			pq.pop();
		}
	}

	cout << total << "\n";
}


//// timeout  ////
//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//int N, K;
//vector<pair<int, int>> jewelry;
//vector<int> bag;
//bool visited[300000];
//
//void init() {
//	ios::sync_with_stdio(false);
//	cin.tie(0);
//	cout.tie(0);
//}
//
//bool cmp(pair<int, int> a, pair<int, int> b) {
//	if (a.first > b.first)
//		return true;
//	return false;
//}
//
//int main() {
//	init();
//	cin >> N >> K;
//
//	for (int i = 0; i < N; i++) {
//		int m, v;
//		cin >> m >> v;
//		jewelry.push_back(make_pair(v, m)); // 가치, 무게
//	}
//	sort(jewelry.begin(), jewelry.end(), cmp); // 가치가 큰거부터 정렬
//
//	for (int i = 0; i < K; i++) {
//		int c;
//		cin >> c;
//		bag.push_back(c);
//	}
//	sort(bag.begin(), bag.end()); // 무게가 작은것부터
//
//	long long total = 0;
//	for (int i = 0; i < bag.size(); i++) {
//		int bak = bag[i];
//
//		for (int j = 0; j < jewelry.size(); j++) {
//			if (bak >= jewelry[j].second && !visited[j]) {
//				visited[j] = true;
//				total += jewelry[j].first;
//				break;
//			}
//		}
//	}
//
//	cout << total << "\n";
//}