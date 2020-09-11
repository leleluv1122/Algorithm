#include <iostream>

using namespace std;

int main() {
	int N; cin >> N;
	int rst = 0;
	while (N--) {
		int a; cin >> a;
		rst += (a - 1);
	}
	cout << rst + 1;;
}