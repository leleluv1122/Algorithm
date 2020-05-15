//#include <iostream>
//#include <algorithm>
//using namespace std;
//const int MAX = 20;
//
//int R, C, ans;
//char board[MAX][MAX];
//bool visited[26];
//
//int gogoA[4] = { 0,1,0,-1 };
//int gogoB[4] = { 1,0,-1,0 };
//
//void dfs(int a, int b, int cnt) {
//	ans = max(ans, cnt);
//
//	for (int i = 0; i < 4; i++) {
//		int A = a + gogoA[i];
//		int B = b + gogoB[i];
//
//		if (A >= 0 && A < R && B >= 0 && B < C) {
//			if (!visited[board[A][B] - 'A']) {
//				visited[board[A][B] - 'A'] = true;
//				dfs(A, B, cnt + 1);
//				visited[board[A][B] - 'A'] = false;
//			}
//		}
//	}
//}
//
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//	cin >> R >> C;
//	for (int i = 0; i < R; i++)
//		for (int j = 0; j < C; j++)
//			cin >> board[i][j];
//
//	visited[board[0][0] - 'A'] = true;
//	dfs(0, 0, 1);
//	cout << ans;
//}

//#include<iostream>
//#include<queue>
//#include <algorithm>
//#define endl "\n"
//#define MAX 20
//using namespace std;
//
//int R, C, Answer;
//char board[MAX][MAX];
//bool Visit[26];
//
//int gogoA[4] = { 0, 0, 1, -1 };
//int gogoB[4] = { 1, -1, 0, 0 };
//
//
//void DFS(int a, int b, int Cnt)
//{
//	Answer = max(Answer, Cnt);
//
//	for (int i = 0; i < 4; i++)
//	{
//		int A = a + gogoA[i];
//		int B = b + gogoB[i];
//
//		if (A >= 0 && B >= 0 && A < R && B < C)
//		{
//			if (Visit[board[A][B] - 'A'] == false)
//			{
//				Visit[board[A][B] - 'A'] = true;
//				DFS(A, B, Cnt + 1);
//				Visit[board[A][B] - 'A'] = false;
//			}
//		}
//	}
//}
//
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//
//	cin >> R >> C;
//	for (int i = 0; i < R; i++)
//	{
//		for (int j = 0; j < C; j++)
//		{
//			cin >> board[i][j];
//		}
//	}
//
//	Visit[board[0][0] - 'A'] = true;
//	DFS(0, 0, 1);
//
//	cout << Answer << endl;
//}


//#include <iostream>
//#include <vector>
//using namespace std;
//int ans = 1;
//int R, C;
//char board[20][20];
//int gogoA[4] = { 0,1,0,-1 };
//int gogoB[4] = { 1,0,-1,0 };
//
//
//bool check(vector<char>& v, int a, int b) {
//	for (auto it : v) {
//		if (it == board[a][b])
//			return false;
//	}
//	return true;
//}
//
//void alpha(vector<char>& v, int a, int b, int cnt) {
//	int A, B;
//	for (int i = 0; i < 4; i++) {
//		A = a + gogoA[i];
//		B = b + gogoB[i];
//		if (A >= 0 && A < R && B >= 0 && B < C) {
//			if (check(v, A, B)) {
//				v.push_back(board[A][B]);
//				alpha(v, A, B, cnt + 1);
//				v.pop_back();
//			}
//		}
//	}
//	if (ans < cnt)
//		ans = cnt;
//	return;
//}
//
//int main() {
//	ios_base::sync_with_stdio(0);
//	cin.tie(0);
//	cin >> R >> C;
//	for (int i = 0; i < R; i++)
//		for (int j = 0; j < C; j++)
//			cin >> board[i][j];
//
//	vector<char> v;
//	v.push_back(board[0][0]);
//	alpha(v, 0, 0, 1);
//	cout << ans << "\n";
//}




//#include <iostream>
//#include <string>
//#include <algorithm>
//using namespace std;
//int R, C;
//const int MAX = 20;
//string board[MAX];
//int gogoA[4] = { 0,1,0,-1 };
//int gogoB[4] = { 1,0,-1,0 };
//string Salpha[MAX][MAX];
//int visited[MAX][MAX];
//
//void dfs(int a, int b) {
//	if (visited[a][b])
//		return;
//	visited[a][b] = 1;
//	Salpha[a][b] += board[a][b];
//	for (int i = 0; i < 4; i++) {
//		int A = a + gogoA[i];
//		int B = b + gogoB[i];
//		int n = 0;
//		if (A >= 0 && A < R && B >= 0 && B < C && !visited[A][B]) {
//			for (int j = 0; j < Salpha[a][b].size(); j++) {
//				if (board[A][B] == Salpha[a][b][j]) {
//					n++;
//				}
//			}
//			if (n == 0) {
//				Salpha[A][B] = Salpha[a][b];
//				dfs(A, B);
//			}
//		}
//	}
//}
//
//int main() {
//	cin >> R >> C;
//
//	for (int i = 0; i < R; i++)
//		cin >> board[i];
//
//	dfs(0, 0);
//	int zz = 0;
//	for (int i = 0; i < R; i++) {
//		for (int j = 0; j < C; j++) {
//			int t = Salpha[i][j].size();
//			zz = max(zz, t);
//		}
//	}
//	cout << zz << "\n";
//}



//#include <iostream>
//#include <cstring>
//#include <algorithm>
//#include <queue>
//using namespace std;
//int R, C;
//const int MAX = 20;
//string board[MAX];
//
//int gogoA[4] = { 0,1,0,-1 };
//int gogoB[4] = { 1,0,-1,0 };
//int visited[MAX][MAX];
//string Svisited[MAX][MAX];
//
//void mal(int a, int b) {
//	queue<pair<int, int>> q;
//	q.push(make_pair(a, b));
//	visited[a][b] = 1;
//	Svisited[a][b] = board[a][b];
//
//	while (!q.empty()) {
//		pair<int, int> t = q.front();
//		q.pop();
//
//		for (int i = 0; i < 4; i++) {
//			int A = t.first + gogoA[i];
//			int B = t.second + gogoB[i];
//			int n = 0;
//			if (A >= 0 && A < R && B >= 0 && B < C && !visited[A][B]) {
//				for (int j = 0; j < Svisited[t.first][t.second].size(); j++) {
//					if (board[A][B] == Svisited[t.first][t.second][j]) {
//						n++;
//					}
//				}
//				if (n == 0) {
//					q.push(make_pair(A, B));
//					Svisited[A][B] = Svisited[t.first][t.second] + board[A][B];
//					visited[A][B] = visited[t.first][t.second] + 1;
//				}
//			}
//		}
//	}
//}
//
//int main() {
//	cin >> R >> C;
//	for (int i = 0; i < R; i++)
//		cin >> board[i];
//
//	memset(visited, 0, sizeof(visited));
//	mal(0, 0);
//
//	int c = 0;
//	for (int i = 0; i < R; i++) {
//		for (int j = 0; j < C; j++) {
//			c = max(c, visited[i][j]);
//		}
//	}
//	cout << c << "\n";
//}