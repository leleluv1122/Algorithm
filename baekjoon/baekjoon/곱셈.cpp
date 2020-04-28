//#include <iostream>
//using namespace std;
//long long kop(int A, int B, int C) {
//	if (B == 1)
//		return A;
//	else {
//		long long t = kop(A, B / 2, C);
//		if (B % 2)
//			return ((t * t) % C * A) % C;
//		else
//			return (t * t) % C;
//	}
//}
//int main()
//{
//	int A, B, C;
//
//	cin >> A >> B >> C;
//	cout << kop(A % C, B, C) << endl;
//}