#include <iostream>
#include <math.h>
#include <map>
using namespace std;

int main() {
	map<string, int> m;
	m.insert({ "black", 0 });
	m.insert({ "brown", 1 });
	m.insert({ "red", 2 });
	m.insert({ "orange", 3 });
	m.insert({ "yellow", 4 });
	m.insert({ "green", 5 });
	m.insert({ "blue", 6 });
	m.insert({ "violet", 7 });
	m.insert({ "grey", 8 });
	m.insert({ "white", 9 });

	string s1, s2, s3;
	cin >> s1 >> s2 >> s3;

	long long result = (m[s1] * 10 + m[s2]) * pow(10, m[s3]);
	cout << result;
}