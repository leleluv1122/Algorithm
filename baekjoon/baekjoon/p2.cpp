//#include <iostream>
//#include <string>
//#include <vector>
//#include <stdlib.h>
//#include <cstring>
//
//using namespace std;
//
//long long solution(string expression) {
//	long long answer = 0;
//
//	vector<int> irr; int r = 0;
//	vector<char> crr; int c = 0;
//
//	string a = "";
//	for (int i = 0; i < expression.size(); i++) {
//		if (expression[i] == '+' || expression[i] == '*' || expression[i] == '-')
//		{
//			crr.push_back(expression[i]);
//			irr.push_back(atoi(a.c_str()));
//			a = "";
//		}
//		else {
//			a += expression[i];
//		}
//	}
//	irr.push_back(atoi(a.c_str()));
//
//
//	char ysg[3] = { '-','+','*' };
//
//	for (int i = 0; i < 3; i++) {
//		for (int j = 0; j < 3; j++) {
//			for (int k = 0; k < 3; k++) {
//				if (i == j && j == k && i == k)
//					continue;
//				else {
//					char c = ysg[i];
//					for (int z = 0; z < crr.size(); z++) {
//						if (crr[z] == c) {
//
//						}
//					}
//
//				}
//			}
//		}
//	}
//
//	return answer;
//}
//
//int main() {
//	long long s = solution("100 - 200 * 300 - 500 + 20");
//	cout << s << endl;
//	system("pause");
//}