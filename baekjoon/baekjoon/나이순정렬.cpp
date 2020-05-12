//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//struct people {
//	int age;
//	string name;
//	int num;
//};
//
//vector<people> p;
//
//bool compare(people a, people b) {
//	if (a.age == b.age)
//		return a.num < b.num;
//	else
//		return a.age < b.age;
//}
//
//int main() {
//	int N;
//	cin >> N;
//	for (int i = 0; i < N; i++) {
//		people pp; cin >> pp.age >> pp.name;
//		pp.num = i;
//		p.push_back(pp);
//	}
//	sort(p.begin(), p.end(), compare);
//	
//	for (int i = 0; i < N; i++) {
//		cout << p[i].age << " " << p[i].name << "\n";
//	}
//}