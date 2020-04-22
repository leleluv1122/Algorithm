


//#include <iostream>
//using namespace std;
//int main()
//{
//	int N;
//	cin >> N;
//	int cnt = 0;
//	int result = 0;
//
//	for (int i = N / 5; i >= 0; i--) {
//		if (N % 5 == 0)
//		{
//			result = N / 5;
//			cnt = 1;
//			break;
//		}
//		else {
//			int k = N - (5 * i);
//			for (int j = k / 3; j >= 0; j--) {
//				if (k % 3 == 0) {
//					result = i + k / 3;
//					cnt = 1;
//					break;
//				}
//				else
//					result = -1;
//			}
//		}
//		if (cnt == 1)
//			break;
//	}
//	cout << result << endl;
//}




//#include <iostream>
//using namespace std;
//int main()
//{
//	int N;
//	cin >> N;
//	int result = 0;
//	int c = 0;
//	for (int i = N / 5; i >= 0; i--)
//	{
//		if (N % 5 == 0) {
//			result = N / 5;
//			c = 1;
//			break;
//		}
//		else {
//			int k = N - i * 5;
//			for (int j = k / 3; j >= 0; j--) {
//				if (k % 3 == 0) {
//					result = i + k / 3;
//					c = 1;
//					break;
//				}
//				else {
//					result = -1;
//				}
//			}
//		}
//		if (c == 1)
//			break;
//	}
//	cout << result << endl;
//}