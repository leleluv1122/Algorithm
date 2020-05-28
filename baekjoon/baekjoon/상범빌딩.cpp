//#include <iostream>
//#include <cstring>
//#include <queue>
//using namespace std;
//char arr[30][30][30];
//int visited[30][30][30];
//int L, R, F;
//pair<pair<int, int>, int> s; // ���� ���� ����
//pair<pair<int, int>, int> es; // ���� ���� ����
//int gogoA[6] = { 0,0,0,0,1,-1 }; // ����
//int gogoB[6] = { 0,1,0,-1,0,0 }; // ����
//int gogoC[6] = { 1,0,-1,0,0,0 }; // ����
//
//int escape() {
//	queue<pair<pair<int, int>, int>> q;
//	q.push(s);
//	visited[s.first.first][s.first.second][s.second] = 1;
//	while (!q.empty()) {
//		pair<pair<int, int>, int> t = q.front();
//		q.pop();
//
//		if (t == es)
//			return visited[t.first.first][t.first.second][t.second]; // �ִܽð� return
//
//		for (int i = 0; i < 6; i++) {
//			int A = t.first.first + gogoA[i]; // ����
//			int B = t.first.second + gogoB[i]; // ����
//			int C = t.second + gogoC[i]; // ����
//
//			if (A >= 0 && A < L && B >= 0 && B < R && C >= 0 && C < F) {
//				if (!visited[A][B][C] && arr[A][B][C] != '#') {
//					q.push(make_pair(make_pair(A, B), C));
//					visited[A][B][C] = visited[t.first.first][t.first.second][t.second] + 1;
//				}
//			}
//		}
//	}
//	return -1; // q�� �� ���������� return���� ���ϸ� Ż������ ���ϹǷ�
//}
//
//int main() {
//	while (1) {
//		cin >> L >> R >> F;
//		if (L == 0 && R == 0 && F == 0)
//			break;
//		memset(visited, 0, sizeof(visited)); // ���̽����� �ʱ�ȭ
//
//		for (int i = 0; i < L; i++)
//			for (int j = 0; j < R; j++)
//				for (int k = 0; k < F; k++) {
//					cin >> arr[i][j][k];
//					if (arr[i][j][k] == 'S') // ����ġ
//						s = make_pair(make_pair(i, j), k);
//					if (arr[i][j][k] == 'E') // Ż����ġ
//						es = make_pair(make_pair(i, j), k);
//				}
//
//		int r = escape();
//		if (r == -1) // Ż����Ѱ�
//			printf("Trapped!\n");
//		else // Ż���� �ִܽð��ε� ������ġ�� +1����� ������ -1�� �Ѵ�
//			printf("Escaped in %d minute(s).\n", r - 1);
//	}
//}