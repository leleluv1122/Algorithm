#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main() {
	vector<vector<int>> v;
	v[0].push_back(1);
	v[0].push_back(4);
	v[1].push_back(3);
	v[1].push_back(4);
	v[2].push_back(3);
	v[2].push_back(10);

	map<int, int> x;
	map<int, int> y;
	for (int i = 0; i < 3; i++) {
		if (x.count(v[i][0]) == 0)
			x.insert(v[i][0], 1);
		else
			x[v[i][0]]++;

		if (y.count(v[i][1] == 0))
			y.insert(v[i][1], 1);
		else
			y[v[i][1]]++;
	}
	vector<int> ans;

	for (auto& a : x) {
		if (a.second != 2) {
			ans.push_back(a.first);
			break;
		}
	}

	for (auto& a : y) {
		if (a.second != 2) {
			ans.push_back(a.first);
			break;
		}
	}
}