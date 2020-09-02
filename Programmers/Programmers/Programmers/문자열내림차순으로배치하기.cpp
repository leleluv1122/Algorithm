///// ³î¶ó¿î Ç®ÀÌ...
#include <string>
#include <algorithm>
#include <iostream>

using namespace std;

string solution(string s) {
	sort(s.begin(), s.end(), greater<char>());
	return s;
}

int main() {
	string s = "Zbcdefg";
	cout << solution(s);
}


//#include <string>
//#include <algorithm>
//#include <iostream>
//
//using namespace std;
//
//bool cmp(char a, char b) {
//	if (a > b)
//		return true;
//	return false;
//}
//
//string solution(string s) {
//	sort(s.begin(), s.end(), cmp);
//	return s;
//}
//
//int main() {
//	string s = "Zbcdefg";
//	cout << solution(s);
//}