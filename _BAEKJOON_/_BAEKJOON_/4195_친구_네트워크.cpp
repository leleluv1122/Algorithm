#include <iostream>
#include <map>
#include <algorithm>
#include <string>

#define endl "\n"
#define MAX 100000
using namespace std;

int arr[MAX + 1];
int height[MAX + 1];

int find(int a) {
	if (arr[a] == a)
		return a;
	return arr[a] = find(arr[a]);
}

void unions(int a, int b) {
	a = find(a);
	b = find(b);

	if (a == b)
		return;

	if (height[a] < height[b]) {
		arr[a] = b;
		height[b] += height[a];
		height[a] = height[b];
	}
	else {
		arr[b] = a;
		height[a] += height[b];
		height[b] = height[a];
	}
}

void input() {
	int T;
	cin >> T;

	while (T--) {
		int n = 1, F;
		map<string, int> name;
		cin >> F;

		for (int i = 0; i < MAX + 1; i++) {
			arr[i] = i;
			height[i] = 1;
		}

		string s1, s2;
		for (int i = 0; i < F; i++) {
			cin >> s1 >> s2;

			if (name.count(s1) == 0)
				name[s1] = n++;
			if (name.count(s2) == 0)
				name[s2] = n++;

			int a = name[s1];
			int b = name[s2];

			a = find(a);
			b = find(b);

			if (a == b)
				cout << max(height[a], height[b]) << endl;
			else {
				unions(a, b);
				cout << max(height[a], height[b]) << endl;
			}
		}
	}
}

void init() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
}

int main() {
	init();
	input();
}



///////// time out ////////
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