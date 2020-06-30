#include <iostream>
#include <vector>
#include <algorithm>

#define MAX 100001
using namespace std;

int arr1[MAX], arr2[MAX];
int order[MAX];
int n;

void init() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
}

int main() {
	init();
	cin >> n;

	for (int i = 1; i <= n; i++)
		cin >> arr1[i];
	for (int i = 1; i <= n; i++)
		cin >> arr2[i];
	for (int i = 1; i <= n; i++)
		order[arr2[i]] = i;

	for (int i = 1; i <= n; i++)
		arr1[i] = order[arr1[i]];

	int result = 0;
	vector<int> v;
	v.push_back(-1);

	for (int i = 1; i <= n; i++) {
		if (v.back() < arr1[i]) {
			v.push_back(arr1[i]);
			result++;
		}
		else {
			auto lt = lower_bound(v.begin(), v.end(), arr1[i]);
			// lower_bound : key값이 없으면 key값보다 큰 가장작은 정소 값을찾음
			*lt = arr1[i];
		}
	}

	cout << result << endl;
}


////// 메모리초과 10만이상은 arr로 lcs를 구하면 안됨
//#include <iostream>
//#include <algorithm>
//#include <vector>
//
//#define endl "\n"
//using namespace std;
//
//int n;
//
//void init() {
//	ios::sync_with_stdio(false);
//	cin.tie(0);
//	cout.tie(0);
//}
//
//int main() {
//	init();
//	cin >> n;
//
//	vector<vector<int>> arr(n + 1, vector<int>(n + 1, 0));
//	int* arr1 = new int[n];
//	int* arr2 = new int[n];
//
//	for (int i = 0; i < n; i++)
//		cin >> arr1[i];
//	for (int i = 0; i < n; i++)
//		cin >> arr2[i];
//
//	for (int i = 1; i <= n; i++) {
//		for (int j = 1; j <= n; j++) {
//			if (arr1[i - 1] == arr2[j - 1]) {
//				arr[i][j] = arr[i - 1][j - 1] + 1;
//			}
//			else {
//				arr[i][j] = max(arr[i - 1][j], arr[i][j - 1]);
//			}
//		}
//	}
//
//	cout << arr[n][n] << endl;
//}