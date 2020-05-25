// N = x + (x+1) + (x+2) ... (x+(L-1))
//   = L*x + (1+2+...+L-1)
//   = L*x + t
// x = (N-t)/L
//#include <iostream>
//using namespace std;
//int main(void)
//{
//	ios_base::sync_with_stdio(0);
//	cin.tie(0);
//	int N, L;
//	cin >> N >> L;
//	for (int i = L; i <= 100; i++)
//	{
//		int temp = N - i * (i + 1) / 2;
//		if (temp % i == 0)
//		{
//			int j = temp / i + 1;
//			if (j >= 0)
//			{
//				for (int k = 0; k < i; k++)
//				{
//					cout << k + j << " ";
//				}
//				cout << "\n";
//				return 0;
//			}
//		}
//	}
//	cout << -1 << "\n";
//	return 0;
//}