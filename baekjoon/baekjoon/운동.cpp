//#include <iostream>
//#include <algorithm>
//#include <vector>
//using namespace std;
//const int INF = 987654321;
//int main() {
//	int N;
//	cin >> N;
//	int member[51][51];
//	for (int i = 1; i <= N; i++)
//	{
//		for (int j = 1; j <= N; j++)
//			member[i][j] = INF;
//		member[i][i] = 0;
//	}
//	int u, v;
//	while (cin >> u >> v, u != -1) {
//		member[u][v] = 1;
//		member[v][u] = 1;
//	}
//
//	for (int k = 1; k <= N; k++)
//		for (int i = 1; i <= N; i++)
//			for (int j = 1; j <= N; j++)
//				member[i][j] = min(member[i][j], member[i][k] + member[k][j]);
//
//	int minScore = N;
//	vector<int> soccer;
//	for (int i = 1; i <= N; i++) {
//		int score = 0;
//		for (int j = 1; j <= N; j++)
//			score = max(score, member[i][j]);
//
//		if (minScore > score) {
//			minScore = score;
//			soccer.clear();
//		}
//		if (minScore == score)
//			soccer.push_back(i);
//	}
//	cout << minScore << " " << soccer.size() << "\n";
//	for (int i = 0; i < soccer.size(); i++)
//		cout << soccer[i] << " ";
//	cout << "\n";
//}