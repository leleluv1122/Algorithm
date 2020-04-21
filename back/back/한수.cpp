//#include <iostream>
//using namespace std;
//int N;
//int hansu()
//{
//	int cnt = 0;
//	int d[4];
//	for (int i = 1; i <= N; i++) {
//		bool h = true;
//		int idx = 0;
//		int c = i;
//		while (c) {
//			d[idx++] = c % 10;
//			c /= 10;
//		}
//		if (idx > 1) {
//			int diff = d[1] - d[0];
//			for (int i = 2; i < idx; i++) {
//				if (d[i] - d[i - 1] != diff) {
//					h = false;
//					break;
//				}
//			}
//		}
//		if (h)
//			cnt++;
//	}
//	return cnt;
//}
//int main()
//{
//	cin >> N;
//
//	cout << hansu() << endl;
//}


//#include <iostream>
//using namespace std;
//int N;
//int hansu()
//{
//	int cnt = 0;
//	int d[4];
//	for (int i = 1; i <= N; i++)
//	{
//		bool h = true;
//		int idx = 0;
//		int c = i;
//		while (c) {
//			d[idx++] = c % 10;
//			c /= 10;
//		}
//		if (idx > 1) {
//			int diff = d[1] - d[0];
//			for (int i = 2; i < idx; i++) {
//				if (d[i] - d[i - 1] != diff) {
//					h = false;
//					break;
//				}
//			}
//		}
//		if (h) // true
//			cnt++;
//	}
//	return cnt;
//}
//int main()
//{
//	cin >> N;
//
//	cout << hansu() << endl;
//}

