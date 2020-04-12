//#include <iostream>
//#include <algorithm>
//using namespace std;
//const int MAX = 50;
//const int INF = 987654321;
//int N, M;
//int main()
//{
//	cin >> N >> M;
//
//	int sixn = INF, n = INF;
//
//	for (int i = 0; i < M; i++)
//	{
//		int sixnCost, nCost;
//		cin >> sixnCost >> nCost;
//		sixn = min(sixn, sixnCost);
//		n = min(n, nCost);
//	}
//	if (N <= 6)
//		cout << min(sixn, n * N) << endl;
//	else
//	{
//		int result = INF;
//		for (int i = 0; i <= (N / 6) + 1; i++)
//			result = min(result, sixn * i + n * max(N - 6 * i, 0));
//		cout << result << endl;
//	}
//}



//#include <iostream>
//#include <algorithm>
//using namespace std;
//int main() {
//	int N, M;
//	cin >> N >> M;
//
//	int sixn = 99999, n = 99999;
//
//	for (int i = 0; i < M; ++i) {
//		int sn, nn;
//		cin >> sn >> nn;
//
//		sixn = min(sixn, sn);
//		n = min(n, nn);
//	}
//
//	if (N <= 6)
//		cout << min(sixn, n * N) << endl;
//	else {
//		int r = 99999;
//		for (int i = 0; i <= (N / 6) + 1; ++i) {
//			r = min(r, sixn * i + n * max(N - 6 * i, 0));
//		}
//		cout << r << endl;
//	}
//}

//#include <iostream>
//#include <algorithm>
//#include <vector>
//using namespace std;
//struct Gita {
//	int sixn;
//	int n;
//};
//bool compare(Gita a, Gita b) {
//	if (a.sixn < b.sixn)
//		return true;
//	return false;
//}
//int main() {
//	int N, M;
//	cin >> N >> M;
//
//	vector<Gita> gigi;
//	for (int i = 0; i < M; ++i) {
//		Gita g;
//		cin >> g.sixn >> g.n;
//		gigi.push_back(g);
//	}
//
//	sort(gigi.begin(), gigi.end(), compare);
//
//	if (N <= 6)
//		cout << min(gigi[0].sixn, gigi[0].n * 6) << endl;
//	else {
//		int r = 999999;
//		for (int i = 0; i < (N / 6) + 1; ++i) {
//			r = min(r, gigi[0].sixn * i + gigi[0].n * max(N - 6 * i, 0));
//		}
//		cout << r << endl;
//	}
//	
//}