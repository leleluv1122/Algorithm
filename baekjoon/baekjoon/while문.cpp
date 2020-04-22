//#include <iostream>
//using namespace std;
//int main()
//{
//	int N;
//	int cnt = 0;
//	cin >> N;
//
//	if (N < 10)
//		N *= 10;
//
//	int a = N;
//	int b, c;
//
//	while (1) {
//		b = a / 10;
//		c = a % 10;
//		a = c * 10 + (b + c) % 10;
//		cnt++;
//		if (N == a)
//			break;
//	}
//	cout << cnt << endl;
//}


//#include <iostream>
//using namespace std;
//int main()
//{
//	int N;
//	int cnt = 0;
//	cin >> N;
//
//	if (N < 10)
//		N *= 10;
//
//	int a = 0;
//	int b, c;
//
//	while (N != a) {
//		if (cnt == 0)
//			a = N;
//		b = a / 10;
//		c = a % 10;
//		a = c * 10 + (b + c) % 10;
//		cnt++;
//	}
//	cout << cnt << endl;
//}