#include <iostream>
#include <cstring>
#include <queue>

#define endl "\n"
#define MAX 126
#define INF 987654321
using namespace std;

int N;
int arr[MAX][MAX];
int gogoA[4] = { 0,1,0,-1 };
int gogoB[4] = { 1,0,-1,0 };
int hrr[MAX][MAX];
bool visited[MAX][MAX];

void init() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
}

int main() {
	init();
	int t = 1;
	while (1) {
		cin >> N;

		if (N == 0)
			break;
		memset(arr, 0, sizeof(arr));
		memset(visited, false, sizeof(visited));
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < N; j++) {
				cin >> arr[i][j];
				hrr[i][j] = INF;
			}
		}

		priority_queue<pair<int, pair<int, int>>, vector<pair<int, pair<int, int>>>, greater<pair<int, pair<int, int>>>> pq;
		pq.push(make_pair(0, make_pair(0, 0)));
		visited[0][0] = true;

		while (!pq.empty()) {
			int a = pq.top().second.first;
			int b = pq.top().second.second;
			int cost = pq.top().first;
			pq.pop();

			for (int i = 0; i < 4; i++) {
				int A = a + gogoA[i];
				int B = b + gogoB[i];
				int COST = cost + arr[A][B];

				if (A >= 0 && A < N && B >= 0 && B < N) {
					if (!visited[A][B] && hrr[A][B] > COST) {
						visited[A][B] = true;
						hrr[A][B] = COST;
						pq.push(make_pair(COST, make_pair(A, B)));
					}
				}
			}

		}
		int result = arr[0][0] + hrr[N - 1][N - 1];

		cout << "Problem " << t << ": " << result << endl;
		t++;
	}
}





//////////시간초과/////////////
//#include <iostream>
//#include <cstring>
//
//#define endl "\n"
//#define MAX 126
//#define INF 987654321
//using namespace std;
//
//int N;
//int arr[MAX][MAX];
//int gogoA[4] = { 0,1,0,-1 };
//int gogoB[4] = { 1,0,-1,0 };
//int hrr[MAX][MAX];
//
//void jelda(int a, int b) {
//	int cost = hrr[a][b];
//
//	if (a == N - 1 && b == N - 1)
//		return;
//
//	for (int i = 0; i < 4; i++) {
//		int A = a + gogoA[i];
//		int B = b + gogoB[i];
//
//		if (A >= 0 && A < N && B >= 0 && B < N) {
//			if (cost + arr[A][B] < hrr[A][B]) {
//				hrr[A][B] = cost + arr[A][B];
//				jelda(A, B);
//			}
//		}
//	}
//}
//
//int main() {
//	ios_base::sync_with_stdio(0); 
//	cin.tie(0);
//	
//	int t = 1;
//	while (1) {
//		cin >> N;
//
//		if (N == 0)
//			break;
//		memset(arr, 0, sizeof(arr));
//		for (int i = 0; i < N; i++) {
//			for (int j = 0; j < N; j++) {
//				cin >> arr[i][j];
//				hrr[i][j] = INF;
//			}
//		}
//		hrr[0][0] = arr[0][0];
//		jelda(0, 0);
//
//		int result = hrr[N - 1][N - 1];
//
//		cout << "Problem " << t << ": " << result << endl;
//		t++;
//	}
//}