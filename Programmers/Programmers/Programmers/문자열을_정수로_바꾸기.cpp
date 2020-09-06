#include <string>
#include <vector>

using namespace std;

int solution(string s) {
	int answer = 0;
	bool minus = false;
	if (s[0] == '-')
		minus = true;
	for (int i = 0; i < s.size(); i++) {
		if (i == 0) {
			if (s[i] >= '0' && s[i] <= '9') {
				int d = s[i] - '0';
				answer += d;
			}
			continue;
		}
		
		int d = s[i] - '0';
		answer = answer * 10 + d;
	}

	if (minus)
		answer *= -1;
	return answer;
}