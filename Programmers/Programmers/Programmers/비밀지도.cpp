#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

vector<string> solution(int n, vector<int> arr1, vector<int> arr2) {
	vector<string> srr1, srr2;
	srr1.resize(n);
	srr2.resize(n);
	for (int i = 0; i < n; i++) {
		int a = arr1[i];
		while (a) {
			int d = a % 2;
			char c = d + '0';
			srr1[i] += c;
			a /= 2;
		}
		while (srr1[i].size() != n)
			srr1[i] += '0';
		reverse(srr1[i].begin(), srr1[i].end());

		int b = arr2[i];
		while (b) {
			int d = b % 2;
			char c = d + '0';
			srr2[i] += c;
			b /= 2;
		}
		while (srr2[i].size() != n)
			srr2[i] += '0';
		reverse(srr2[i].begin(), srr2[i].end());
	}
	vector<string> answer;
	answer.resize(n);

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (srr1[i][j] == '1' || srr2[i][j] == '1')
				answer[i] += '#';
			else
				answer[i] += ' ';
		}
	}
	return answer;
}

int main() {
	vector<int> arr1, arr2;
	arr1.push_back(9);
	arr1.push_back(20);
	arr1.push_back(28);
	arr1.push_back(18);
	arr1.push_back(11);
	
	arr2.push_back(30);
	arr2.push_back(1);
	arr2.push_back(21);
	arr2.push_back(17);
	arr2.push_back(28);

	vector<string> a = solution(5, arr1, arr2);
	for (int i = 0; i < a.size(); i++) {
		for (int j = 0; j < a[i].size(); j++)
			cout << a[i][j];
		cout << "\n";
	}
}