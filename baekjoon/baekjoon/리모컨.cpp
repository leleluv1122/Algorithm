//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <cmath>
//using namespace std;
//const int INF = 987654321;
//const int MAX = 1000000 + 1;
//int N, M;
//vector<int> broken;
//int baeks() {
//	return abs(N - 100);
//}
//bool possible(int num) {
//	if (num == 0)
//		if (find(broken.begin(), broken.end(), 0) == broken.end())
//			return true;
//		else
//			return false;
//	while (num)
//	{
//		if (find(broken.begin(), broken.end(), num % 10) != broken.end())
//			return false;
//		num /= 10;
//	}
//	return true;
//}
//int length(int num) {
//	if (num == 0)
//		return 1;
//	int result = 0;
//	while (num) {
//		num /= 10;
//		result++;
//	}
//	return result;
//}
//int allall() {
//	int result = INF;
//	int similar = 0;
//	for (int i = 0; i < MAX; i++) {
//		if (possible(i)) {
//			int click = abs(N - i);
//			if (result > click) {
//				result = click;
//				similar = i;
//			}
//		}
//	}
//	return result + length(similar);
//}
//int main() {
//	cin >> N >> M;
//	for (int i = 0; i < M; i++) {
//		int button;
//		cin >> button;
//		broken.push_back(button);
//	}
//	cout << min(baeks(), allall()) << endl;
//}


//#include <iostream>
//#include <string>
//using namespace std;
//int N, M;
//int arr[10];
//int total;
//
//int main() {
//	cin >> N >> M;
//	for (int i = 0; i < M; i++) 
//		cin >> arr[i];
//	
//	int minus = N;
//	int plus = N;
//
//	if (N != 100) {
//		while (1) {
//			minus--;
//			plus++;
//			string m = to_string(minus);
//			int mmt = 0;
//			string p = to_string(plus);
//			int pnt = 0;
//
//			for (int i = 0; i < m.size(); i++) {
//				for (int j = 0; j < M; j++) {
//					if (m[i] - '0' == arr[j]) {
//						mmt++;
//					}
//				}
//			}
//			if (mmt == 0)
//				break;
//
//			for (int i = 0; i < p.size(); i++) {
//				for (int j = 0; j < M; j++) {
//					if (p[i] - '0' == arr[j])
//						pnt++;
//				}
//			}
//			if (pnt == 0)
//				break;
//		}
//		total = 0;
//		if (N - minus < plus - N) {
//			total = to_string(minus).size();
//			total += (N - minus);
//		}
//		else {
//			total = to_string(plus).size();
//			total += (plus - N);
//		}
//		cout << total << "\n";
//	}
//	
//	else {
//		cout << 0 << "\n";
//	}
//	
//}