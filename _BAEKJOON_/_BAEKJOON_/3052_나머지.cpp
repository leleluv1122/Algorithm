#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
	vector<int> v;
	int a;
	for (int i = 0; i < 10; i++) {
		cin >> a;
		a %= 42;
		if (find(v.begin(), v.end(), a) == v.end())
			v.push_back(a);
	}
	cout << v.size() << "\n";
}