#include <vector>
#include <math.h>
#include <iostream>
using namespace std;
void sosu(int n, vector<bool>& ss) {
	for (int i = 2; i <= sqrt(n); i++) {
		if (ss[i]) {
			for (int j = i + i; j <= n; j += i)
				ss[j] = false;
		}
	}
}

int solution(int n) {
	vector<bool> ss(n + 1, true);
	sosu(n, ss);
	int answer = 0;
	for (int i = 2; i <= n; i++) {
		if (ss[i])
			answer++;
	}
	return answer;
}

int main() {
	cout << solution(10);
}