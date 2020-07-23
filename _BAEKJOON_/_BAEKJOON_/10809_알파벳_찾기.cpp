#include <iostream>
#include <cstring>

using namespace std;

string S;
int alpha[26];

int main() {
	cin >> S;

	memset(alpha, -1, sizeof(alpha));
	for (int i = 0; i < S.size(); i++) {
		int a = S[i] - 'a';
		if (alpha[a] == -1)
			alpha[a] = i;
	}

	for (int i = 0; i < 26; i++)
		cout << alpha[i] << " ";
	cout << "\n";
}