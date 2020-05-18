//#include <iostream>
//#include <algorithm>
//using namespace std;
//const int MAX = 1000;
//int R, C;
//int arr[MAX][MAX];
//string result;
//int main() {
//	ios_base::sync_with_stdio(0);
//	cin.tie(0);
//	cin >> R >> C;
//	for (int i = 0; i < R; i++)
//		for (int j = 0; j < C; j++)
//			cin >> arr[i][j];
//
//	if (R % 2) {
//		for (int i = 0; i < R; i++) {
//			for (int j = 0; j < C - 1; j++) {
//				if (i % 2 == 0)
//					result += 'R';
//				else
//					result += 'L';
//			}
//			if (i != R - 1)
//				result += 'D';
//		}
//	}
//	else if (C % 2 && !(R % 2)) {
//		for (int j = 0; j < C; j++) {
//			for (int i = 0; i < R - 1; i++) {
//				if (j % 2 == 0)
//					result += 'D';
//				else
//					result += 'U';
//			}
//			if (j != C - 1)
//				result += 'R';
//		}
//	}
//	/*6 6
//		1 2 3 4 5 6
//		4 2 1 3 1 1
//		2 3 5 4 1 0
//		2 2 2 2 2 2
//		2 4 2 6 5 4
//		4 1 2 5 9 6*/
//	else if (!(R % 2) && !(C % 2)) {
//		pair<int, int> mini;
//		int minscore = 1000;
//		for (int i = 0; i < R; i++) {
//			for (int j = 0; j < C; j++) {
//				if ((i + j) % 2 && minscore > arr[i][j]) {
//					minscore = arr[i][j];
//					mini = make_pair(i, j);
//				}
//			}
//		}
//
//		int newR = mini.first % 2 ? mini.first - 1 : mini.first;
//		for (int i = 0; i < newR; i++) {
//			for (int j = 0; j < C - 1; j++) {
//				if (i % 2 == 0)
//					result += 'R';
//				else
//					result += 'L';
//			}
//			result += 'D';
//		}
//
//		int newC = mini.second;
//		for (int i = 0; i < newC; i++) {
//			if (i % 2 == 0)
//				result += "DR";
//			else
//				result += "UR";
//		}
//		for (int i = newC; i < C - 1; i++) {
//			if (i % 2 == 0)
//				result += "RD";
//			else
//				result += "RU";
//		}
//		if (mini.first % 2 == 0)
//			newR = R - (mini.first + 2);
//		else
//			newR = R - (mini.first + 1);
//
//		for (int i = 0; i < newR; i++) {
//			result += 'D';
//			for (int j = 0; j < C - 1; j++) {
//				if (i % 2 == 0)
//					result += 'L';
//				else
//					result += 'R';
//			}
//		}
//	}
//	cout << result << "\n";
//}