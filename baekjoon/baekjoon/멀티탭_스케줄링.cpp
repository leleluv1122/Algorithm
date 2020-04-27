//#include <iostream>
//using namespace std;
//int main()
//{
//	int N, K; cin >> N >> K;
//	pair<int, int> arr[100];
//	int h[100] = { 0 };
//	for (int i = 0; i < K; i++)
//		cin >> h[i];
//	for (int i = 0; i < K; i++) {
//		if (!arr[h[i]].first) {
//			arr[h[i]].first = h[i];
//			arr[h[i]].second = 1;
//		}
//		else {
//			arr[h[i]].second++;
//		}
//	}
//	int hrr[100] = { 0 };
//	for (int i = 0; i < N; i++) {
//		hrr[i] = h[i];
//	}
//
//	int cnt = 0;
//	int a = 0, idx = 0, t = 100;
//
//	for (int i = N; i < K; i++) {
//		a = 0, idx = 0, t = 100;
//		for (int j = 0; j < N; j++) {
//			if (hrr[j] == h[i])
//				a = 1;
//		}
//		if (a == 0) {
//			for (int j = 0; j < N; j++) {
//				if (t > arr[hrr[j]].second) {
//					t = arr[hrr[j]].second;
//					idx = j;
//				}
//			}
//			hrr[idx] = h[i];
//			cnt++;
//		}
//	}
//
//	cout << cnt << endl;
//}


//#include <iostream>
//#include <algorithm>
//using namespace std;
//const int MAX = 100 + 1;
//int N, K;
//int schedule[MAX], plug[MAX];
//int main()
//{
//	ios_base::sync_with_stdio(0);
//	cin.tie(0);
//	cin >> N >> K;
//	for (int i = 0; i < K; i++)
//		cin >> schedule[i];
//	int result = 0;
//	for (int i = 0; i < K; i++)
//	{
//		bool pluggedIn = false;
//		for (int j = 0; j < N; j++)
//			if (plug[j] == schedule[i])
//			{
//				pluggedIn = true;
//				break;
//			}
//		if (pluggedIn)
//			continue;
//		for (int j = 0; j < N; j++)
//			if (!plug[j])
//			{
//				plug[j] = schedule[i];
//				pluggedIn = true;
//				break;
//			}
//		if (pluggedIn)
//			continue;
//
//		int idx, deviceIdx = -1;
//		for (int j = 0; j < N; j++)
//		{
//			int lastIdx = 0;
//			for (int k = i + 1; k < K; k++)
//			{
//				if (plug[j] == schedule[k])
//					break;
//				lastIdx++;
//			}
//			if (lastIdx > deviceIdx)
//			{
//				idx = j;
//				deviceIdx = lastIdx;
//			}
//		}
//		result++;
//		plug[idx] = schedule[i];
//	}
//	cout << result << "\n";
//	return 0;
//}