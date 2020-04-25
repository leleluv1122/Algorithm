//#include <iostream>
//#include <queue>
//using namespace std;
//int main() {
//	int cnt = 0;
//	int T; cin >> T;
//
//	int n, m, rnk;
//	for (int i = 0; i < T; i++) {
//		cnt = 0;
//		cin >> n >> m;
//		queue<pair<int, int>> q;
//		priority_queue<int> pq; // 우선순위큐
//		for (int j = 0; j < n; j++) {
//			cin >> rnk;
//			q.push({ j, rnk });
//			pq.push(rnk);
//		}
//		while (!q.empty()) {
//			int idx = q.front().first;
//			int val = q.front().second;
//			q.pop();
//			if (pq.top() == val) {
//				pq.pop();
//				cnt++;
//				if (idx == m) {
//					cout << cnt << endl;
//					break;
//				}
//			}
//			else {
//				q.push({ idx, val });
//			}
//		}
//	}
//}



//#include <iostream>
//#include <queue>
//using namespace std;
//int main() {
//	int cnt = 0;
//	int T; cin >> T;
//	
//	int n, m, rnk;
//	for (int i = 0; i < T; i++) {
//		cnt = 0;
//		cin >> n >> m;
//		queue<pair<int, int>> q;
//		priority_queue<int> pq; // 우선순위큐
//		for (int j = 0; j < n; j++) {
//			cin >> rnk;
//			q.push({ j, rnk });
//			pq.push(rnk);
//		}
//		while (!q.empty()) {
//			int idx = q.front().first;
//			int val = q.front().second;
//			q.pop();
//			if (pq.top() == val)
//			{
//				pq.pop();
//				++cnt;
//				if (idx == m)
//				{
//					cout << cnt << endl;
//					break;
//				}
//			}
//			else
//				q.push({ idx, val });
//		}
//	}
//}



//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//int T, N, M;
//bool compare(int a, int b) {
//	if (a > b)
//		return true;
//	return false;
//}
//int main()
//{
//	vector<int> v;
//	cin >> T;
//	int c = T;
//	while (1) {
//		cin >> N >> M;
//		//v.resize(N);
//		for (int i = 0; i < N; i++)
//		{
//			int kk; cin >> kk;
//			v.push_back(kk);
//		}
//
//		int m = v[M];
//		sort(v.begin(), v.end(), compare);
//
//		int r = 0;
//		for (int i = 0; i < N; i++) {
//			if (v[i] == m)
//				r = i + 1;
//		}
//		cout << r << endl;
//		c--;
//		v.clear();
//
//		if (c == 0)
//			break;
//	}
//}