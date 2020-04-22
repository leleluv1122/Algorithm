//#include <iostream>
//#include <vector>
//using namespace std;
//int main()
//{
//	int N, M;
//	vector<int> v;
//	int sum = 0;
//	cin >> N >> M;
//	for (int i = 0; i < N; i++) {
//		int a; cin >> a;
//		v.push_back(a);
//	}
//
//	for (int i = 0; i < N - 2; i++) {
//		for (int j = i + 1; j < N - 1; j++) {
//			for (int k = j + 1; k < N; k++) {
//				if (v[i] + v[j] + v[k] <= M && M - (v[i] + v[j] + v[k]) < M - sum)
//					sum = v[i] + v[j] + v[k];
//			}
//		}
//	}
//	cout << sum << "\n";
//}


//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//vector<int> v;
//int main()
//{
//	int N, M;
//	cin >> N >> M;
//	for (int i = 0; i < N; i++) {
//		int a; cin >> a;
//		v.push_back(a);
//	}
//	//sort(v.begin(), v.end());
//	int sum = 0;
//	int d[1000];
//	int dif = 100;
//	int idx = 0;
//
//	/*for (int i = 0; i < N - 2; i++) {
//		d[i] = v[i] + v[i + 1] + v[i + 2];
//		if (dif > abs(M - d[i])) {
//			dif = abs(M - d[i]);
//			idx = i;
//		}
//	}*/
//
//	for (int i = 0; i < N - 2; i++) {
//		for (int j = i + 1; j < N - 1; j++) {
//			for (int k = j + 1; k < N; k++) {
//				if (i == j && j == k && i == k)
//					continue;
//				else {
//					d[i + j + k] = v[i] + v[j] + v[k];
//					if (dif > abs(M - d[i + j + k]))
//					{
//						dif = abs(M - d[i + j + k]);
//						idx = i + j + k;
//					}
//				}
//			}
//		}
//	}
//
//	/*for (int i = 0; i < N; i++) {
//		for (int j = 0; j < N; j++) {
//			for (int k = 0; j < N; k++) {
//				if (i == j && j == k && i == k)
//					continue;
//				else {
//					d[i + j + k] = v[i] + v[j] + v[k];
//					if (dif > abs(M - d[i + j + k]))
//					{
//						dif = abs(M - d[i + j + k]);
//						idx = i + j + k;
//					}
//				}
//			}
//		}
//	}*/
//	
//	cout << d[idx] << endl;
//}