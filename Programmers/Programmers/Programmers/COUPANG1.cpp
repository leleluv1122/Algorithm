#include <string>
#include <vector>
#include <iostream>

using namespace std;

int k, gop = -1;

void ginbup(int i, int N) {
	int g = 1;
	
	while (N > 0) {
		g *= (N % i);
		N /= i;
	}

	if (g >= gop) {
		k = i;
		gop = g;
	}
}

vector<int> solution(int N) {
	vector<int> answer;
	for (int i = 2; i < 10; i++)
		ginbup(i, N);

	answer.push_back(k);
	answer.push_back(gop);
	return answer;
}

int main() {
	vector<int> answer = solution(10);
	cout << answer[0] << " " << answer[1];
}