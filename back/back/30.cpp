//#include <iostream>
//#include <string>
//#include <algorithm>
//using namespace std;
//
//bool compare(char a, char b) {
//	if (a > b)
//		return true;
//	return false;
//}
//int main() {
//	string N;
//	cin >> N;
//
//	int sum = 0;
//	bool z = false;
//	for (int i = 0; i < N.size(); ++i) {
//		sum += N[i] - '0';
//		if (!(N[i] - '0'))
//			z = true;
//	}
//
//	if (sum % 3 != 0 || !z)
//		cout << -1 << endl;
//	else {
//		sort(N.begin(), N.end(), compare);
//		cout << N << endl;
//	}
//		
//}


//#include <iostream>
//#include <string>
//#include <algorithm>
//using namespace std;
//
//bool compare(char a, char b) {
//	if (a > b)
//		return true;
//	return false;
//}
//
//int main() {
//	string N;
//	cin >> N;
//
//	int sum = 0;
//	bool z = false;
//	for (int i = 0; i < N.size(); ++i) {
//		sum += (N[i] - '0'); // ASCII�� ���� '0'�� ���� ���ڿ� �ƹ����⤷l ����
//		if (!(N[i] - '0')) //0�� �ִٸ� true
//			z = true;
//	}
//
//	if (sum % 3 || !z) //
//		cout << -1 << endl;
//	else {
//		sort(N.begin(), N.end(), compare);
//		cout << N << endl;
//	}
//}



//#include <iostream>
//#include <string>
//#include <algorithm>
//using namespace std;
//bool compare(char a, char b) {
//	if (a > b)
//		return true;
//	return false;
//}
//int main() {
//	string N;
//	cin >> N;
//
//	int sum = 0;
//	bool z = false;
//	for (int i = 0; i < N.size(); ++i) {
//		sum += (N[i] - '0');
//		if (!(N[i] - '0'))
//			z = true;
//	}
//
//	if (sum % 3 || !z) {
//		cout << -1 << endl;
//	}
//	else {
//		sort(N.begin(), N.end(), compare);
//		cout << N << endl;
//	}
//}