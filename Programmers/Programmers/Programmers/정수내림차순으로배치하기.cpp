#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

long long solution(long long n) {
	string s;
	while (n) {
		int d = n % 10;
		n /= 10;
		char c = d + '0';
		s += c;
	}
	sort(s.begin(), s.end());
	reverse(s.begin(), s.end());

	long long answer = 0;
	for (int i = 0; i < s.size(); i++) {
		int d = s[i] - '0';
		answer = answer * 10 + d;
	}
	return answer;
}

int main() {
	cout << solution(118372);
}