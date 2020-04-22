//#include <iostream>
//#include <vector>
//using namespace std;
//int N;
//vector<pair<int, int>> v;
//void Hanoi(int num, int from, int by, int to)
//{
//	if (num == 1)
//		v.push_back({ from, to });
//	else
//	{
//		Hanoi(num - 1, from, to, by);
//		v.push_back({ from, to });
//		Hanoi(num - 1, by, from, to);
//	}
//}
//int main()
//{
//	cin >> N;
//	Hanoi(N, 1, 2, 3);
//	cout << v.size() << "\n";
//	for (int i = 0; i < v.size(); i++)
//		cout << v[i].first << " " << v[i].second << "\n";
//
//}


//#include <iostream>
//using namespace std;
//void star(int i, int j, int N) {
//	if ((i / N) % 3 == 1 && (j / N) % 3 == 1)
//		cout << " ";
//	else {
//		if (N / 3 == 0)
//			cout << "*";
//		else
//			star(i, j, N / 3);
//	}
//}
//int main()
//{
//	int N;
//	cin >> N;
//	for (int i = 0; i < N; i++) {
//		for (int j = 0; j < N; j++) {
//			star(i, j, N);
//		}
//		cout << endl;
//	}
//}


//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int N;
//	cin >> N;
//	for (int i = 0; i < N; i++) {
//		for (int j = 0; j < N; j++) {
//			if (i % 3 == 1 && j % 3 == 1)
//				cout << " ";
//			else if (i >= N / 3 && i < (N / 3) * 2 && j >= N / 3 && j < (N / 3) * 2)
//				cout << " ";
//			else
//				cout << "*";
//		}
//		cout << endl;
//	}
//}


//#include <iostream>
//using namespace std;
//int arr[21];
//int fibo(int n) {
//	arr[0] = 0;
//	arr[1] = 1;
//	for (int i = 2; i <= n; i++) {
//		arr[i] = arr[i - 1] + arr[i - 2];
//	}
//	return arr[n];
//}
//int main()
//{
//	int n; cin >> n;
//	cout << fibo(n) << endl;
//}


//#include <iostream>
//using namespace std;
//int factorial(int N) {
//	if (N > 1) {
//		return N * factorial(N - 1);
//	}
//	else if (N == 1) {
//		return 1;
//	}
//}
//int main()
//{
//	int N;
//	cin >> N;
//	cout << factorial(N) << endl;
//}


//#include <iostream>
//#include <vector>
//using namespace std;
//struct sangdam {
//	int day;
//	int money;
//};
//int d[15];
//vector<sangdam> v;
//int N;
//int work(int day)
//{
//	if (day == N + 1)
//		return 0;
//
//	sangdam result = v[day];
//}
//int main()
//{
//	cin >> N;
//	for (int i = 0 ; i < N; i++) {
//		sangdam a;
//		cin >> a.day >> a.money;
//		v.push_back(a);
//	}
//
//	for (int i = 0; i < N; i++) {
//		if (i + v[i].day > N)
//			continue;
//		else
//		{
//			work(i);
//		}
//	}
//}