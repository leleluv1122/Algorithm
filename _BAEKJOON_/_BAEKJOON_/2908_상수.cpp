#include <iostream>
#include <string>

using namespace std;

int main()
{
	int A, B;
	cin >> A >> B;
	string SA = to_string(A);
	string SB = to_string(B);
	string a, b;
	for (int i = 2; i >= 0; i--) {
		a += SA[i];
		b += SB[i];
	}
	int ia = stoi(a);
	int ib = stoi(b);

	if (ia > ib)
		cout << ia << endl;
	else
		cout << ib << endl;
}