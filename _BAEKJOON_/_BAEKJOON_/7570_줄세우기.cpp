#include <iostream>

#define MAX 1000001
#define endl "\n"
using namespace std;

int arr[MAX];
int N;
int r;

int main() {
	cin >> N;
	for (int i = 0; i < N; i++) {
		int a; cin >> a;
		arr[a] = arr[a - 1] + 1;
		if (arr[a] > r)
			r = arr[a];
	}
	
	cout << N - r << endl;
}