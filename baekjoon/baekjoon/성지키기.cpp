//#include <iostream>
//#include <algorithm>
//using namespace std;
//int N, M;
//string arr[50];
//bool row[50];
//bool col[50];
//int main() {
//	ios_base::sync_with_stdio(0);
//	cin.tie(0);
//	cin >> N >> M;
//	for (int i = 0; i < N; i++) {
//		cin >> arr[i];
//		for (int j = 0; j < M; j++) {
//			if (arr[i][j] == 'X') {
//				col[j] = true;
//				row[i] = true;
//			}
//		}
//	}
//	int r = 0, c = 0;
//	for (int i = 0; i < N; i++)
//		if (!row[i])
//			++r;
//	for (int j = 0; j < M; j++)
//		if (!col[j])
//			++c;
//	cout << max(r, c) << "\n";
//}


// 왜 틀려찌....!!! 모를일,,,,,ㅠ,ㅠ
//#include <iostream>
//using namespace std;
//int N, M;
//char arr[50][50];
//int main() {
//	ios_base::sync_with_stdio(0);
//	cin.tie(0);
//	cin >> N >> M;
//	for (int i = 0; i < N; i++)
//		for (int j = 0; j < M; j++)
//			cin >> arr[i][j];
//	int a = 0, b = 0;
//	int total = 0;
//	while (1) {
//		int cnt = 0;
//		for (int j = 0; j < M; j++) {
//			if (arr[a][j] != '.')
//				cnt++;
//		}
//		for (int i = 0; i < N; i++) {
//			if (arr[i][b] != '.')
//				cnt++;
//		}
//		if (cnt == 0) {
//			arr[a][b] = 'X';
//			total++;
//		}
//		b++;
//		if (b == M) {
//			a++;
//			b = 0;
//		}
//		if (a == N)
//			break;
//	}
//	cout << total << "\n";
//}