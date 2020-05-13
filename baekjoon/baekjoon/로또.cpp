//#include <iostream>
//using namespace std;
//const int MAX = 6;
//int k;
//int arr[MAX];
//int v[13];
//
//void lotto(int a, int b) {
//	if (b == MAX) {
//		for (int i = 0; i < MAX; i++) 
//			cout << arr[i] << " ";
//		cout << endl;
//		return;
//	}
//	
//	for (int i = a; i < k; i++) {
//		arr[b] = v[i];
//		lotto(i + 1, b + 1);
//	}
//}
//
//int main() {
//
//	while (1) {
//		cin >> k;
//		if (k == 0)
//			break;
//
//		for (int i = 0; i < k; i++)
//			cin >> v[i];
//		lotto(0, 0);
//		cout << endl;
//	}
//}


//#include <iostream>
//using namespace std;
//const int MAX = 6;
//int k;
//int v[MAX];
//int arr[13];
//void lotto(int a, int b) { //arr,v
//	if (b == MAX) {
//		for (int i = 0; i < MAX; i++)
//			cout << v[i] << " ";
//		cout << endl;
//		return;
//	}
//	for (int i = a; i < k; i++) {
//		v[b] = arr[i];
//		lotto(i + 1, b + 1);
//	}
//}
//int main() {
//	while (1) {
//		cin >> k;
//		if (k == 0)
//			break;
//		for (int i = 0; i < k; i++)
//			cin >> arr[i];
//		lotto(0, 0);
//		cout << endl;
//	}
//}