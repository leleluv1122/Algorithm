#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;
vector<vector<int>> v;
bool visited[300000];

int solution(vector<int> sales, vector<vector<int>> links) {
	int answer = 0;
	vector<int> sa;
	v.resize(sales.size() + 1);
	for (int i = 0; i < links.size(); i++) {
		v[links[i][0]].push_back(links[i][1]);
		sa.push_back(links[i][0]);
	}

	for (int i = 0; i < sa.size(); i++) {
		int t = sa[i];
		int mini = 987654321;
		int d;
	
		mini = min(mini, sales[t - 1]);
		if (v[t].size() == 0)
			continue;
		for (int j = 0; j < v[t].size(); j++) {
			if (mini > v[t][j] - 1) {
				mini = sales[v[t][j] - 1];
				d = v[t][j];
			}
		}
		if (!visited[d]) {
			visited[d] = true;
			answer += mini;
		}
	}
	return answer;
}

//int main() {
//	vector<int> sales;
//	sales.push_back(14);
//	sales.push_back(17);
//	sales.push_back(15);
//	sales.push_back(18);
//	sales.push_back(19);
//	sales.push_back(14);
//	sales.push_back(13);
//	sales.push_back(16);
//	sales.push_back(28);
//	sales.push_back(17);
//
//	vector<vector<int>> links;
//	links.resize(9);
//	links[0].push_back(10);
//	links[0].push_back(8);
//	links[1].push_back(1);
//	links[1].push_back(9);
//	links[2].push_back(9);
//	links[2].push_back(7);
//	links[3].push_back(5);
//	links[3].push_back(4);
//	links[4].push_back(1);
//	links[4].push_back(5);
//	links[5].push_back(5);
//	links[5].push_back(10);
//	links[6].push_back(10);
//	links[6].push_back(6);
//	links[7].push_back(1);
//	links[7].push_back(3);
//	links[8].push_back(10);
//	links[8].push_back(2);
//
//	cout << solution(sales, links);
//}