//#include <iostream>
//#include <cstring>
//using namespace std; 
//const int MAX = 100;
//int N;
//char arr[MAX][MAX];
//int v_normal[MAX][MAX], v_rgb[MAX][MAX];
//int gogoA[4] = { 0,1,0,-1 }, gogoB[4] = { -1,0,1,0 };
//
//void findnormalR(int a, int b) {
//	if (v_normal[a][b])
//		return;
//	v_normal[a][b] = 1;
//
//	for (int i = 0; i < 4; i++) {
//		int A = a + gogoA[i];
//		int B = b + gogoB[i];
//		if (A >= 0 && A < N && B >= 0 && B < N) {
//			if (v_normal[A][B] == 0 && arr[A][B] == 'R')
//				findnormalR(A, B);
//		}
//	}
//}
//void findnormalG(int a, int b) {
//	if (v_normal[a][b])
//		return;
//	v_normal[a][b] = 1;
//
//	for (int i = 0; i < 4; i++) {
//		int A = a + gogoA[i];
//		int B = b + gogoB[i];
//		if (A >= 0 && A < N && B >= 0 && B < N) {
//			if (v_normal[A][B] == 0 && arr[A][B] == 'G')
//				findnormalG(A, B);
//		}
//	}
//}
//void findnormalB(int a, int b) {
//	if (v_normal[a][b])
//		return;
//	v_normal[a][b] = 1;
//
//	for (int i = 0; i < 4; i++) {
//		int A = a + gogoA[i];
//		int B = b + gogoB[i];
//		if (A >= 0 && A < N && B >= 0 && B < N) {
//			if (v_normal[A][B] == 0 && arr[A][B] == 'B')
//				findnormalB(A, B);
//		}
//	}
//}
//
//void findrgbRnG(int a, int b) {
//	if (v_rgb[a][b])
//		return;
//	v_rgb[a][b] = 1;
//
//	for (int i = 0; i < 4; i++) {
//		int A = a + gogoA[i];
//		int B = b + gogoB[i];
//		if (A >= 0 && A < N && B >= 0 && B < N) {
//			if (v_rgb[A][B] == 0 && (arr[A][B] == 'R' || arr[A][B] == 'G'))
//				findrgbRnG(A, B);
//		}
//	}
//}
//
//void findrgbB(int a, int b) {
//	if (v_rgb[a][b])
//		return;
//	v_rgb[a][b] = 1;
//
//	for (int i = 0; i < 4; i++) {
//		int A = a + gogoA[i];
//		int B = b + gogoB[i];
//		if (A >= 0 && A < N && B >= 0 && B < N) {
//			if (v_rgb[A][B] == 0 && arr[A][B] == 'B')
//				findrgbB(A, B);
//		}
//	}
//}
//
//int main() {
//	cin >> N;
//
//	for (int i = 0; i < N; i++) {
//		for (int j = 0; j < N; j++) {
//			cin >> arr[i][j];
//		}
//	}
//
//	// 정상인
//	int nnt = 0;
//	for (int i = 0; i < N; i++) {
//		for (int j = 0; j < N; j++) {
//			if (v_normal[i][j] == 0 && arr[i][j] == 'R') {
//				findnormalR(i, j);
//				nnt++;
//			}
//			else if (v_normal[i][j] == 0 && arr[i][j] == 'G') {
//				findnormalG(i, j);
//				nnt++;
//			}
//			else if (v_normal[i][j] == 0 && arr[i][j] == 'B') {
//				findnormalB(i, j);
//				nnt++;
//			}
//		}
//	}
//
//	// 적록색맹
//	int rgbnt = 0;
//	for (int i = 0; i < N; i++) {
//		for (int j = 0; j < N; j++) {
//			if (v_rgb[i][j] == 0 && arr[i][j] == 'B') {
//				findrgbB(i, j);
//				rgbnt++;
//			}
//			else if (v_rgb[i][j] == 0 && (arr[i][j]=='R'||arr[i][j]=='G')) {
//				findrgbRnG(i, j);
//				rgbnt++;
//			}
//		}
//	}
//
//	cout << nnt << " " << rgbnt << "\n";
//}