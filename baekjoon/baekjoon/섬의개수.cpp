//#include <iostream>
//#include <vector>
//#include <cstring>
//using namespace std;
//const int MAX = 50 + 1;
//
//int w, h;
//int r[MAX][MAX];
//int visited[MAX][MAX];
//int gogoA[8] = { 0,1,0,-1,-1,1,-1,1 };
//int gogoB[8] = { 1,0,-1,0,-1,-1,1,1 };
//
//void sumnum(int a, int b) {
//	if (visited[a][b])
//		return;
//	visited[a][b] = 1;
//
//	for (int i = 0; i < 8; i++) {
//		int A = a + gogoA[i];
//		int B = b + gogoB[i];
//		if (A >= 0 && A < h && B >= 0 && B < w) {
//			if (!visited[A][B] && r[A][B]) {
//				sumnum(A, B);
//			}
//		}
//	}
//}
//void solution(vector<pair<int, int>>& s)
//{
//	while (1) {
//		memset(r, 0, sizeof(r));
//		memset(visited, 0, sizeof(visited));
//		s.clear();
//		cin >> w >> h;
//		if (w == 0 && h == 0)
//			break;
//		for (int i = 0; i < h; i++) {
//			for (int j = 0; j < w; j++) {
//				cin >> r[i][j];
//				if (r[i][j] == 1)
//					s.push_back(make_pair(i, j));
//			}
//		}
//		int n = 0;
//		for (int i = 0; i < s.size(); i++) {
//			if (!visited[s[i].first][s[i].second]) {
//				sumnum(s[i].first, s[i].second);
//				n++;
//			}
//		}
//		cout << n << endl;
//	}
//}
//int main() {
//	vector<pair<int, int>> s;
//	solution(s);
//}

//#include <iostream>
//#include <vector>
//#include <cstring>
//using namespace std;
//const int MAX = 50 + 1;
//
//int w, h;
//int r[MAX][MAX];
//int visited[MAX][MAX];
//int gogoA[8] = { 0,1,0,-1,-1,1,-1,1 };
//int gogoB[8] = { 1,0,-1,0,-1,-1,1,1 };
//
//
//void sumnum(int a, int b) {
//	if (visited[a][b])
//		return;
//	visited[a][b] = 1;
//
//	for (int i = 0; i < 8; i++) {
//		int A = a + gogoA[i];
//		int B = b + gogoB[i];
//		if (A >= 0 && A < h && B >= 0 && B < w) {
//			if (!visited[A][B] && r[A][B]) {
//				sumnum(A, B);
//			}
//		}
//	}
//}
//
//int main(vector<pair<int, int>> s) {
//	while (1) {
//		memset(r, 0, sizeof(r));
//		memset(visited, 0, sizeof(visited));
//		s.clear();
//		cin >> w >> h;
//		if (w == 0 && h == 0)
//			break;
//		for (int i = 0; i < h; i++) {
//			for (int j = 0; j < w; j++) {
//				cin >> r[i][j];
//				if (r[i][j] == 1) 
//					s.push_back(make_pair(i, j));
//			}
//		}
//		int n = 0;
//		for (int i = 0; i < s.size(); i++) {
//			if (!visited[s[i].first][s[i].second]) {
//				sumnum(s[i].first, s[i].second);
//				n++;
//			}
//		}
//		cout << n << endl;
//	}
//}

//#include <iostream>
//#include <vector>
//#include <cstring>
//using namespace std;
//const int MAX = 50 + 1;
//
//int w, h;
//int r[MAX][MAX];
//int visited[MAX][MAX];
//vector<pair<int, int>> s;
//
//int gogoA[8] = { 0,1,0,-1,-1,1,-1,1 };
//int gogoB[8] = { 1,0,-1,0,-1,-1,1,1 };
//
//void sumnum(int a, int b) {
//	if (visited[a][b])
//		return;
//	visited[a][b] = 1;
//
//	for (int i = 0; i < 8; i++) {
//		int A = a + gogoA[i];
//		int B = b + gogoB[i];
//		if (A >= 0 && A < h && B >= 0 && B < w) {
//			if (!visited[A][B] && r[A][B]) {
//				sumnum(A, B);
//			}
//		}
//	}
//}
//
//int main() {
//	while (1) {
//		memset(r, 0, sizeof(r));
//		memset(visited, 0, sizeof(visited));
//		s.clear();
//		cin >> w >> h;
//		if (w == 0 && h == 0)
//			break;
//		for (int i = 0; i < h; i++) {
//			for (int j = 0; j < w; j++) {
//				cin >> r[i][j];
//				if (r[i][j] == 1) 
//					s.push_back(make_pair(i, j));
//			}
//		}
//		int n = 0;
//		for (int i = 0; i < s.size(); i++) {
//			if (!visited[s[i].first][s[i].second]) {
//				sumnum(s[i].first, s[i].second);
//				n++;
//			}
//		}
//		cout << n << endl;
//	}
//	
//}