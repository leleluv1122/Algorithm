//#include <iostream>
//#include <string>
//#include <vector>
//#include <algorithm>
//using namespace std;
//struct STU {
//	string name;
//	int kor, eng, math;
//};
//bool cmp(STU a, STU b)
//{
//	if (a.kor == b.kor && a.eng == b.eng && a.math == b.math) return a.name < b.name;
//	if (a.kor == b.kor && a.eng == b.eng) return a.math > b.math;
//	if (a.kor == b.kor) return a.eng < b.eng;
//	return a.kor > b.kor;
//}
//int main()
//{
//	int N;
//	cin >> N;
//	vector<STU> v(N);
//	for (int i = 0; i < N; i++)
//		cin >> v[i].name >> v[i].kor >> v[i].eng >> v[i].math;
//	sort(v.begin(), v.end(), cmp);
//	for (int i = 0; i < N; i++) cout << v[i].name << endl;
//	return 0;
//}



//#include <iostream>
//#include <string>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//struct KEM {
//	string name;
//	int korean, english, math;
//};
//
//bool compare(KEM a, KEM b) {
//	if (a.korean == b.korean && a.english == b.english && a.math == b.math)
//		return a.name < b.name;
//	if (a.korean == b.korean && a.english == b.english)
//		return a.math > b.math;
//	if (a.korean == b.korean)
//		return a.english < b.english;
//	return a.korean > b.korean;
//}
//int main() {
//	int N;
//	cin >> N;
//	vector<KEM> dclass(N);
//	for (int i = 0; i < N; ++i)
//		cin >> dclass[i].name >> dclass[i].korean >> dclass[i].english >> dclass[i].math;
//
//	sort(dclass.begin(), dclass.end(), compare);
//
//	for (int i = 0; i < N; ++i) 
//		cout << dclass[i].name << endl;
//
//}