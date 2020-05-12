//#include <iostream>
//#include <string>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//vector<string> d;
//
//bool bsearch(int a, int b, string name) {
//	if (a > b)
//		return false;
//	else {
//		int mid = (a + b) / 2;
//
//		if (!d[mid].compare(name))
//			return true;
//		else if (d[mid] > name)
//			return bsearch(a, mid - 1, name);
//		else
//			return bsearch(mid + 1, b, name);
//	}
//}
//
//int main() {
//	int a, b;
//	cin >> a >> b;
//
//	for (int i = 0; i < a; i++) {
//		string cc; cin >> cc;
//		d.push_back(cc);
//	}
//	sort(d.begin(), d.end());
//
//	vector<string> rst;
//	for (int i = 0; i < b; i++) {
//		string name;
//		cin >> name;
//
//		if (bsearch(0, a, name))
//			rst.push_back(name);
//	}
//	sort(rst.begin(), rst.end());
//
//	cout << rst.size() << endl;
//	for (int i = 0; i < rst.size(); i++)
//		cout << rst[i] << endl;
//}


//#include <iostream>
//#include <string>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//const int MAX = 500000 + 1;
//string d[MAX]; //ต่
//
//bool bsearch(int a, int b, string name) {
//	if (a > b)
//		return false;
//	else {
//		int mid = (a + b) / 2;
//
//		if (!d[mid].compare(name))
//			return true;
//		else if (d[mid] > name)
//			return bsearch(a, mid - 1, name);
//		else
//			return bsearch(mid + 1, b, name);
//	}
//}
//
//int main() {
//	int a, b;
//	cin >> a >> b;
//
//	for (int i = 0; i < a; i++) 
//		cin >> d[i];
//	sort(d, d + a);
//	
//	vector<string> rst;
//	for (int i = 0; i < b; i++) {
//		string name;
//		cin >> name;
//
//		if (bsearch(0, a, name))
//			rst.push_back(name);
//	}
//	sort(rst.begin(), rst.end());
//
//	cout << rst.size() << endl;
//	for (int i = 0; i < rst.size(); i++)
//		cout << rst[i] << endl;
//}