//#include <iostream>
//#include <string>
//using namespace std;
//int main() {
//	string sik;
//	int result = 0;
//	bool minus = false;
//	string t = "";
//
//	cin >> sik;
//
//	for (int i = 0; i <= sik.size(); ++i) {
//		if (sik[i] == '+' || sik[i] == '-' || sik[i] == '\0') {
//			if (minus)
//				result -= stoi(t);
//			else
//				result += stoi(t);
//			t = "";
//			if (sik[i] == '-')
//				minus = true;
//			continue;
//		}
//		t += sik[i];
//	}
//	cout << result << endl;
//}