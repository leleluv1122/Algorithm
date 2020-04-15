//#include <iostream>
//using namespace std;
//int main() {
//	int N;
//	long long arr[91];
//	cin >> N;
//
//	arr[0] = 1, arr[1] = 1;
//	for (int i = 2; i < N; ++i)
//		arr[i] = arr[i - 1] + arr[i - 2];
//
//	cout << arr[N - 1] << endl;
//}




//#include <iostream>
//using namespace std;
//
//int echinsu[91];
//
//int number(int N) {
//	if (N == 1 || N == 2)
//		return 1;
//	else
//		return number(N - 1) + number(N - 2);
//}
//
//int main() {
//	int N;
//	cin >> N;
//
//	cout << number(N) << endl;
//}


//#include <iostream>
//using namespace std;
//int number(int N) {
//	int d;
//	if (N == 1 || N == 2)
//		d = 1;
//	else {
//		for (int i = 3; i <= N; ++i) {
//			d = number(i - 1) + number(i - 2);
//		}
//	}
//	return d;
//}
//int main() {
//	int N;
//	cin >> N;
//
//	cout << number(N) << endl;
//}