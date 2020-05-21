//#include <iostream>
//#include <vector>
//#include <cstring>
//using namespace std;
//bool visited[26];
//int main() {
//	ios_base::sync_with_stdio(0);
//	cin.tie(0);
//	int N;
//	vector<string> v;
//	cin >> N;
//	int n = N;
//	for (int i = 0; i < N; i++) {
//		string s; cin >> s;
//		v.push_back(s);
//	}
//	int cnt = 0;
//	while (N) {
//		N--;
//		memset(visited, false, sizeof(visited));
//		char c = v[N][0];
//		for (int i = 1; i < v[N].size(); i++) {
//			if (c == v[N][i])
//				continue;
//			else if (!visited[c - 'a']) {
//				visited[c - 'a'] = true;
//				c = v[N][i];
//			}
//			else {
//				cnt++;
//				break;
//			}
//			if (visited[c - 'a']) {
//				cnt++;
//				break;
//			}
//		}
//	}
//	cout << n - cnt << "\n";
//}