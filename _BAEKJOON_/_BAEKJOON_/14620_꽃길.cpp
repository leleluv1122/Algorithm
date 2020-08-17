#include <iostream>
using namespace std;

int n, ans;
int cost[10][10];
bool visited[10][10];
int gogoA[4] = { 0,0,1,-1 };
int gogoB[4] = { 1,-1,0,0 };

int calc() {
	int sum = 0;
	int cnt = 0;
	
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (visited[i][j]) {
				sum += cost[i][j];
				cnt++;
				if (cnt == 15) 
					return sum;
			}
		}
	}
}

void select(int cnt) {
	if (cnt == 3) {
		int tmp = calc();
		if (ans == -1 || ans > tmp)
			ans = tmp;
		return;
	}

	for (int i = 1; i < n - 1; i++) {
		for (int j = 1; j < n - 1; j++) {
			bool flag = true;
			for (int k = 0; k < 4; k++) {
				int a = i + gogoA[k];
				int b = j + gogoB[k];

				if (visited[a][b]) {
					flag = false;
					break;
				}
			}

			if (!flag) 
				continue;
			
			visited[i][j] = true;
			for (int k = 0; k < 4; k++) {
				int a = i + gogoA[k];
				int b = j + gogoB[k];
				visited[a][b] = true;
			}

			select(cnt + 1);
			visited[i][j] = false;
			for (int k = 0; k < 4; k++) {
				int a = i + gogoA[k];
				int b = j + gogoB[k];
				visited[a][b] = false;
			}
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
	cin >> n;

	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			cin >> cost[i][j];
	
	ans = -1;
	select(0);
	cout << ans;
}




//// ¸Ó°¡Æ²·ÇÁö...¤Ð¤Ð
//#include <iostream>
//#include <algorithm>
//#include <queue>
//
//using namespace std;
//
//int N;
//int arr[10][10];
//bool visited[10][10];
//int flower[10][10];
//int rst = 0;
//
//int gogoA[5] = { -1,0,1,0,0 };
//int gogoB[5] = { 0,-1, 0,1,0 };
//
//void init() {
//	ios::sync_with_stdio(false);
//	cin.tie(0);
//	cout.tie(0);
//}
//
//int main() {
//	init();
//	cin >> N;
//
//	for (int i = 0; i < N; i++)
//		for (int j = 0; j < N; j++)
//			cin >> arr[i][j];
//
//	for (int i = 0; i < N; i++) {
//		for (int j = 0; j < N; j++) {
//			bool bb = true;
//			int money = arr[i][j];
//			for (int k = 0; k < 4; k++) {
//				int a = i + gogoA[k];
//				int b = j + gogoB[k];
//
//				if (a < 0 || a >= N || b < 0 || b >= N) {
//					bb = false;
//					break;
//				}
//				money += arr[a][b];
//			}
//			if (bb)
//				flower[i][j] = money;
//			else
//				flower[i][j] = -1;
//		}
//	}
//
//	for (int i = 0; i < N; i++) {
//		for (int j = 0; j < N; j++)
//			cout << flower[i][j] << " ";
//		cout << "\n";
//	}
//	//// hap, i,j
//	priority_queue <pair<int, pair<int, int>>, vector<pair<int, pair<int, int>>>, greater<pair<int, pair<int, int>>>> pq;
//	for (int i = 0; i < N; i++)
//		for (int j = 0; j < N; j++)
//			if (flower[i][j] != -1)
//				pq.push(make_pair(flower[i][j], make_pair(i, j)));
//
//	int cnt = 0;
//	int result = 0;
//	while (!pq.empty()) {
//		int a = pq.top().second.first;
//		int b = pq.top().second.second;
//		int hap = pq.top().first;
//		pq.pop();
//
//		bool boo = true;
//		for (int i = 0; i < 5; i++) {
//			int A = a + gogoA[i];
//			int B = b + gogoB[i];
//
//			if (visited[A][B]) {
//				boo = false;
//				break;
//			}
//		}
//		if (boo) {
//			cnt++;
//			for (int i = 0; i < 5; i++) {
//				int A = a + gogoA[i];
//				int B = b + gogoB[i];
//
//				visited[A][B] = true;
//			}
//			result += flower[a][b];
//		}
//
//		if (cnt == 3)
//			break;
//	}
//	cout << result << "\n";
//}