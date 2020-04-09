//#include <stdio.h>
//
//int main()
//{
//	int N, K;
//	int i;
//	int arr[11];
//	int cnt = 0;
//
//	scanf_s("%d %d", &N, &K);
//
//	for (i = 0; i < N; i++)
//	{
//		scanf_s("%d", &arr[i]);
//	}
//
//	for (i = N - 1; i >= 0; i--)
//	{
//		if (K - arr[i] >= 0)
//		{
//			K = K - arr[i];
//			cnt++;
//			i++;
//		}
//
//	}
//
//	printf("%d", cnt);
//	return 0;
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
//		if (K >= arr[i])
//		{
//			a = K / arr[i];
//			cnt += a;
//			K = K - arr[i] * a;
//		}
//	}
//	printf("%d\n", cnt);
//}