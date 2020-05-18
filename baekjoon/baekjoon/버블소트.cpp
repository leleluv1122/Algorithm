//#include <iostream>
//using namespace std;
//#define MAX 500000
//int n;
//int A[MAX];
//int B[MAX];
//long long bubble(int start, int end) {
//	if (start == end) return 0;
//	int mid = (start + end) / 2;
//
//	long long ans = bubble(start, mid) + bubble(mid + 1, end);
//
//	int i = start;
//	int j = mid + 1;
//	int k = 0;
//
//	while (i <= mid || j <= end) {
//		if (i <= mid && (j > end || A[i] <= A[j]))
//			B[k++] = A[i++];
//		else {
//			ans += (long long)(mid - i + 1);
//			B[k++] = A[j++];
//		}
//	}
//	for (int i = start; i <= end; i++) {
//		A[i] = B[i - start];
//	}
//	return ans;
//}
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin.tie(0);
//	cin >> n;
//	for (int i = 0; i < n; i++) cin >> A[i];
//	long long ans = bubble(0, n - 1);
//	cout << ans;
//}


//#include <iostream>
//#include <vector>
//#define endl "\n"
//using namespace std;
//
//long long result = 0;
//
//long long bubble(vector<int> &v, int start, int end) {
//	int mid = (start + end) / 2;
//	int left = start;
//	int right = mid + 1;
//	vector<int> t;
//
//	if (start == end)
//		return;
//
//	bubble(v, start, mid);
//	bubble(v, mid + 1, end);
//
//	while (left <= mid && right <= end) {
//		if (v[left] <= v[right])
//			t.push_back(v[left++]);
//		else {
//			t.push_back(v[right++]);
//			result += (mid + 1 - left);
//		}
//	}
//	while (left <= mid)
//		t.push_back(v[left++]);
//	while (right <= end)
//		t.push_back(v[right++]);
//	for (int i = start, j = 0; i <= end; ++i, ++j)
//		v[i] = t[j];
//}
//
//int main() {
//	int N;
//	ios_base::sync_with_stdio(0);
//	cin.tie(0);
//	vector<int> v;
//	cin >> N;
//	for (int i = 0; i < N; i++) {
//		int a; cin >> a;
//		v.push_back(a);
//	}
//	bubble(v, 0, N - 1);
//	cout << result << endl;
//}


//#include <iostream>
//#define endl "\n"
//using namespace std;
//const int MAX = 500000;
//int arr[MAX];
//int N;
//int cnt = 0;
//
//void swap(int a, int b) {
//	int t = arr[a];
//	arr[a] = arr[b];
//	arr[b] = t;
//	cnt++;
//}
//
//void bubble() {
//	for (int i = 0; i < N - 1; i++) 
//		for (int j = 0; j < N; j++) 
//			if (arr[i] > arr[j]) 
//				swap(i, j);
//}
//
//int main() {
//	ios_base::sync_with_stdio(0);
//	cin.tie(0);
//	cin >> N;
//	for (int i = 0; i < N; i++)
//		cin >> arr[i];
//	bubble();
//	cout << cnt << endl;
//}