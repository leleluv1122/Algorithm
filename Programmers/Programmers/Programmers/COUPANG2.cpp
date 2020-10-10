#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

int solution(int n, vector<string> customers) {
	int answer = 0;

	return answer;
}

int main() {
	string srr[8] = { "10/01 23:20:25 30", "10/01 23:25:50 26", "10/01 23:31:00 05", "10/01 23:33:17 24", "10/01 23:50:25 13", "10/01 23:55:45 20", "10/01 23:59:39 03", "10/02 00:10:00 10" };

	vector<string> c;
	for (int i = 0; i < 8; i++)
		c.push_back(srr[i]);

	int n = solution(3, c);
}