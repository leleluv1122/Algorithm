#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

long long factor(int a) {
	if (a == 1)
		return 1;
	else
		return a * factor(a - 1);
}

vector<int> solution(int n, long long k) {
	vector<int> answer;
	vector<int> v;
	long long slice, now;

	for (int i = 1; i <= n; i++)
		v.push_back(i);

	while (1) {
		if (n == 0)
			break;

		slice = factor(n) / n;
		now = (k - 1) / slice;
		answer.push_back(v[now]);
		v.erase(v.begin() + now);
		n--;

		k %= slice;
		if (k == 0)
			k = slice;
	}
	return answer;
}

int main() {
	vector<int> v = solution(3, 5);
	for (int i = 0; i < v.size(); i++)
		cout << v[i] << " ";
}

//#include <string>
//#include <vector>
//#include <algorithm>
//#include <iostream>
//
//using namespace std;
//
//long long factor(int a) {
//	if (a == 1)
//		return 1;
//	else
//		return a * factor(a - 1);
//}
//
//vector<int> solution(int n, long long k) {
//	vector<int> answer;
//	vector<int> v;
//	long long slice, now;
//
//	for (int i = 1; i <= n; i++)
//		v.push_back(i);
//
//	while (1) {
//		if (n == 0)
//			break;
//
//		slice = factor(n) / n;
//		now = int((k - 1) / slice);
//		answer.push_back(v[now]);
//		v.erase(v.begin() + now);
//		n--;
//
//		k %= slice;
//		if (k == 0)
//			k = slice;
//	}
//	return answer;
//}
//
//int main() {
//	vector<int> v = solution(3, 5);
//	for (int i = 0; i < v.size(); i++)
//		cout << v[i] << " ";
//}


////// skill check 1번 효율성.. 0점..
//#include <string>
//#include <vector>
//#include <algorithm>
//#include <iostream>
//
//using namespace std;
//
//vector<int> solution(int n, long long k) {
//	vector<int> answer;
//	for (int i = 0; i < n; i++)
//		answer.push_back(i + 1);
//
//	long long idx = 1;
//	do {
//		if (idx == k)
//			break;
//		idx++;
//	} while (next_permutation(answer.begin(), answer.end()));
//
//	return answer;
//}
//
//int main() {
//	vector<int> v = solution(3, 5);
//	for (int i = 0; i < v.size(); i++)
//		cout << v[i] << " ";
//}