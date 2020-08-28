#include <iostream>
#include <string>
using namespace std;
int main() {
	string s;
	cin >> s;
	int arr[26] = { 2,2,2,3,3,3,4,4,4,5,5,5,6,6,6,7,7,7,7,8,8,8,9,9,9,9 };
	int sum = s.size();
	for (int i = 0; i < s.size(); i++) {
		int d = s[i] - 'A';
		sum += arr[d];
	}
	cout << sum;
}