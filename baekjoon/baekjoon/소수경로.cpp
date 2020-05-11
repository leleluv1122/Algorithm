//#include <iostream>
//#include <queue>
//#include <string>
//#include <cstring>
//using namespace std;
//
//int T;
//const int MAX = 10000;
//int visited[MAX];
//
//bool sosu(int a) {
//	bool b = 0;
//	int i = 2;
//	int j = a - 1;
//	while (1) {
//		if (i <= j) {
//			if (a % i == 0) {
//				b = 0;
//				break;
//			}
//			else
//				i++;
//		}
//		else {
//			b = 1;
//			break;
//		}
//	}
//	return b;
//}
//
//int passwd(int sosu1, int sosu2) {
//	queue<int> q;
//	q.push(sosu1);
//	visited[sosu1] = 1;
//
//	while (!q.empty()) {
//		string t = to_string(q.front());
//		q.pop();
//
//		if (stoi(t) == sosu2)
//			return visited[sosu2] - 1;
//
//		for (int i = 0; i < 4; i++) {
//			for (int j = 0; j < 10; j++) {
//				if (i == 0 && j == 0)
//					continue;
//				string s = t;
//				s[i] = j + '0';
//				int a = stoi(s);
//				if (sosu(a) && !visited[a]) {
//					q.push(a);
//					visited[a] = visited[stoi(t)] + 1;
//				}
//			}
//		}
//	}
//	return -1;
//}
//
//int main() {
//	cin >> T;
//	for (int t = 0; t < T; t++) {
//		int sosu1, sosu2;
//		cin >> sosu1 >> sosu2;
//		memset(visited, 0, sizeof(visited));
//
//		int result = passwd(sosu1, sosu2);
//		if (result == -1)
//			cout << "Impossible" << endl;
//		else
//			cout << result << endl;
//	}
//}