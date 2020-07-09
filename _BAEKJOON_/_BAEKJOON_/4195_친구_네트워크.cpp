//// 먼말인지모루겟다..
////#include <iostream>
//#include <map>
//#include <cstring>
//#include <algorithm>
//#include <string>
//#include <queue>
//
//#define endl "\n"
//#define MAX 100000
//using namespace std;
//
//int arr[MAX + 1];
//int height[MAX + 1];
//
//int friend_find(int a) {
//	if (arr[a] == a)
//		return a;
//	else
//		return arr[a] = friend_find(arr[a]);
//}
//
//void friends(int a, int b) {
//	int fa = friend_find(a);
//	int fb = friend_find(b);
//
//	if (fa == fb)
//		return;
//
//	if (height[fa] < height[fb]) {
//		arr[fa] = fb;
//		height[fb] += height[fa];
//		height[fa] = height[fb];
//	}
//	else {
//		arr[fb] = fa;
//		height[fa] += height[fb];
//		height[fb] = height[fa];
//	}
//}
//
//void input() {
//	int T;
//	cin >> T;
//
//	while (T--) {
//		int n = 1, F;
//		map<string, int> name;
//		cin >> F;
//
//		for (int i = 0; i < MAX + 1; i++) {
//			arr[i] = i;
//			height[i] = 1;
//		}
//
//		string a, b;
//		for (int i = 0; i < F; i++) {
//			cin >> a >> b;
//
//			if (name.count(a) == 0)
//				name[a] = n++;
//			if (name.count(b) == 0)
//				name[b] = n++;
//
//			int aa = name[a];
//			int bb = name[b];
//
//			int pa = friend_find(aa);
//			int pb = friend_find(bb);
//
//			if (pa == pb)
//				cout << max(height[pa], height[pb]) << endl;
//			else {
//				friends(pa, pb);
//				cout << max(height[pa], height[pb]) << endl;
//			}
//		}
//	}
//}
//
//void init() {
//	ios::sync_with_stdio(false);
//	cin.tie(0);
//	cout.tie(0);
//}
//
//int main() {
//	init();
//	input();
//}


////// 시간초과...
//#include <iostream>
//#include <map>
//#include <cstring>
//#include <algorithm>
//#include <string>
//#include <queue>
//
//#define endl "\n"
//#define MAX 100000
//using namespace std;
//
//map<string, int> name;
//vector<int> v[MAX + 1];
//bool visited[MAX + 1];
//
//int friend_network(int a, int b) {
//	queue<int> q;
//
//	for (int i = 0; i < v[a].size(); i++)
//		q.push(v[a][i]);
//	for (int i = 0; i < v[b].size(); i++)
//		q.push(v[b][i]);
//
//	visited[a] = true;
//	visited[b] = true;
//
//	int result = 2;
//
//	while (!q.empty()) {
//		int t = q.front();
//		q.pop();
//
//		if (visited[t])
//			continue;
//		visited[t] = true;
//		result++;
//
//		for (int i = 0; i < v[t].size(); i++) {
//			int next = v[t][i];
//			q.push(next);
//		}
//	}
//
//	return result;
//}
//
//void input() {
//	int T;
//	cin >> T;
//
//	while (T--) {
//		for (int i = 0; i < MAX; i++)
//			v[i].clear();
//		int n = 0, F;
//		cin >> F;
//
//		string a, b;
//		for (int i = 0; i < F; i++) {
//			cin >> a >> b;
//
//			if (name.count(a) == 0)
//				name[a] = n++;
//			if (name.count(b) == 0)
//				name[b] = n++;
//
//			int aa = name[a];
//			int bb = name[b];
//
//			v[aa].push_back(bb);
//			v[bb].push_back(aa);
//
//			memset(visited, false, sizeof(visited));
//			cout << friend_network(aa, bb) << endl;
//		}
//	}
//}
//
//void init() {
//	ios::sync_with_stdio(false);
//	cin.tie(0);
//	cout.tie(0);
//}
//
//int main() {
//	init();
//	input();
//}




///////// time out ////////
//#include <iostream>
//#include <vector>
//#include <queue>
//#include <string>
//#include <algorithm>
//#include <cstring>
//
//#define endl "\n"
//#define MAX 100000
//using namespace std;
//
//vector<int> v[MAX + 1];
//vector<string> s;
//bool visited[MAX + 1];
//
//int friend_network(int a, int b) {
//	queue<int> q;
//
//	for (int i = 0; i < v[a].size(); i++)
//		q.push(v[a][i]);
//	for (int i = 0; i < v[b].size(); i++)
//		q.push(v[b][i]);
//
//	visited[a] = true;
//	visited[b] = true;
//
//	int result = 2;
//
//	while (!q.empty()) {
//		int t = q.front();
//		q.pop();
//
//		if (visited[t])
//			continue;
//		visited[t] = true;
//		result++;
//
//		for (int i = 0; i < v[t].size(); i++) {
//			int next = v[t][i];
//			q.push(next);
//		}
//	}
//
//	return result;
//}
//
//void input() {
//	int T;
//	cin >> T;
//
//	while (T--) {
//		for (int i = 0; i < MAX; i++)
//			v[i].clear();
//		int F;
//		cin >> F;
//
//		string a, b;
//		for (int i = 0; i < F; i++) {
//			cin >> a >> b;
//
//			int aa = find(s.begin(), s.end(), a) - s.begin();
//			int bb = find(s.begin(), s.end(), b) - s.begin();
//
//			int t = s.end() - s.begin();
//			if (aa == t) {
//				s.push_back(a);
//				aa = s.end() - s.begin() - 1;
//			}
//			if (bb == t) {
//				s.push_back(b);
//				bb = s.end() - s.begin() - 1;
//			}
//
//			v[aa].push_back(bb);
//			v[bb].push_back(aa);
//
//			memset(visited, false, sizeof(visited));
//			cout << friend_network(aa, bb) << endl;
//		}
//	}
//}
//
//void init() {
//	ios::sync_with_stdio(false);
//	cin.tie(0);
//	cout.tie(0);
//}
//
//int main() {
//	init();
//	input();
//}