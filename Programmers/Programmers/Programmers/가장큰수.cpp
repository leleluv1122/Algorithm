#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

bool cmp(string a, string b) {
	return a + b > b + a;
}

string solution(vector<int> numbers) {
	string answer = "";
	vector<string> t;
	for (auto i : numbers)
		t.push_back(to_string(i));
	sort(t.begin(), t.end(), cmp);
	if (t[0] == "0")
		return "0";
	for (auto i : t)
		answer += i;
	return answer;
}

int main() {
	vector<int> v;
	v.push_back(6);
	v.push_back(10);
	v.push_back(2);

	cout << solution(v);
}