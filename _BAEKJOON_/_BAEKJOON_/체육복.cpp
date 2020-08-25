#include <string>
#include <vector>
#include <cstring>
#include <iostream>

using namespace std;

int solution(int n, vector<int> lost, vector<int> reserve) {
	bool visited[31];
	bool dd[31];
	memset(dd, false, sizeof(dd));
	memset(visited, false, sizeof(visited));
	int answer = n - lost.size();
	for (int i = 0; i < reserve.size(); i++)
		visited[reserve[i]] = true;

	for (int i = 0; i < lost.size(); i++) {
		if (visited[lost[i]]) {
			answer++;
			visited[lost[i]] = false;
			dd[lost[i]] = true;
		}
	}

	for (int i = 0; i < lost.size(); i++) {
		if (dd[lost[i]])
			continue;
		if (visited[lost[i]]) {
			visited[lost[i]] = false;
			answer++;
			continue;
		}
		if (lost[i] - 1 > 0 && visited[lost[i] - 1]) {
			visited[lost[i] - 1] = false;
			answer++;
			continue;
		}
		if (lost[i] + 1 <= n && visited[lost[i] + 1]) {
			visited[lost[i] + 1] = false;
			answer++;
		}
	}

	return answer;
}


int main() {
	// TEST CASE 12
	vector<int> lost;
	lost.push_back(2);
	lost.push_back(3);
	vector<int> reserve;
	reserve.push_back(3);
	reserve.push_back(4);
	cout << solution(5, lost, reserve) << "\n";
}