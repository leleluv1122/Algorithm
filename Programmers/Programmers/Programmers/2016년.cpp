#include <string>
#include <vector>
#include <iostream>

using namespace std;

string arr[7] = { "SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT" };
int month[13] = { 0,30,29,31,30,31,30,31,31,30,31,30,31 };

string solution(int a, int b) {
	int day = 5;
	for (int i = 1; i < a; i++)
		day = (day + month[i]) % 7;
	day = (day + b) % 7;
	if (a == 1) {
		day -= 1;
		if (day < 0)
			day = 6;
	}
	return arr[day];
}

int main() {
	cout << solution(2, 1);
}