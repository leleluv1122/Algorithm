//#include <stdio.h>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//int main()
//{
//	int N;
//	scanf_s("%d", &N);
//
//	vector<int> rope;
//
//	for (int i = 0; i < N; ++i) {
//		int r = 0;
//		scanf_s("%d", &r);
//		rope.push_back(r);
//	}
//
//	int c = 0;
//	for (int i = 0; i < N; ++i) {
//		int w = rope[i];
//		for (int j = i + 1; j < N; ++j) {
//			w += rope[i];
//		}
//		c = max(c, w);
//	}
//	printf("%d", c);
//}

//#include <stdio.h>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//int main() 
//{
//	int N;
//	scanf_s("%d", &N);
//
//	vector<int> rope;
//
//	for (int i = 0; i < N; ++i) {
//		int r;
//		scanf_s("%d", &r);
//		rope.push_back(r);
//	}
//	sort(rope.begin(), rope.end());
//	int r = 0;
//	for (int i = 0; i < N; ++i) {
//		int weight = rope[i];
//		for (int k = i + 1; k < N; ++k) {
//			weight += rope[i];
//		}
//		r = max(r, weight);
//	}
//	
//	printf("%d", r);
//}