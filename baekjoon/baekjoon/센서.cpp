//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//int main()
//{
//	int N, K;
//	cin >> N >> K;
//
//	vector<int> v(N);
//
//	for (int i = 0; i < N; i++)
//	{
//		cin >> v[i];
//	}
//
//	sort(v.begin(), v.end());
//
//	vector<int> diff(N - 1);
//
//	for (int i = 0; i < N - 1; i++)
//	{
//		diff[i] = v[i + 1] - v[i];
//	}
//
//	sort(diff.begin(), diff.end());
//
//	int result = 0;
//
//	for (int i = 0; i < N - K; i++)
//	{
//		result += diff[i];
//	}
//
//	cout << result << "\n";
//}



//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//int main() {
//	int N, K; cin >> N >> K;
//	vector<int> v;
//
//	for (int i = 0; i < N; i++) {
//		int a; cin >> a;
//		v.push_back(a);
//	}
//	sort(v.begin(), v.end());
//	
//
//	int b = v[0];
//	int d = 0, e = 0, c = 1000;
//	for (int i = 0; i < N - 1; i++) {
//		d = v[i] - b;
//		e = v[N - 1] - v[i + 1];
//		if (c > e + d )
//			c = e + d;
//	}
//	cout << c << endl;
//
//}