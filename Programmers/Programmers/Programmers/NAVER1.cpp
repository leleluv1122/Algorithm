#include <string>
#include <vector>
#include <math.h>
#include <iostream>

using namespace std;

string solution(int n, vector<int> p, vector<int> c) {
	int money = 100;
	int sum = 0;
	int gong = 0;
	int day = 0;

	for (int i = 0; i < n; i++) {
		if (gong + p[i] >= c[i]) {
			sum += c[i] * money;
			gong = (gong + p[i]) - c[i];
			money = 100;
		}
		else {
			gong += p[i];
			if (money == 25) {
				day = i + 1;
				break;
			}
			money /= 2;
		}
	}
	double ans;
	if (day) {
		ans = sum / day;
	}
	else {
		ans = sum / n;
	}
	ans = round(ans * 100) / 100;
	string answer = to_string(ans);
	int d = 0;
	bool b = false;
	for (int i = 0; i < answer.size(); i++) {
		if (answer[i] == '.')
			b = true;
		if (b) {
			if (d > 2) {
				answer = answer.substr(0, i);
				break;
			}
			d++;
		}
	}
	return answer;
}

//int main() {
//	vector<int> p;
//	p.push_back(6);
//	p.push_back(2);
//	p.push_back(1);
//	p.push_back(0);
//	p.push_back(2);
//	p.push_back(4);
//	p.push_back(3);
//	vector<int> c;
//	c.push_back(3);
//	c.push_back(6);
//	c.push_back(6);
//	c.push_back(2);
//	c.push_back(3);
//	c.push_back(7);
//	c.push_back(6);
//
//	cout << solution(7, p, c);
//}