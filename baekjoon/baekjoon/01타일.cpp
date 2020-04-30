//#include <iostream>
//using namespace std;
//const int MOD = 15746;
//const int MAX = 1000000; 
//int N;
//int d[MAX];
//int kongeal()
//{
//	d[1] = 1;
//	d[2] = 2;
//	for (int i = 3; i <= N; i++)
//		d[i] = (d[i - 2] + d[i - 1]) % MOD;
//	return d[N] % MOD;
//}
//int main()
//{
//	cin >> N;
//	if (N > MAX)
//		exit(-1);
//	
//	cout << kongeal() << endl;
//}