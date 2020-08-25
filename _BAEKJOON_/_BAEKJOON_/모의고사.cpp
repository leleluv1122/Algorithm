#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> answers) {
	vector<int> answer;
	int a = 0, b = 0, c = 0;
	int MAX = 0;
	int brr[8] = { 0,1,0,3,0,4,0,5 };
	int crr[10] = { 3,3,1,1,2,2,4,4,5,5 };
	
	for (int i = 0; i < answers.size(); i++) {
		// 첫번째학생
		int d = (i + 1) % 5;
		if (d == 0) d = 5;
		if (answers[i] == d)
			a++;

		// 두번째학생
		if (i % 2 == 0 && answers[i] == 2)
			b++;
		else if (i % 2 == 1) {
			if (brr[i % 8] == answers[i])
				b++;
		}

		// 세번째학생
		if (crr[i % 10] == answers[i])
			c++;

		MAX = max(a, max(b, c));
	}

	if (a == MAX)
		answer.push_back(1);
	if (b == MAX)
		answer.push_back(2);
	if (c == MAX)
		answer.push_back(3);

	return answer;
}