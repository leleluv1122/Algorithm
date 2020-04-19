//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//int main()
//{
//	int r1 = 0, r2 = 0, r3 = 0, r4 = 0;
//	int N; cin >> N;
//	vector<int> v;
//
//	for (int i = 0; i < N; ++i) {
//		int a; cin >> a;
//		v.push_back(a);
//	}
//
//	sort(v.begin(), v.end());
//
//	for (int i = 0; i < N; ++i) {
//		r1 += v[i];
//	}
//	r1 = r1 / N;
//	cout << r1 << "\n";
//
//	r2 = v[N / 2];
//	cout << r2 << "\n";
//	r3 = v[1];
//	cout << r3 << "\n";
//	
//	r4 = v[N - 1] - v[0];
//	cout << r4 << "\n";
//}


//#include <iostream>
//using namespace std;
//int main()
//{
//	int arr[1000000];
//	int N;
//	cin >> N;
//	for (int i = 0; i < N; ++i) {
//		cin >> arr[i];
//	}
//
//	for (int i = 0; i < N - 1; ++i) {
//		for (int j = i; j < N; ++j) {
//			if (arr[i] > arr[j]) {
//				int t = arr[i];
//				arr[i] = arr[j];
//				arr[j] = t;
//			}
//		}
//	}
//	for (int i = 0; i < N; ++i) {
//		cout << arr[i] << "\n";
//	}
//}

//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//int main()
//{
//	int N; cin >> N;
//	vector<int> v(N);
//	for (int i = 0; i < N; ++i) {
//		int a; cin >> a;
//		v.push_back(a);
//	}
//	sort(v.begin(), v.end());
//	for (int i = 0; i < N; ++i) {
//		cout << v[i] << "\n";
//	}
//}




//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//int main()
//{
//	int N;
//	cin >> N;
//	vector<int> v(N);
//	for (int i = 0; i < N; ++i) {
//		int a; cin >> a;
//		v[i] = a;
//	}
//	sort(v.begin(), v.end());
//
//	for (int i = 0; i < N; ++i) {
//		cout << v[i] << endl;
//	}
//}


//#include <vector>
//long long sum(std::vector<int>& a) {
//	long long ans = 0;
//	for (int i = 0; i < a.size(); ++i) {
//		ans += a[i];
//	}
//	return ans;
//}

//#include <iostream>
//
//using namespace std;
//int main()
//{
//	int a;
//	int b;
//	
//	cin >> a >> b;
//	int r = a * b;
//	cout << r << endl;
//}


//#include <iostream>
//using namespace std;
//int main()
//{
//	int A, B;
//	cin >> A >> B;
//	int r = A + B;
//	cout << r << endl;
//}