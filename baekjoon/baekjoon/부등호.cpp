//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <string>
//using namespace std;
//string sign;
//bool valid(vector<int>& v) {
//	for (int i = 0; i < sign.length(); i++) {
//		if (sign[i] == '<' && v[i] > v[i + 1])
//			return false;
//		else if (sign[i] == '>' && v[i] < v[i + 1])
//			return false;
//	}
//	return true;
//}
//int main() {
//	int k;
//	cin >> k;
//	for (int i = 0; i < k; i++) {
//		char c; cin >> c;
//		sign += c;
//	}
//	vector<int> v; // 9 8 7
//	for (int i = 9; i > 6; i--)
//		v.push_back(i);
//
//	while (1) {
//		if (valid(v)) // 다 맞다면 true반환되므로..
//			break;
//		prev_permutation(v.begin(), v.end());
//	}
//}

//#include <iostream>
//#include <vector>
//#include <string>
//#include <algorithm>
//using namespace std;
//int k;
//vector<int> maxNum, minNum;
//string sign;
//
//bool valid(vector<int>& v) {
//	for (int i = 0; i < sign.size(); i++) {
//		if (sign[i] == '>' && v[i] < v[i + 1])
//			return false;
//		else if (sign[i] == '<' && v[i] > v[i + 1])
//			return false;
//	}
//	return true;
//}
//
//int main() {
//	ios_base::sync_with_stdio(0);
//	cin.tie(0);
//	cin >> k;
//	for (int i = 0; i < k; i++) {
//		char t; cin >> t;
//		sign += t;
//	}
//
//	for (int i = 9; i > 9 - (k + 1); i--)
//		maxNum.push_back(i);
//	while (1) {
//		if (valid(maxNum))
//			break;
//		prev_permutation(maxNum.begin(), maxNum.end());
//		// 해당숫자보다 작으면서 최대인 수로 바꿔줌
//	}
//
//	for (int i = 0; i < k + 1; i++)
//		minNum.push_back(i);
//	while (1) {
//		if (valid(minNum))
//			break;
//		next_permutation(minNum.begin(), minNum.end());
//	}
//
//	for (int i = 0; i < maxNum.size(); i++)
//		cout << maxNum[i];
//	cout << "\n";
//	for (int i = 0; i < minNum.size(); i++)
//		cout << minNum[i];
//	cout << "\n";
//}


//#include <iostream>
//#include <vector>
//#include <string>
//#include <algorithm>
//using namespace std;
//int k;
//vector<int> maxNum, minNum;
//string sign;
//
//bool valid(vector<int>& v) {
//	for (int i = 0; i < sign.length(); i++) {
//		if (sign[i] == '<' && v[i] > v[i + 1])
//			return false;
//		else if (sign[i] == '>' && v[i] < v[i + 1])
//			return false;
//	}
//	return true;
//}
//
//int main() {
//	ios_base::sync_with_stdio(0);
//	cin.tie(0);
//	cin >> k;
//
//	for (int i = 0; i < k; i++) {
//		char t;
//		cin >> t;
//		sign += t;
//	}
//
//	for (int i = 9; i > 9 - (k + 1); i--)
//		maxNum.push_back(i);
//	while (1) {
//		if (valid(maxNum))
//			break;
//		prev_permutation(maxNum.begin(), maxNum.end());
//		// 해당숫자보다 작으면서 최대인 숫자로 바꿈
//	}
//
//	for (int i = 0; i < k + 1; i++)
//		minNum.push_back(i);
//	while (1) {
//		if (valid(minNum))
//			break;
//		next_permutation(minNum.begin(), minNum.end());
//	}
//
//	for (int i = 0; i < maxNum.size(); i++)
//		cout << maxNum[i];
//	cout << "\n";
//	for (int j = 0; j < minNum.size(); j++)
//		cout << minNum[j];
//	cout << "\n";
//}