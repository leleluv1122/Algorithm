#include <iostream>
#include <string>
using namespace std;
int main() {
	string s1, s2;
	cin >> s1 >> s2;

	int cnt1 = 0, cnt2 = 0;
	for (int i = 0; i < s1.size(); i++)
		if (s1[i] == 'a')
			cnt1++;

	for (int j = 0; j < s2.size(); j++)
		if (s2[j] == 'a')
			cnt2++;

	cnt1 >= cnt2 ? cout << "go" : cout << "no";
}