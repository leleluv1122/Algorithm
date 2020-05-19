//#include <iostream>
//using namespace std;
//const int MAX = 10000 + 1;
//int arr[MAX];
//int N, M;
//int cnt;
//
//int main() {
//	ios_base::sync_with_stdio(0);
//	cin.tie(0);
//
//	cin >> N >> M;
//	for (int i = 0; i < N; i++)
//		cin >> arr[i];
//	cnt = 0;
//	int sum = arr[0];
//
//	int low = 0, high = 0;
//
//	while (low <= high && high < N) {
//		if (sum < M)
//			sum += arr[++high];
//		else if (sum == M) {
//			cnt++;
//			sum += arr[++high];
//		}
//		else if (sum > M) {
//			sum -= arr[low++];
//			if (low > high && low < N) {
//				high = low;
//				sum = arr[low];
//			}
//		}
//	}
//
//	cout << cnt << "\n";
//}


//#include <iostream>
//using namespace std;
//const int MAX = 10000 + 1;
//int arr[MAX];
//int N, M;
//int cnt;
//bool visited[MAX];
//
//void susu(int a, int sum) {
//	sum += arr[a];
//	if (sum == M && !visited[a]) {
//		cnt++;
//		visited[a] = true;
//		return;
//	}
//	for (int i = a + 1; i < N; i++) {
//		susu(i, sum);
//		susu(i, 0);
//	}
//}
//
//int main() {
//	ios_base::sync_with_stdio(0);
//	cin.tie(0);
//
//	cin >> N >> M;
//	memset(visited, false, sizeof(visited));
//	for (int i = 0; i < N; i++)
//		cin >> arr[i];
//	cnt = 0;
//	susu(0, 0);
//	cout << cnt << "\n";
//}