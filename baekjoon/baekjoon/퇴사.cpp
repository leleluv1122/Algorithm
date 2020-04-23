//7
//3 10
//5 20
//1 10
//1 20
//2 15
//4 40
//2 200

//
//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//int main()
//{
//
//}














//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//struct work {
//	int day;
//	int duringday;
//	int money;
//};
//int main()
//{
//	int n;
//	int sum = 0;
//	vector<work> v;
//	cin >> n;
//	for (int i = 0; i < n; i++) {
//		work w; w.day = i + 1;
//		cin >> w.duringday >> w.money;
//		v.push_back(w);
//	}
//
//	for (int i = 0; i < n; i++) {
//		sum = 0;
//		int a = v[i].day + v[i].duringday - 1;
//		if (a < n) {
//			sum += v[i].money;
//			for (int j = a + 1; j < n; j++) {
//				sum = max(sum, sum + v[i].money);
//			}
//		}
//	}
//}



//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//int N;
//vector<work> v;
//vector<int> vn;
//int sum = 0;
//struct work {
//	int day;
//	int duringday;
//	int money;
//};
//void wom(int a) {
//	int s = 0;
//	for (int i = a; i < N; i++) {
//		int b = v[i].day + v[i].duringday - 1;
//		if (b < N) {
//			sum += v[i].money;
//			vn.push_back(sum);
//			wom(b);
//		}
//	}
//}
//bool compare(int a, int b) {
//	if (a > b)
//		return true;
//	return false;
//}
//int main()
//{
//	cin >> N;
//	for (int i = 0; i < N; i++) {
//		work w; w.day = i + 1;
//		cin >> w.duringday >> w.money;
//		v.push_back(w);
//	}
//
//	for (int i = 0; i < N; i++) {
//		sum = 0;
//		int a = v[i].day + v[i].duringday - 1;
//		if (a < N) {
//			sum += v[i].money;
//			wom(a);
//		}
//	}
//	sort(vn.begin(), vn.end(), compare);
//
//	cout << vn[0] << endl;
//}


//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//int N;
//vector<work> v;
//int sum = 0;
//
//struct work {
//	int day;
//	int duringday;
//	int money;
//};
//int main()
//{
//	cin >> N;
//	for (int i = 0; i < N; i++) {
//		work w; w.day = i + 1;
//		cin >> w.duringday >> w.money;
//		v.push_back(w);
//	}
//	int t = 1;
//	/*for (int i = 0; i < N; i++) {
//		if (v[i].day + v[i].duringday - 1 > N)
//			continue;
//		if (t > v[i].day)
//			continue;
//		
//		t += v[i].duringday;
//	}*/
//	/*int t = 0;
//	for (int i = 0; i < N; i++) {
//		int a = v[i].day + v[i].duringday - 1;
//		if (a > N)
//			continue;
//		else {
//			sum += v[i].money;
//		}
//	}*/
//
//}