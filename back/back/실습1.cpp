//#include <iostream>
//using namespace std;
//int main()
//{
//	int N; cin >> N;
//	for (int i = 1; i <= N; i++) {
//		for (int j = 1; j <= (N + 1) / 2; j++) {
//			cout << "* ";
//		}
//		cout << endl;
//		for (int j = 1; j <= N / 2; j++) {
//			cout << " *";
//		}
//		cout << endl;
//	}
//}


//#include <iostream>
//using namespace std;
//int main()
//{
//	int N; cin >> N;
//	for (int i = 1; i < N * 2; i++) {
//		if (i <= N) {
//			for (int j = 1; j < i; j++) {
//				cout << " ";
//			}
//			for (int j = N * 2 - 2 * i+1; j > 0; j--) {
//				cout << "*";
//			}
//		}
//		else {
//			for (int j = N * 2 - i - 1; j > 0; j--) {
//				cout << " ";
//			}
//			for (int j = 1; j < (i - N + 1) * 2; j++) {
//				cout << "*";
//			}
//		}
//		cout << endl;
//	}
//}


//#include <iostream>
//using namespace std;
//int main()
//{
//	int N; cin >> N;
//	for (int i = 1; i < N * 2; i++) {
//		if (i <= N) {
//			for (int j = 1; j <= i; j++) {
//
//				cout << "*";
//			}
//		}
//		else {
//			for (int j = 1; j <= N * 2 - i; j++) {
//				cout << "*";
//			}
//		}
//		cout << endl;
//	}
//}

//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//int main()
//{
//	vector<int> v;
//	for (int i = 0; i < 3; i++) {
//		int a; cin >> a;
//		v.push_back(a);
//	}
//	sort(v.begin(), v.end());
//	cout << v[1];
//}


//#include <iostream>
//using namespace std;
//int main()
//{
//	int ham[3];
//	int drink[2];
//	for (int i = 0; i < 3; i++) {
//		cin >> ham[i];
//	}
//	for (int i = 0; i < 2; i++) {
//		cin >> drink[i];
//	}
//	int mini = 4000;
//	for (int i = 0; i < 3; i++) {
//		for (int j = 0; j < 2; j++) {
//			if (ham[i] + drink[j] - 50 < mini)
//				mini = ham[i] + drink[j] - 50;
//		}
//	}
//	cout << mini << "\n";
//}


//#include <iostream>
//using namespace std;
//int main()
//{
//	int arr[5];
//	for (int i = 0; i < 5; i++) {
//		cin >> arr[i];
//	}
//	int sum = 0;
//	for (int i = 0; i < 5; i++) {
//		if (arr[i] < 40)
//			sum += 40;
//		else
//			sum += arr[i];
//	}
//	cout << sum / 5 << endl;
//}