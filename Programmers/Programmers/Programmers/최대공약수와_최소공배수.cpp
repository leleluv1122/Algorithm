#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int gongyak(int n, int m) {
	int Min = min(n, m);
	int ans = 0;
	for (int i = 1; i <= Min; i++) {
		if (n % i == 0 && m % i == 0)
			ans = i;
	}
	return ans;
}

int gongbae(int yak, int n, int m) {
	int ans = n * m / yak;
	return ans;
}

vector<int> solution(int n, int m) {
	vector<int> answer;
	
	int yak = gongyak(n, m);
	answer.push_back(yak);
	answer.push_back(gongbae(yak, n, m));
	return answer;
}