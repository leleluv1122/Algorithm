#include <iostream>
#include <algorithm>
using namespace std;
int main() {
	int Max = 0;
	int n = 4;
	int a, b;
	int sum = 0;
	while (n--) {
		cin >> a >> b;
		sum += b;
		sum -= a;
		Max = max(Max, sum);
	}
	cout << Max;
}