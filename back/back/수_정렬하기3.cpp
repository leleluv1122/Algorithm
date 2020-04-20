//#include <iostream>
//using namespace std;
//int N;
//int arr[10001];
//int main() {
//	cin >> N;
//	for (int i = 0; i < N; i++) {
//		int num;
//		scanf_s("%d", &num);
//		arr[num]++;
//	}
//	for (int i = 1; i < 10001; i++) {
//		int idx = arr[i];
//		while (idx--)
//			printf("%d\n", i);
//	}
//}


//#include <iostream>
//using namespace std;
//int N;
//int arr[10001];
//int main()
//{
//	cin >> N;
//	for (int i = 0; i < N; i++) {
//		int num;
//		scanf_s("%d", &num);
//		arr[num]++;
//	}
//	for (int i = 1; i < 10001; i++)
//		arr[i] += arr[i - 1]; // ÃÑ ÇÕ°è
//	for (int i = 1; i < 10001; i++) {
//		int idx = arr[i] - arr[i - 1]; // i°¡ ÀÔ·ÂµÈ È½¼ö
//		while (idx--)
//			printf("%d\n", i);
//	}
//}


//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//int main()
//{
//	int N;
//	cin >> N;
//	vector<int> v;
//
//	for (int i = 0; i < N; i++) {
//		int a;  cin >> a;
//		v.push_back(a);
//	}
//	sort(v.begin(), v.end());
//	for (int i = 0; i < N; i++) {
//		cout << v[i] << "\n";
//	}
//}