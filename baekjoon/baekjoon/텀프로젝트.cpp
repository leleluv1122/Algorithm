//#include <iostream>
//#include <cstring>
//using namespace std;
//const int MAX = 100000;
//int arr[MAX], visited[MAX], finished[MAX];
//int cnt;
//void team(int a) {
//	visited[a] = 1;
//
//	int next = arr[a];
//	if (visited[next] != 0) {
//		if (finished[next] == 0) {
//			for (int i = next; i != a; i = arr[i]) {
//				cnt++;
//			}
//			cnt++;
//		}
//	}
//	else
//		team(next);
//	finished[a] = 1;
//}
//int main() {
//	int T; cin >> T;
//	for (int t = 0; t < T; t++) {
//		int n; cin >> n;
//		for (int i = 0; i < n; i++) {
//			cin >> arr[i];
//			arr[i]--;
//		}
//
//		memset(visited, 0, sizeof(visited));
//		memset(finished, 0, sizeof(finished));
//		cnt = 0;
//		for (int i = 0; i < n; i++) {
//			if (visited[i] == 0)
//				team(i);
//		}
//
//		cout << n - cnt << "\n";
//	}
//}



//#include <iostream>
//#include <cstring>
//using namespace std;
//const int MAX = 100000;
//int arr[MAX];
//int visited[MAX], finished[MAX];
//int cnt;
//void team(int a) {
//	visited[a] = 1;
//	int nextV = arr[a];
//
//	if (visited[nextV] != 0) {
//		if (finished[nextV] == 0) {
//			for (int t = nextV; t != a; t = arr[t])
//				cnt++;
//			cnt++;
//		}
//	}
//	else
//		team(nextV);
//	finished[a] = 1;
//}
//int main() {
//	int T; cin >> T;
//	for (int t = 0; t < T; t++) {
//		int n; cin >> n;
//		for (int i = 0; i < n; i++) {
//			cin >> arr[i];
//			arr[i]--;
//		}
//
//		memset(visited, 0, sizeof(visited));
//		memset(finished, 0, sizeof(finished));
//		cnt = 0;
//		for (int i = 0; i < n; i++) {
//			if (visited[i] == 0)
//				team(i);
//		}
//
//		cout << n - cnt << "\n";
//	}
//}