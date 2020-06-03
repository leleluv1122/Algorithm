//#include <iostream>
//#define MAX 301
//#define endl "\n"
//using namespace std;
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(0); 
//	cout.tie(0);
//
//	int N, M;
//	cin >> N >> M;
//
//	int DP[MAX];
//	DP[0] = N - 1;
//
//	for (int i = 1; i < M; i++)
//		DP[i] = DP[i - 1] + N;
//
//	cout << DP[M - 1] << endl;
//}


#include <iostream>
using namespace std;
int N, M;

int main() {
	cin >> N >> M;

	cout << N * M - 1 << "\n";
}