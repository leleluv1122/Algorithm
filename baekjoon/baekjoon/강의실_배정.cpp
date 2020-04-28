///못함

//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//vector<pair<int, int>> arr;
//vector<int> d;
//int idx = 0;
//int cnt = 0;
//int n = 0;
//void kang(int i) {
//	while (1) {
//		if (d[n] <= arr[i].first) {
//			d[n] = arr[i].second;
//			if (cnt < n)
//				cnt = n;
//			break;
//		}
//		n++;
//	}
//}
//int main()
//{
//	int N; scanf_s("%d", &N);
//	arr.resize(N); d.resize(N);
//	for (int i = 0; i < N; i++) {
//		scanf_s("%d %d", &arr[i].first, &arr[i].second);
//		d[i] = 0;
//	}
//	sort(arr.begin(), arr.end());
//
//	for (int i = 0; i < N; i++) {
//		n = 0;
//		kang(i);
//		
//	}
//	printf("%d", cnt + 1);
//}


//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//int main()
//{
//	vector<pair<int, int>> arr;
//	vector<int> d;
//	int N; cin >> N;
//	arr.resize(N); d.resize(N);
//	for (int i = 0; i < N; i++) {
//		cin >> arr[i].first >> arr[i].second;
//		d[i] = 0;
//	}
//	sort(arr.begin(), arr.end());
//
//	int idx = 0;
//	int cnt = 0;
//	for (int i = 0; i < N; i++) {
//		for (int j = 0; j < N; j++) {
//			if (d[j] <= arr[i].first) {
//				d[j] = arr[i].second;
//				if (cnt < j)
//					cnt = j;
//				break;
//			}
//		}
//	}
//	printf("%d", cnt + 1);
//	/*cout << cnt + 1 << endl;*/
//}


//for (int i = 0; i < N; i++) {
//	cout << arr[i].first << " " << arr[i].second << endl;
//}
//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//pair<int, int> arr[200]; //200000로 고치기
//int d[200];
//int main()
//{
//	int N; cin >> N;
//	for (int i = 0; i < N; i++) {
//		cin >> arr[i].first >> arr[i].second;
//	}
//	sort(arr, arr + N);
//	int idx = 0;
//	int cnt = 0;
//
//	d[idx] = arr[0].second;
//	cnt++;
//	for (int i = 1; i < N; i++) {
//		for (int j = 0; j < N; j++) {
//			if (d[j] <= arr[i].first)
//			{
//				d[j] = arr[i].second;
//				break;
//			}
//			else {
//				d[++idx] = arr[i].second; cnt++;
//				break;
//			}
//		}
//	}
//	cout << cnt << endl;
//}

//for (int i = 0; i < N; i++) {
//	cout << arr[i].first << " " << arr[i].second << endl;
//}