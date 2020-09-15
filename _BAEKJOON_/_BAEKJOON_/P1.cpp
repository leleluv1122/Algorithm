#include <string>
#include <vector>
#include <map>

using namespace std;

int solution(vector<vector<int>> boxes) {
	vector<int> v; // ªÛ«∞
	map<int, int> m;
	for (int i = 0; i < boxes.size(); i++) {
		for (int j = 0; j < 2; j++) {
			if (m.count(boxes[i][j]) == 0) {
				m.insert({ boxes[i][j], 1 });
				v.push_back(boxes[i][j]);
			}
			else
				m[boxes[i][j]]++;
		}
	}
	int boxsize = boxes.size();

	int answer = 0;
	int sum = 0;
	for (int i = 0; i < v.size(); i++) {
		if (m[v[i]]) {
			sum += m[v[i]] / 2;
		}
	}
	if (sum < boxsize) {
		answer = boxsize - sum;
	}
	return answer;
}