#include <iostream>
using namespace std;
int main() {
	int N, a, cute = 0;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> a;
		if (a == 1)
			cute++;
	}
	cout << "Junhee is ";
	if (cute > N / 2)
		cout << "cute!";
	else
		cout << "not cute!";
}