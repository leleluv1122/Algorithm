/////백트래킹
//#include <iostream>
//#define endl "\n"
//using namespace std;
//int N, S, val[20];
//int cnt, currentSum;
//
//void dfs(int current) {
//	if (current == N)
//		return;
//	if (currentSum + val[current] == S)
//		cnt++;
//
//	dfs(current + 1);
//
//	currentSum += val[current];
//	dfs(current + 1);
//
//	currentSum -= val[current];
//}
//
//int main() {
//	cin >> N >> S;
//	for (int i = 0; i < N; i++)
//		cin >> val[i];
//	dfs(0);
//	cout << cnt << endl;
//}





////브루트포스
//#include <iostream>
//using namespace std;
//int N, S, sum = 0, result = 0;
//int arr[20];
//void buhap(int a) {
//	sum += arr[a];
//
//	if (sum == S)
//		result++;
//
//	for (int i = a + 1; i < N; i++)
//		buhap(i);
//
//	sum -= arr[a];
//}
//int main()
//{
//	cin >> N >> S;
//
//	for (int i = 0; i < N; i++)
//		cin >> arr[i];
//
//	for (int i = 0; i < N; i++)
//		buhap(i);
//
//	cout << result << "\n";
//}


//#include <iostream>
//using namespace std;
//int N, S, sum = 0, result = 0;
//int arr[21];
//void buhap(int a) {
//	sum += arr[a];
//
//	if (sum == S)
//		result++;
//
//	for (int i = a + 1; i < N; i++)
//		buhap(i);
//
//	sum -= arr[a];
//}
//int main()
//{
//	cin >> N >> S;
//
//	for (int i = 0; i < N; i++)
//		cin >> arr[i];
//	
//	for (int i = 0; i < N; i++)
//		buhap(i);
//
//	cout << result;
//}

//#include <iostream>
//using namespace std;
//int N, S;
//int arr[21];
//int buhap(int a, int b) { //a: 더하는개수
//	int r = 0, t = 0;
//	for (int i = 0; i < a; i++) {
//		for (int j = b; j <= b + i; j++) {
//			r += arr[j];
//		}
//		if (r == S)
//			t++;
//	}
//	return t;
//}
//int main()
//{
//	cin >> N >> S;
//
//	for (int i = 1; i <= N; i++)
//		cin >> arr[i];
//	int result = 0;
//	for (int i = 1; i <= N; i++) {
//		for (int j = 1; j <= N - i + 1; j++) {
//			result += buhap(i, j);
//		}
//	}
//	cout << result;
//}