#include <iostream>
#include <algorithm>

using namespace std;
int dp[3];

int main() {
	int RGB[3];
	int N, r, g, b;

	cin >> N;
	if (N < 1 || N>1000)
		exit(-1);
	cin >> r >> g >> b;
	RGB[0] = r, RGB[1] = g, RGB[2] = b;

	N--;
	while (N--) {
		cin >> r >> g >> b;
		for (int i = 0; i < 3; i++)
			dp[i] = RGB[i];
		RGB[0] = r + min(dp[1], dp[2]);
		RGB[1] = g + min(dp[0], dp[2]);
		RGB[2] = b + min(dp[0], dp[1]);
	}
	cout << min(min(RGB[0], RGB[1]), RGB[2]);
}