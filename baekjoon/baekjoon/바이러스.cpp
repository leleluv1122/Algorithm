//#include <iostream>
//#include <vector>
//#include <queue>
//using namespace std;
//const int MAX = 100 + 1;
//vector<int> p[MAX];
//bool visited[MAX];
//
//int main() {
//	int com; cin >> com;
//	int ssang; cin >> ssang;
//
//	for (int i = 0; i < ssang; i++) {
//		int a, b; cin >> a >> b;
//		p[a].push_back(b);
//		p[b].push_back(a);
//	}
//	int cnt = 0;
//
//	queue<int> q;
//
//	q.push(1);
//	visited[1] = true;
//
//	while (!q.empty()) {
//		int t = q.front();
//		q.pop();
//
//		for (int i = 0; i < p[t].size(); i++) {
//			int f = p[t][i];
//			if (!visited[f]) {
//				q.push(f);
//				visited[f] = true;
//				cnt++;
//			}
//		}
//	}
//	cout << cnt << endl;
//}


////#include <iostream>
////#include <vector>
////#include <queue>
////using namespace std;
////const int MAX = 100 + 1;
////vector<int> p[MAX];
////bool visited[MAX];
////
////int main() {
////	int com; cin >> com;
////	int ssang; cin >> ssang;
////
////	for (int i = 0; i < ssang; i++) {
////		int a, b; cin >> a >> b;
////		p[a].push_back(b);
////		p[b].push_back(a);
////	}
////	int cnt = 0;
////
////	queue<int> q;
////
////	q.push(1);
////	visited[1] = true;
////
////	while (!q.empty()) {
////		int t = q.front();
////		q.pop();
////
////		for (int i = 0; i < p[t].size(); i++) {
////			int f = p[t][i];
////			if (!visited[f]) {
////				q.push(f);
////				visited[f] = true;
////				cnt++;
////			}
////		}
////	}
////	cout << cnt << endl;
////}