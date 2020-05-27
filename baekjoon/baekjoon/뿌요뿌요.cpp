//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <stack>
//using namespace std;
//#define ROW 12
//#define COL 6
//#define SIDE 4
//#pragma warning(disable:4996)
//char map[ROW][COL] = { 0 };
//int side_arr[SIDE][2] = { { -1,0 },{ 1,0 },{ 0,-1 },{ 0,1 } };
//
//// 뿌요뿌요를 터트린다. 하나라도 터트리면 1 리턴 아니면 0리턴
//int is_pop_puyo() {
//	int is_pop = 0;
//	int visited[ROW][COL] = { 0 };
//	vector<pair<int, int>> pop_puyo_vec;
//	for (int row = 0; row < ROW; row++) {
//		for (int col = 0; col < COL; col++) {
//			if (visited[row][col]) continue;
//			else visited[row][col] = 1;
//
//			if (map[row][col] == '.') continue;
//
//			// 벡터은 현재 row, col 과 동일한 녀석들을 넣고  
//			// 스택은 dfs 를 하기 위한 용도
//			vector<pair<int, int>> dfs_vec;
//			stack<pair<int, int>> dfs_stack;
//			dfs_stack.push({ row , col });
//			dfs_vec.push_back({ row , col });
//			while (!dfs_stack.empty()) {
//				pair<int, int> this_node = dfs_stack.top(); dfs_stack.pop();
//				// 사이드 4개 검사 
//				for (int side_idx = 0; side_idx < SIDE; side_idx++) {
//					int new_row = this_node.first + side_arr[side_idx][0];
//					int new_col = this_node.second + side_arr[side_idx][1];
//
//					if (new_row < 0 || new_row >= ROW) continue;
//					if (new_col < 0 || new_col >= COL) continue;
//					if (visited[new_row][new_col]) continue;
//
//					if (map[new_row][new_col] == map[row][col]) {
//						dfs_vec.push_back({ new_row , new_col });
//						dfs_stack.push({ new_row , new_col });
//						visited[new_row][new_col] = 1;
//					}
//				}
//			}
//
//			if (dfs_vec.size() >= 4) {
//				for (auto dfs_each : dfs_vec)
//					pop_puyo_vec.push_back(dfs_each);
//				is_pop = 1;
//			}
//		}
//	}
//
//	for (auto pop_puyo : pop_puyo_vec)
//		map[pop_puyo.first][pop_puyo.second] = '.';
//
//	return is_pop;
//}
//
//// 터트리고 나서 푸요푸요를 떨어뜨린다.
//void puyo_drop() {
//	for (int col = 0; col < COL; col++) {
//		int row_top = ROW - 1;
//		for (int row = ROW - 1; row >= 0; row--) {
//			if (map[row][col] == '.') continue;
//			if (row_top != row) {
//				map[row_top][col] = map[row][col];
//				map[row][col] = '.';
//			}
//			row_top--;
//		}
//	}
//}
//int main() {
//	for (int row = 0; row < ROW; row++)
//		for (int col = 0; col < COL; col++)
//			cin >> map[row][col];
//	int answer = 0;
//	while (is_pop_puyo()) {
//		puyo_drop(); answer++;
//	}
//	printf("%d", answer);
//}




//#include <iostream>
//#include <vector>
//#include <cstring>
//#include <queue>
//#include <string>
//using namespace std;
//string puyo[12];
//vector<pair<int, int>> v;
//vector<pair<int, int>> h;
//int d[6];
//bool visited[12][6];
//int gogoA[4] = { 0,1,0,-1 };
//int gogoB[4] = { 1,0,-1,0 };
//int same = 0;
//int cnt = 0;
//
//void puu(pair<int, int> p) {
//	if (visited[p.first][p.second])
//		return;
//	visited[p.first][p.second] = true;
//	same++;
//
//	for (int i = 0; i < 4; i++) {
//		int A = p.first + gogoA[i];
//		int B = p.second + gogoB[i];
//
//		if (A >= 0 && A < 12 && B >= 0 && B < 6) {
//			if (!visited[A][B] && puyo[A][B] == puyo[p.first][p.second]) {
//				puu(make_pair(A, B));
//				h.push_back(make_pair(A, B));
//			}
//		}
//	}
//}
//
//void puuyo() {
//	queue<pair<int, int>> q;
//	for (int i = 0; i < v.size(); i++)
//		q.push(v[i]);
//
//	while (!q.empty()) {
//		pair<int, int> t = q.front();
//		q.pop();
//		same = 0;
//		memset(visited, false, sizeof(visited));
//		h.clear();
//		puu(t);
//		if (same >= 4) {
//			int qsize = q.size();
//			for (int i = 0; i < qsize; i++)
//				q.pop();
//			memset(d, 0, sizeof(d));
//			for (int i = 0; i < h.size(); i++) {
//				if (puyo[h[i].first - 1][h[i].second]  && h[i].first - 1 > 0) {
///////////////////////////////////////////
//				}
//				/*puyo[h[i].first][h[i].second] = '.';
//				d[h[i].second]++;*/
//			}
//
//			/*for (int i = 0; i < 6; i++) {
//				if (d[i] > 0) {
//					for (int j = 11; j > 11 - d[i]; j--) {
//						puyo[j][i] = puyo[j - d[i]][i];
//						puyo[j - d[i]][i] = '.';
//					}
//				}
//			}*/
//
//			for (int i = 0; i < 12; i++) {
//				for (int j = 0; j < 6; j++)
//					if (puyo[i][j] != '.')
//						q.push(make_pair(i, j));
//			}
//			cnt++;
//		}
//	}
//}
//
//void Input() {
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//	for (int i = 0; i < 12; i++) {
//		cin >> puyo[i];
//		for (int j = 0; j < 6; j++)
//			if (puyo[i][j] != '.')
//				v.push_back(make_pair(i, j));
//	}
//}
//
//int main() {
//	Input();
//	memset(visited, false, sizeof(visited));
//	
//	puuyo();
//	cout << cnt << "\n";
//}


//#include <iostream>
//#include <vector>
//#include <cstring>
//using namespace std;
//string puyo[12];
//vector<pair<int, int>> v;
//vector<pair<int, int>> h;
//bool visited[12][6];
//int gogoA[4] = { 0,1,0,-1 };
//int gogoB[4] = { 1,0,-1,0 };
//int same = 0;
//
//void puu(pair<int, int> p) {
//	if (visited[p.first][p.second])
//		return;
//	visited[p.first][p.second] = true;
//	same++;
//
//	for (int i = 0; i < 4; i++) {
//		int A = p.first + gogoA[i];
//		int B = p.second + gogoB[i];
//
//		if (A >= 0 && A < 12 && B >= 0 && B < 6) {
//			if (!visited[A][B] && puyo[A][B] == puyo[p.first][p.second]) {
//				puu(make_pair(A, B));
//			}
//		}
//	}
//}
//
//int main() {
//	for (int i = 0; i < 12; i++) {
//		cin >> puyo[i];
//		for (int j = 0; j < 6; j++) 
//			if (puyo[i][j] != '.')
//				v.push_back(make_pair(i, j));
//	}
//	memset(visited, false, sizeof(visited));
//	int cnt = 0;
//	for (int i = 0; i < v.size(); i++) {
//		memset(visited, false, sizeof(visited));
//		same = 0;
//		if(!visited[v[i].first][v[i].second])
//			puu(v[i]);
//		
//		if (same >= 4) {
//			h.clear();
//			for(int k=0;k<12;k++)
//				for (int j = 0; j < 6; j++) {
//					if (visited[k][j] == 1) {
//						puyo[k][j] = '.';
//						h.push_back(make_pair(j, h[j].second + 1));
//					}
//				}
//
//			for (int j = 0; j < 6; j++) {
//				if (h[j].second && puyo[j][11 - h[j].second] != '.') {
//					for (int k = 11; k > 11 - h[j].second; k--) {
//						puyo[k][j] = puyo[k - h[j].second][j];
//					}
//				}
//			}
//			cnt++;
//			v.clear();
//			for (int k = 0; k < 12; k++) {
//				for (int j = 0; j < 6; j++)
//					if (puyo[k][j] != '.')
//						v.push_back(make_pair(k, j));
//			}
//		}
//	}
//	cout << cnt << "\n";
//}