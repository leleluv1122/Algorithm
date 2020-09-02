#include <string>
#include <vector>
#include <iostream>

using namespace std;

long long solution(int a, int b) {
	if (a == b)
		return a;

	if (a > b) {
		int t = a;
		a = b;
		b = t;
	}

	long long answer = 0;
	int t = b - a + 1;
	int size = t / 2;
	int d = a + b;

	if (t % 2 == 0) {
		answer = (long long)d * size;
	}
	else {
		answer = (long long)d * size + d / 2;
	}

	return answer;
}

int main() {
	long long answer = solution(5, 3);
	cout << answer;
}