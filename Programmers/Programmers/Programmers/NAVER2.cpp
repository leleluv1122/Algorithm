#include <string>
#include <vector>
#include <iostream>

using namespace std;
vector<pair<int, int>> v[100];
bool visited[100][100];
bool link[100];

vector<int> solution(int n, vector<vector<int>> edges) {
	for (int i = 0; i < edges.size(); i++) {
		v[edges[i][0]].push_back(make_pair(edges[i][1], i));
		v[edges[i][1]].push_back(make_pair(edges[i][0], i));
	}
	vector<int> answer;
	for (int i = 0; i < n; i++) {
		int d = v[i].size();
		int rd = 0;
		for (int j = 0; j < d; j++) {
			if (!visited[v[i][j].first][i])
				rd++;
		}
		if (d == 1) {
			visited[i][v[i][0].first] = true;
			visited[v[i][0].first][i] = true;
			link[v[i][0].second] = true;
		}
		else {
			if (rd != d) {
				for (int j = 0; j < d; j++) {
					if (!visited[i][v[i][j].first] && !link[v[i][j].second]) {
						link[v[i][j].second] = true;
						answer.push_back(v[i][j].second);
						visited[i][v[i][j].first] = true;
						visited[v[i][j].first][i] = true;
						break;
					}
				}
			}
		}
	}
	return answer;
}

//int main() {
//	vector<vector<int>> v;
//	v.resize(8);
//
//	v[0].push_back(0);
//	v[0].push_back(2);
//
//	v[1].push_back(2);
//	v[1].push_back(1);
//
//	v[2].push_back(2);
//	v[2].push_back(4);
//
//	v[3].push_back(3);
//	v[3].push_back(5);
//
//	v[4].push_back(5);
//	v[4].push_back(4);
//
//	v[5].push_back(5);
//	v[5].push_back(7);
//
//	v[6].push_back(7);
//	v[6].push_back(6);
//
//	v[7].push_back(6);
//	v[7].push_back(8);
//
//	vector<int> ans = solution(9, v);
//	for (int i = 0; i < ans.size(); i++)
//		cout << ans[i] << " ";
//}