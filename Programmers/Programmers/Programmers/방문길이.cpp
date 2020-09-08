#include <string>
using namespace std;

bool brr[11][11][11][11];

int solution(string dirs) {
	int answer = 0, y = 0, x = 0;
	for (int i = 0; i < dirs.size(); i++) {
		if (dirs[i] == 'U') {
			if (y == 5)
				continue;
			int a = y, b = x, c = y + 1, d = x;
			if (!brr[a + 5][b + 5][c + 5][d + 5]) {
				answer++;
				brr[a + 5][b + 5][c + 5][d + 5] = true;
				brr[c + 5][d + 5][a + 5][b + 5] = true;
			}
			y += 1;
		}
		else if (dirs[i] == 'D') {
			if (y == -5)
				continue;
			int a = y, b = x, c = y - 1, d = x;
			if (!brr[a + 5][b + 5][c + 5][d + 5]) {
				answer++;
				brr[a + 5][b + 5][c + 5][d + 5] = true;
				brr[c + 5][d + 5][a + 5][b + 5] = true;
			}
			y -= 1;
		}
		else if (dirs[i] == 'R') {
			if (x == 5)
				continue;
			int a = y, b = x, c = y, d = x + 1;
			if (!brr[a + 5][b + 5][c + 5][d + 5]) {
				answer++;
				brr[a + 5][b + 5][c + 5][d + 5] = true;
				brr[c + 5][d + 5][a + 5][b + 5] = true;
			}
			x += 1;
		}
		else if (dirs[i] == 'L') {
			if (x == -5)
				continue;
			int a = y, b = x, c = y, d = x - 1;
			if (!brr[a + 5][b + 5][c + 5][d + 5]) {
				answer++;
				brr[a + 5][b + 5][c + 5][d + 5] = true;
				brr[c + 5][d + 5][a + 5][b + 5] = true;
			}
			x -= 1;
		}
	}

	return answer;
}


//#include <string>
//#include <vector>
//#include <algorithm>
//#include <iostream>
//using namespace std;
//
//vector<int> v;
//
//int solution(string dirs) {
//	int answer = 0, y = 0, x = 0;
//	for (int i = 0; i < dirs.size(); i++) {
//		if (dirs[i] == 'U') {
//			if (y == 5)
//				continue;
//			int a = y, b = x, c = y + 1, d = x;
//			int rs = a * 1000 + b * 100 + c * 10 + d;
//			if (find(v.begin(), v.end(), rs) == v.end()) {
//				v.push_back(rs);
//				answer++;
//			}
//			y += 1;
//		}
//		else if (dirs[i] == 'D') {
//			if (y == -5)
//				continue;
//			int a = y, b = x, c = y - 1, d = x;
//			int rs = a * 1000 + b * 100 + c * 10 + d;
//			if (find(v.begin(), v.end(), rs) == v.end()) {
//				v.push_back(rs);
//				answer++;
//			}
//			y -= 1;
//		}
//		else if (dirs[i] == 'R') {
//			if (x == 5)
//				continue;
//			int a = y, b = x, c = y, d = x + 1;
//			int rs = a * 1000 + b * 100 + c * 10 + d;
//			if (find(v.begin(), v.end(), rs) == v.end()) {
//				v.push_back(rs);
//				answer++;
//			}
//			x += 1;
//		}
//		else if (dirs[i] == 'L') {
//			if (x == -5)
//				continue;
//			int a = y, b = x, c = y, d = x - 1;
//			int rs = a * 1000 + b * 100 + c * 10 + d;
//			if (find(v.begin(), v.end(), rs) == v.end()) {
//				v.push_back(rs);
//				answer++;
//			}
//			x -= 1;
//		}
//	}
//	return answer;
//}
//
//int main() {
//	cout << solution("UDU");
//}


/// 아니,,,위로가는거랑 밑으로 가는거 다름,,, 망해따!!!
//#include <string>
//#include <iostream>
//using namespace std;
//
//bool arr[11][11];
//
//int solution(string dirs) {
//	int answer = 0;
//
//	arr[5][5] = true;
//	int y = 0, x = 0;
//	for (int i = 0; i < dirs.size(); i++) {
//		if (dirs[i] == 'U') {
//			if (y == 5 || arr[y + 6][x + 5])
//				continue;
//			y += 1;
//			arr[y + 5][x + 5] = true;
//			answer++;
//		}
//		else if (dirs[i] == 'D') {
//			if (y == -5 || arr[y + 4][x + 5])
//				continue;
//			y -= 1;
//			arr[y + 5][x + 5] = true;
//			answer++;
//		}
//		else if (dirs[i] == 'R') {
//			if (x == 5 || arr[y + 5][x + 6])
//				continue;
//			x += 1;
//			arr[y + 5][x + 5] = true;
//			answer++;
//		}
//		else if (dirs[i] == 'L') {
//			if (x == -5 || arr[y + 5][x + 4])
//				continue;
//			x -= 1;
//			arr[y + 5][x + 5] = true;
//			answer++;
//		}
//	}
//
//	return answer;
//}
//
//int main() {
//	cout << solution("ULURRDLLU");
//}