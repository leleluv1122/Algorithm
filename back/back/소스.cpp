/////15954 인형들
//#include <cassert>
//#include <cstdio>
//#include <math.h>
//#include <iostream>
//#include <algorithm>
//using namespace std;
//int N, K;
//int a[500];
//int main()
//{
//	scanf_s("%d %d", &N, &K);
//	for (int i = 0; i < N; ++i) {
//		scanf_s("%d", &a[i]);
//	}
//	double result = 987654321;
//	for (int i = 0; i < N - K + 1; ++i) {
//		for (int k = K; k < N - i + 1; ++k) {
//			int sum = 0;
//			for (int j = i; j < i + k; ++j) {
//				sum += a[j];
//			}
//			double m = sum / (double)k;
//			double dsum = 0;
//			for (int j = i; j < i + k; ++j) {
//				dsum += (a[j] - m) * (a[j] - m);
//			}
//			result = min(result, sqrt(dsum / (double)k));
//		}
//	}
//	printf("%.11lf\n", result);
//	return 0;
//}




///////////score (3,3)까지 가는데 걸리는 최소거리(숫자합)///////
//#include <iostream>
//#include <algorithm>
//using namespace std;
//static int arr[4][4]{ { 6, 7, 12, 5 },
//				{ 5, 3, 11, 18 }, 
//				{ 7, 17, 3, 3 }, 
//				{ 8, 10, 14, 9 } }; 
//static int sum[4][4];
//
//int score(int r, int c) {
//	int beforescore = 0;
//
//	if (r == 0 && c == 0)
//		beforescore = 0;
//	else if (r == 0)
//		beforescore = score(r, c - 1);
//	else if (c == 0)
//		beforescore = score(r - 1, c);
//	else
//		beforescore = min(score(r - 1, c), score(r, c - 1));
//	
//	sum[r][c] = beforescore + arr[r][c];
//	return sum[r][c];
//}
//int main() {
//	cout << score(3, 3) << endl;
//}

//#include <stdio.h> 
//#include <algorithm> 
//using namespace std;
//typedef unsigned char byte; 
//byte a[4][4] = { { 6, 7, 12, 5 }, 
//				{ 5, 3, 11, 18 }, 
//				{ 7, 17, 3, 3 }, 
//				{ 8, 10, 14, 9 } }; 
//byte sum[4][4]; 
//int score(int r, int c)
//{ 
//	printf("점수(%d, %d) ", r, c); 
//	if (sum[r][c] != 0) 
//		return sum[r][c]; 
//	
//	int beforescore = 0;
//
//	if (r == 0 && c == 0) 
//		beforescore = 0;
//	else if (r == 0) 
//		beforescore = score(r, c - 1);
//	else if (c == 0) 
//		beforescore = score(r - 1, c);
//	else 
//		beforescore = min(score(r, c - 1), score(r - 1, c));
//	
//	sum[r][c] = beforescore + a[r][c]; 
//
//	return sum[r][c]; 
//} 
//int main() { 
//	printf("%d\n", score(3, 3));
//}

//#include <iostream>
//#include <algorithm>
//using namespace std;
//int main() {
//	int X;
//	cin >> X;
//	int d[1000001];
//	d[1] = 0;
//
//	for (int i = 2; i <= X; ++i) {
//		d[i] = d[i - 1] + 1;
//		if (i % 2 == 0) {
//			d[i] = min(d[i], d[i / 2] + 1);
//		}
//		if (i % 3 == 0) {
//			d[i] = min(d[i], d[i / 3] + 1);
//		}
//	}
//	cout << d[X] << endl;
//}



//#include <iostream>
//#include <algorithm>
//using namespace std;
//int main() {
//	int X;
//	cin >> X;
//	int d[10000];
//	d[1] = 0;
//
//	for (int i = 2; i <= X; ++i) {
//		d[i] = d[i - 1] + 1;
//		if (i % 2 == 0) {
//			d[i] = min(d[i / 2] + 1, d[i]);
//		}
//		if (i % 3 == 0) {
//			d[i] = min(d[i / 3] + 1, d[i]);
//		}
//	}
//	cout << d[X] << endl;
//}


//#include <iostream>
//#include <string>
//using namespace std;
//int main() {
//	string sik;
//	int result = 0;
//	bool minus = false;
//	string t = "";
//
//	cin >> sik;
//
//	for (int i = 0; i <= sik.size(); ++i) {
//		if (sik[i] == '+' || sik[i] == '-' || sik[i] == '\0') {
//			if (minus)
//				result -= stoi(t);
//			else
//				result += stoi(t);
//			t = "";
//			if (sik[i] == '-')
//				minus = true;
//			continue;
//		}
//		t += sik[i];
//	}
//	cout << result << endl;
//}




//#include <iostream>
//#include <string>
//using namespace std;
//int main() {
//	string sik;
//	int r = 0;
//	string t = "";
//	bool minus = false;
//
//	cin >> sik;
//
//	for (int i = 0; i <= sik.size(); ++i) {
//		if (sik[i] == '+' || sik[i] == '-'|| sik[i] == '\0') {
//			if (minus)
//				r -= stoi(t);
//			else
//				r += stoi(t);
//			t = "";
//			if (sik[i] == '-')
//				minus = true;
//			continue;
//		}
//		t += sik[i];
//	}
//	cout << r << endl;
//}


//#include <stdio.h>
//int main() {
//	int N, K;
//
//	scanf_s("%d %d", &N, &K);
//
//	int* arr = new int[N]();
//	int a;
//	int cnt = 0;
//
//	for (int i = 0; i < N; ++i) {
//		scanf_s("%d", &arr[i]);
//	}
//	for (int i = N - 1; i >= 0; --i) {
//		if (K > arr[i])
//		{
//			a = K / arr[i];
//			cnt += a;
//			K = K - arr[i] * a;
//		}
//	}
//	printf("%d\n", cnt);
//}

//#include <stdio.h>
//#include <stdlib.h>
//
//void swap(int& a, int& b) {
//	int t = a;
//	a = b;
//	b = t;
//}
//
//int main() {
//	int n;
//	int sum = 0;
//
//	scanf_s("%d", &n);
//	int* arr = new int[n]();
//	int* arr2 = new int[n]();
//
//
//
//	for (int i = 0; i < n; ++i) {
//		scanf_s("%d", &arr[i]);
//	}
//
//	for (int i = 0; i < n - 1; ++i) {
//		for (int j = i; j < n; ++j) {
//			if (arr[i] > arr[j]) {
//				swap(arr[i], arr[j]);
//			}
//		}
//	}
//
//	/*for (int i = 0; i < n; ++i) {
//		printf("%d ", arr[i]);
//	}*/
//
//	/*printf("\n");*/
//
//	for (int i = 0; i < n; ++i) {
//		for (int j = 0; j <= i; ++j) {
//			arr2[i] += arr[j];
//		}
//	}
//
//	for (int i = 0; i < n; ++i) {
//		sum += arr2[i];
//	}
//
//	printf("%d", sum);
//
//	delete[] arr;
//	delete[] arr2;
//}

//#include <stdio.h>
//#include <stdlib.h>
//
//void swap(int& a, int& b) {
//	int t = a;
//	a = b;
//	b = t;
//}
//
//int main() {
//	int n;
//	int sum = 0;
//
//	scanf_s("%d", &n);
//	int* arr = new int[n]();
//	int* arr2 = new int[n]();
//
//	
//
//	for (int i = 0; i < n; ++i) {
//		scanf_s("%d", &arr[i]);
//	}
//
//	for (int i = 0; i < n-1; ++i) {
//		for (int j = i; j < n; ++j) {
//			if (arr[i] > arr[j]) {
//				swap(arr[i], arr[j]);
//			}
//		}
//	}
//
//	/*for (int i = 0; i < n; ++i) {
//		printf("%d ", arr[i]);
//	}*/
//
//	/*printf("\n");*/
//
//	for (int i = 0; i < n; ++i) {
//		for (int j = 0; j <= i; ++j) {
//			arr2[i] += arr[j];
//		}
//	}
//
//	for (int i = 0; i < n; ++i) {
//		sum += arr2[i];
//	}
//
//	printf("%d", sum);
//
//	delete[] arr;
//	delete[] arr2;
//}


//#include <stdio.h>
//#include <stdlib.h>
//int main() {
//	int n, t;
//	scanf_s("%d", &n);
//
//	int a[1000] = {  };
//
//	for (int i = 1; i <= n; ++i) {
//		scanf_s("%d", &a[i]);
//	}
//
//	int b = n;
//
//	for (int i = 1; i <= n; ++i) {
//		if (a[i] < b)
//			b = a[i];
//	}
//
//	printf("%d", b);
//}

//#include <stdio.h>
//#include <stdlib.h>
//int main() {
//	int n;
//	int a[1000] = {};
//	scanf_s("%d", &n);
//
//	for (int i = 1; i <= n; ++i) {
//		scanf_s("%d", &a[i]);
//	}
//
//	for (int i = n; i >= 1; --i) {
//		printf("%d ", a[i]);
//	}
//}


//#include <stdio.h>
//int main() {
//	int n, t;
//	scanf_s("%d", &n);
//
//	int a[24] = {  };
//	
//	for (int i = 1; i <= n; ++i) {
//		scanf_s("%d", &t);
//		a[t] = a[t] + 1;
//	}
//
//	for (int i = 1; i <= 23; ++i) {
//		printf("%d ", a[i]);
//	}
//}

//#include <stdio.h>
//int main() {
//	int a, b, c;
//
//	scanf_s("%d %d %d", &a, &b, &c);
//
//	for (int i = 2;; ++i) {
//		if (i % a == 0 && i % b == 0 && i % c == 0) {
//			printf("%d", i);
//			break;
//		}
//	}
//}

//#include <stdio.h>
//int main() {
//	int a, b, c;
//
//	scanf_s("%d %d %d", &a, &b, &c);
//
//	for (int i = 2;; ++i) {
//		if (i % a == 0 && i % b == 0 && i % c == 0) {
//			printf("%d", i);
//			break;
//		}
//	}
//}

//#include <stdio.h>
//int main() {
//	long long a, m, d, n;
//	scanf_s("%lli %lli %lli %lli", &a, &m, &d, &n);
//	
//
//	for (int i = 1; i < n; ++i) {
//		a = a * m + d;
//	}
//	printf("%lli", a);
//}

//#include <stdio.h>
//int main() {
//	long long a, r, n;
//	scanf_s("%lli %lli %lli", &a, &r, &n);
//	for (int i = 1; i < n ; ++i) {
//		a *= r;
//	}
//	printf("%lli", a);
//}

//#include <stdio.h>
//int main() {
//	int a, d, n;
//	scanf_s("%d %d %d", &a, &d, &n);
//	int b = a;
//	for (int i = 1; ; i++) {
//		if (i == n)
//			break; 
//		b += d;
//		
//	}
//	printf("%d", b);
//}

//#include <stdio.h>
//int main() {
//	int a;
//	scanf_s("%d", &a);
//	for (int i = 1; i <= a; i++) {
//		if (i % 3 == 0) {
//			continue;
//		}
//		printf("%d ", i);
//	}
//}

//#include <stdio.h>
//int main() {
//	int sum = 0;
//	int a;
//	scanf_s("%d", &a);
//	for (int i = 1; ; i++) {
//		sum += i;
//		if (sum >= a)
//			break;
//	}
//	printf("%d", sum);
//}

//#include <stdio.h>
//
//int main() {
//	int a, b, c;
//	scanf_s("%d %d %d", &a, &b, &c);
//	if (a % 2 == 0)
//		printf("%d\n", a);
//	if (b % 2 == 0)
//		printf("%d\n", b);
//	if (c % 2 == 0)
//		printf("%d\n", c);
//}

//#include <iostream>
//using namespace std;
//
//int main() {
//	cout << "\"C:\\Download\\hello.cpp\"" << endl;
//}

//#include <iostream>
//using namespace std;
//
//int main() {
//	cout << "\"!@#$%^&*()\"" << endl;
//}

//#include <iostream>
//using namespace std;
//
//int main() {
//	cout << "Hello World" << endl;
//}

//#include <iostream>
//using namespace std;
//
//int main() {
//	cout << "Hello" << endl;
//}

//#include <stdio.h>
//int main() {
//	int n = 0; //가진돈
//	int m = 0;
//
//	scanf_s("%d %d", &n, &m);
//
//	printf("%d\n", n / m);
//	printf("%d\n", n % m);
//
//}


//#include <cstdio>
//
//int main() {
//
//	int t, i, j, x, y, sum, n, m, k;
//	int arr[301][301] = { 0, };
//	int dp[301][301] = { 0, };
//
//	scanf_s("%d %d", &n, &m);
//
//	for (i = 1; i <= n; i++) {
//		for (j = 1; j <= m; j++) {
//			scanf_s("%d", &arr[i][j]);
//			dp[i][j] = dp[i - 1][j] + dp[i][j - 1] + arr[i][j] - dp[i - 1][j - 1];
//		}
//	}
//
//	scanf_s("%d", &k);
//
//	for (t = 0; t < k; t++) {
//		scanf_s("%d %d %d %d", &x, &y, &i, &j);
//		printf("%d\n", dp[i][j] - dp[i][y - 1] - dp[x - 1][j] + dp[x - 1][y - 1]);
//	}
//
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//int main() {
//	int x = 0;
//	int y = 0;
//
//	scanf_s("%d", &x);
//	scanf_s("%d", &y);
//
//	int** arr = NULL;
//
//	arr = (int**)malloc(sizeof(int*) * x);
//	for (int i = 0; i < x; ++i)
//		arr[i] = (int*)malloc(sizeof(int) * y);
//
//	arr[0][0] = 0;
//
//	for (int i = 0; i < x; ++i) {
//		for (int j = 0; j < y; ++j) {
//			scanf_s("%d", &arr[i][j]);
//		}
//	}
//
//	int answer = 0;
//
//	for (int i = 0; i < x; ++i) {
//		for (int j = 0; j < y; ++j) {
//			answer += arr[i][j];
//		}
//	}
//
//	for (int i = 0; i < x; ++i)
//		free(arr[i]);
//
//
//}