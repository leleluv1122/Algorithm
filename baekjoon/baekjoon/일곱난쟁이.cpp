///////////2309¹ø ÀÏ°ö³­ÀïÀÌ///////////

//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//int main()
//{
//	vector<int> v;
//	int sum = 0;
//	for (int i = 0; i < 9; i++) {
//		int a; cin >> a;
//		v.push_back(a);
//		sum += v[i];
//	}
//	sort(v.begin(), v.end());
//	int a, b;
//	for (int i = 0; i < 8; i++) {
//		for (int j = 1 + i; j < 9; j++) {
//			int s = sum - v[i] - v[j];
//			if (s == 100) {
//				a = i; b = j;
//			}
//		}
//	}
//	for (int i = 0; i < 9; i++) {
//		if (i == a || i == b)
//			continue;
//		else
//			cout << v[i] << endl;
//	}
//}