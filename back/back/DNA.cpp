//#include <iostream>
//#include <string>
//using namespace std;
//int N, l;
//int arr[50][4]; // {A, C, G, T}
//int main()
//{
//	cin >> N >> l;
//	for(int i = 0; i < N; i++)
//	{
//		string t;
//		cin >> t;
//		for (int j = 0; j < l; j++)
//			switch (t[j])
//			{
//			case 'A':
//				arr[j][0]++;
//				break;
//			case 'C':
//				arr[j][1]++;
//				break;
//			case 'G':
//				arr[j][2]++;
//				break;
//			case 'T':
//				arr[j][3]++;
//				break;
//			}
//	}
//	int result = 0;
//	string DNA = "";
//	for (int i = 0; i < l; i++)
//	{
//		int idx = 0, cnt = 0;
//		for (int j = 0; j < 4; j++) {
//			if (arr[i][j] > cnt)
//			{
//				idx = j;
//				cnt = arr[i][j];
//			}
//		}
//		result += (N - cnt);
//		switch (idx)
//		{
//		case 0:
//			DNA += 'A';
//			break;
//		case 1:
//			DNA += 'C';
//			break;
//		case 2:
//			DNA += 'G';
//			break;
//		case 3:
//			DNA += 'T';
//			break;
//		}
//	}
//	cout << DNA << endl;
//	cout << result << endl;
//}


//#include <iostream>
//using namespace std;
//int main()
//{
//	int N, l;
//	cin >> N >> l;
//	int arr[50][4]; // 0:A 1:T 2:G 3:C
//
//	for (int i = 0; i < N; ++i) {
//		string t;
//		cin >> t;
//		for (int j = 0; j < l; ++j) {
//			switch(t[j]) {
//				case 'A':
//					arr[j][0]++;
//					break;
//				case 'T':
//					arr[j][1]++;
//					break;
//				case 'G':
//					arr[j][2]++;
//					break;
//				case 'C':
//					arr[j][3]++;
//					break;
//			}
//		}
//	}
//	string result="";
//	int rcnt = 0;
//	for (int i = 0; i < l; ++i) {
//		int idx = 0, cnt = 0;
//		for (int j = 0; j < 4; ++j) {
//			if (arr[i][j] > cnt) {
//				idx = j;
//				cnt = arr[i][j];
//			}
//		}
//
//		rcnt += (N - cnt);
//
//		switch (idx) 
//		{ // 0:A 1:T 2:G 3:C
//			case 0:
//				result += 'A';
//				break;
//			case 1:
//				result += 'T';
//				break;
//			case 2:
//				result += 'G';
//				break;
//			case 3:
//				result += 'C';
//				break;
//		}
//	}
//
//	cout << result << endl;
//
//}