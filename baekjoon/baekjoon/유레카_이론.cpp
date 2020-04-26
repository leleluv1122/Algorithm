//#include <iostream>
//#include <vector>
//using namespace std;
//int main()
//{
//	int K;
//	int n = 0, sum = 0, result = 0; int T;
//	int c = 0;
//	vector<int> v;
//	cin >> T;
//	for (int i = 0; i < T; i++) {
//		cin >> K;
//		n = 0, sum = 0, result = 0, c = 0;
//		while (1) {
//			n++;
//			sum += n;
//			v.push_back(sum);
//			if (sum > K) {
//				for (int k = 0; k < v.size(); k++) {
//					for (int z = 0; z < v.size(); z++) {
//						for (int h = 0; h < v.size(); h++) {
//							c = v[k] + v[z] + v[h];
//							if (K == c) {
//								result = 1;
//								break;
//							}
//						}
//					}
//				}
//				break;
//			}
//		}
//		cout << result << endl;
//		v.clear();
//	}
//}


//#include <iostream>
//#include <vector>
//using namespace std;
//vector<int> v;
//int Eureka(int K) {
//	for (int h = 0; h < v.size(); h++) {
//		for (int i = 0; i < v.size(); i++) {
//			for (int j = 0; j < v.size(); j++) {
//				if (K == v[h] + v[i] + v[j]) {
//					return true;
//				}
//			}
//		}
//	}
//	return false;
//}
//int main()
//{
//	int T; cin >> T;
//	int n = 0, sum = 0;
//	while (1) {
//		n++;
//		sum += n;
//		if (1000 > sum)
//			break;
//		v.push_back(sum);
//	}
//	for (int i = 0; i < T; i++) {
//		int K;
//		cin >> K;
//		cout << Eureka(K) << endl;
//	}
//}



//#include <iostream>
//#include <vector>
//using namespace std;
//int main()
//{
//	int K;
//	int n = 0, sum = 0, result = 0; int T;
//	int c = 0;
//	vector<int> v;
//	cin >> T;
//	for (int i = 0; i < T; i++) {
//		cin >> K;
//		n = 0, sum = 0, result = 0, c = 0;
//		while (1) {
//			n++;
//			sum += n;
//			v.push_back(sum);
//			if (sum > K) {
//				for (int k = 0; k < v.size(); k++) {
//					c += v[k];
//					for (int z = 0; z < v.size(); z++) {
//						c += v[z];
//						if (K == c) {
//							result = 1;
//							break;
//						}
//						else {
//							for (int h = 0; h < v.size(); h++) {
//								c += v[h];
//								if (K == c) {
//									result = 1;
//									break;
//								}
//								c -= v[h];
//							}
//						}
//						c -= v[z];
//					}
//				}
//				
//				break;
//			}
//			else if (sum == K) {
//				result = 1;
//				break;
//			}
//		}
//		cout << result << endl;
//		v.clear();
//	}
//}


//#include <iostream>
//using namespace std;
//int K;
//
//int main()
//{
//	int T; cin >> T;
//	int n = 0, sum = 0, result = 0;
//	for (int i = 0; i < T; i++) {
//		cin >> K;
//		n = 0, sum = 0, result = 0;
//		
//		while (1) {
//			n++;
//			sum += n;
//
//			if (sum > K) {
//				result = 0;
//				break;
//			}
//			else if (sum == K) {
//				result = 1;
//				break;
//			}
//		}
//		cout << result << endl;
//	}
//}