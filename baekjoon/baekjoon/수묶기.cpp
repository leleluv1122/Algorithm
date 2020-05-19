//#include <iostream>
//#include <algorithm>
//#include <vector>
//using namespace std;
//const int MAX = 10000;
//int N;
//int arr[MAX];
//vector<int> v;
//bool compare(int a, int b) {
//	if (a > b)
//		return true;
//	return false;
//}
//int main() {
//	int sum = 0;
//	cin >> N;
//	int yangsu = 0;
//	int zero = 0;
//	for (int i = 0; i < N; i++) {
//		cin >> arr[i];
//	}
//	for (int i = 0; i < N; i++) {
//		if (arr[i] > 0)
//			v.push_back(arr[i]);
//	}
//	sort(v.begin(), v.end(), compare);
//
//	// ¾ç¼öµé...
//	if (v.size() > 1) {
//		for (int i = 0; i < v.size() - 1; i = i + 2) {
//			if (v[i] == 1 || v[i + 1] == 1) {
//				sum += v[i];
//				sum += v[i + 1];
//			}
//			else {
//				sum += (v[i] * v[i + 1]);
//			}
//			/*if (v.size() % 2 == 1 && i == v.size() - 3) {
//				sum += v[i + 2];
//			}*/
//		}
//	}
//	if (v.size() && v.size() % 2) {
//		sum += v[v.size() - 1];
//	}
//	v.clear();
//
//	for (int i = 0; i < N; i++) {
//		if (arr[i] < 0)
//			v.push_back(arr[i]);
//		else if (arr[i] == 0)
//			zero++;
//	}
//	sort(v.begin(), v.end());
//
//	if (v.size() > 1) {
//		for (int i = 0; i < v.size() - 1; i = i + 2) {
//			sum += (v[i] * v[i + 1]);
//		}
//	}
//	if (v.size() && v.size() % 2) {
//		if (zero)
//			sum += 0;
//		else
//			sum += v[v.size() - 1];
//	}
//
//
//	cout << sum << "\n";
//}