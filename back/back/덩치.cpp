//#include <iostream>
//#include <vector>
//using namespace std;
//struct man {
//	int weight;
//	int height;
//	int ranking;
//};
//int main()
//{
//	int N; cin >> N;
//	vector<man> v;
//	for (int i = 0; i < N; i++) {
//		man a;
//		cin >> a.weight >> a.height;
//		a.ranking = 1;
//		v.push_back(a);
//	}
//
//	for (int i = 0; i < N; i++) {
//		for (int j = 0; j < N; j++) {
//			if (i == j)
//				continue;
//			else if (v[i].height < v[j].height && v[i].weight < v[j].weight)
//				v[i].ranking++;
//		}
//	}
//	for (int i = 0; i < N; i++) {
//		cout << v[i].ranking << " ";
//	}
//	cout << endl;
//}