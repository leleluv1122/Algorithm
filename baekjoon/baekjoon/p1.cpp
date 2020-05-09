//#include <iostream>
//#include <vector>
//#include <stdlib.h>
//using namespace std;
//
////string solution(vector<int> numbers, string hand) {
////	int i = 0;
////
////	while (numbers[i - 1] >= 0 && numbers[i - 1] <= 9) {
////		cin >> numbers[i];
////		i++;
////	}
////	
////	string answer = "";
////	return answer;
////}
//
//int main() {
//	vector<int> numbers; 
//	string hand;
//	string a;
//	while (a != "right" && a != "left") {
//		cin >> a;
//		if (a == "right") {
//			hand = "right";
//			break;
//		}
//		else if (a == "left") {
//			hand = "left";
//		}
//		else {
//			numbers.push_back(atoi(a.c_str()));
//		}
//	}
//	string answer = "";
//
//
//	int l = 10;
//	int r = 12;
//
//	for (int i = 0; i < numbers.size(); i++) {
//		if (numbers[i] == 1 && numbers[i] == 4 && numbers[i] == 7) {
//			answer += "L";
//			l = numbers[i];
//		}
//		else if (numbers[i] == 3 && numbers[i] == 6 && numbers[i] == 9) {
//			answer += "R";
//			r = numbers[i];
//		}
//		else if (numbers[i] == 2 && numbers[i] == 5 && numbers[i] == 8) {
//			int t;
//			if (numbers[i] == 0) {
//				t = 3;
//			}
//			else
//				t = numbers[i] / 3;
//			if (abs(t-(l - 1) / 3) < abs(t-(r - 1) / 3)) {
//				answer += "L";
//			}
//			else if ((l - 1) / 3 > (r - 1) / 3) {
//				answer += "R";
//			}
//			else {
//				if (hand == "right") {
//					answer += "R";
//				}
//				else {
//					answer += "L";
//				}
//			}
//		}		
//	}
//}