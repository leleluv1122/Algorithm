//#include <iostream>
//using namespace std;
//int main()
//{
//	int C;
//	cin >> C;
//
//	while (C > 0) {
//		int N; cin >> N;
//		int arr[1001];
//		int sum = 0;
//		for (int i = 0; i < N; i++) {
//			cin >> arr[i];
//			sum += arr[i];
//		}
//		int avg = sum / N;
//		int n = 0;
//		for (int i = 0; i < N; i++) {
//			if (avg < arr[i])
//				n++;
//		}
//
//		double result = ((double)n / N) * 100;
//
//		printf("%.3f%%\n", result);
//		C--;
//	}
//}