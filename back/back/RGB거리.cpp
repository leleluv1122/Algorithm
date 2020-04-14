//#include <iostream>
//#include <algorithm>
//using namespace std;
//int N;
//int dd[3] = { 0 };
//int min() {
//	int rgb[3];
//	int r, g, b;
//	cin >> r >> g >> b;
//	rgb[0] = r, rgb[1] = g, rgb[2] = b;
//
//	for (int i = 1; i < N; ++i) {
//		cin >> r >> g >> b;
//		for(int i=0;i<3;++i)
//			dd[i] = rgb[i];
//		rgb[0] = r + min(dd[1], dd[2]);
//		rgb[1] = g + min(dd[0], dd[2]);
//		rgb[2] = b + min(dd[0], dd[1]);
//	}
//	int mini = min(rgb[0], rgb[1]);
//	mini = min(mini, rgb[2]);
//	return mini;
//}
//int main() {
//	cin >> N;
//	if (N < 0 && N>1001)
//		exit(-1);
//	cout << min() << endl;
//}



//#include <iostream>
//#include <algorithm>
//using namespace std;
//int N;
//int cache[3] = { 0 };
//
//int minCost() {
//	int RGB[3];
//	int red, green, blue;
//	cin >> red >> green >> blue;
//	RGB[0] = red, RGB[1] = green, RGB[2] = blue;
//
//	for (int i = 1; i < N; ++i) {
//		cin >> red >> green >> blue;
//		for (int i = 0; i < 3; ++i)
//			cache[i] = RGB[i];
//		RGB[0] = red + min(cache[1], cache[2]);
//		RGB[1] = green + min(cache[0], cache[2]);
//		RGB[2] = blue + min(cache[0], cache[1]);
//	}
//
//	int mini = min(RGB[0], RGB[1]);
//	mini = min(mini, RGB[2]);
//	return mini;
//}
//int main() {
//	cin >> N;
//	if (N < 1 || N>1000)
//		exit(-1);
//	cout << minCost() << endl;
//}



/*return RGB[0] > RGB[1] ? (RGB[1] > RGB[2] ? RGB[2] : RGB[1])
		: (RGB[0] > RGB[2] ? RGB[2] : RGB[0]);*/

/// 내가푼거..답은 나오는데 틀림ㅠ_ㅠ
//#include <iostream>
//using namespace std;
//int main() {
//	static int arr[1001][3] = { (0,0,0) };
//	int index[1001] = { 0 };
//	int N;
//	cin >> N;
//
//	for (int i = 1; i <= N; ++i) {
//		for (int j = 0; j < 3; ++j) {
//			cin >> arr[i][j];
//		}
//	}
//	int min = 99999;
//	int sum = 0;
//	for (int i = 1; i <= N; ++i) {
//		for (int j = 0; j < 3; ++j) {
//			if (i == 1) {
//				if (arr[i][j] < min) {
//					min = arr[i][j];
//					index[i] = j;
//				}
//			}
//			else {
//				if (j == index[i - 1])
//					continue;
//				else
//					if (arr[i][j] < min) {
//						min = arr[i][j];
//						index[i] = j;
//					}
//			}
//		}
//		sum += min;
//		min = 99999;
//	}
//	cout << sum << endl;
//}