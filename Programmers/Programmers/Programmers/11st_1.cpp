#include <iostream>
#include <string>

using namespace std;

int solution(string &S) {
	int ans = 0;
	int aa = 0;
	for (int i = 0; i < S.size(); i++) {
		if (S[i] == 'a') {
			aa++;
			if (aa >= 3)
				return -1;
		}
		else {
			if (aa == 0)
				ans += 2;
			else if (aa == 1)
				ans += 1;
			aa = 0;
		}
	}
	if (aa == 0)
		ans += 2;
	else if (aa == 1)
		ans += 1;
	return ans;
}

//int main() {
//	//string s = "aabab";
//	//string s = "dog";
//	//string s = "aa";
//	string s = "baaaa";
//	cout << solution(s);
//}