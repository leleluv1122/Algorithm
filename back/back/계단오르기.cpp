//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//int n;
//int s[300];
//int c[300];
//
//int stair() {
//	c[0] = s[0];
//	c[1] = s[0] + s[1];
//	c[2] = max(s[0] + s[2], s[1] + s[2]);
//
//	for (int i = 3; i < n; ++i) {
//		c[i] = max(s[i] + c[i - 2], c[i - 3] + s[i - 1] + s[i]);
//	}
//	return c[n - 1];
//}
//
//int main() {
//	cin >> n;
//
//	for (int i = 0; i < n; ++i)
//		cin >> s[i];
//
//	cout << stair() << endl;
//}



















//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//int c[300];
//int arr[300];
//int n;
//
//int maxSum()
//{
//	c[0] = arr[0];
//	c[1] = arr[0] + arr[1];
//	c[2] = max(arr[0] + arr[2], arr[1] + arr[2]);
//
//	for (int i = 3; i < n; i++)
//		c[i] = max(c[i - 2] + arr[i], arr[i - 1] + arr[i] + c[i - 3]);
//
//	return c[n - 1];
//}
//int main()
//{
//	cin >> n;
//	for (int i = 0; i < n; i++)
//		cin >> arr[i];
//	cout << maxSum() << endl;
//}


//#include <iostream>
//#include <algorithm>
//using namespace std;
//int n;
//int arr[301] = { 0 };
//int main() {
//	cin >> n;
//
//	for (int i = 1; i <= n; ++i) {
//		cin >> arr[i];
//	}
//	int a = 1;
//	int sum = 0;
//	while (a <= n) {
//		sum += arr[a];
//		if (arr[a + 1] > arr[a + 2]) {
//			a++;
//		}
//		else {
//			a = a + 2;
//		}
//	}
//
//	cout << sum << endl;
//}