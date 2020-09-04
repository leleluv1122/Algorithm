#include <string>
#include <vector>

using namespace std;

bool solution(int x) {
	bool answer = true;
	int sum = 0;
	int a = x;
	while (a) {
		sum += a % 10;
		a /= 10;
	}

	if (x % sum)
		answer = false;

	return answer;
}