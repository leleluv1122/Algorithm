//#include <iostream>
//using namespace std;
//int arr[101];
//int gcd(int a, int b) {
//	if (b == 0)
//		return a;
//	return gcd(b, a % b);
//}
//int main() {
//	int n;
//	cin >> n;
//	for (int i = 0; i < n; i++)
//		cin >> arr[i];
//	int g;
//	for (int i = 1; i < n; i++) {
//		if (arr[0] > arr[i])
//			g = gcd(arr[0], arr[i]);
//		else
//			g = gcd(arr[i], arr[0]);
//		cout << arr[0] / g << "/" << arr[i] / g << "\n";
//	}
//}