///ÀÌÇØ¾È´ï...¤Ð


//#include <iostream>
//#include <algorithm>
//#define MAX 100 + 1
//#define endl "\n"
//using namespace std;
//const int IMPOSSIBLE = 1000000000;
//int arr[MAX];
//int d[MAX][10001];
//int n, k;
//
//
//bool compare(int a, int b) {
//	if (a > b)
//		return true;
//	return false;
//}
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//
//	memset(arr, 0, sizeof(arr));
//	memset(d, 0, sizeof(d));
//
//	cin >> n >> k;
//
//	for (int i = 0; i < n; i++) {
//		cin >> arr[i];
//	}
//
//	for (int i = 0; i <= n; i++)
//		for (int j = 0; j <= k; j++)
//			d[i][j] = IMPOSSIBLE;
//
//	for (int i = 0; i < n; i++) {
//		d[i][0] = 0;
//		for (int j = 0; j <= k; j++) {
//			d[i + 1][j] = min(d[i + 1][j], d[i][j]);
//			int m = j + arr[i];
//			if (m <= k)d[i][m] = min(d[i][m], d[i][j] + 1);
//		}
//	}
//
//	if (d[n-1][k] == IMPOSSIBLE) puts("-1");
//	else cout << d[n - 1][k] << endl;
//}