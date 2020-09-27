#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;


long long solution(int k) {
	int arr[10];
	arr[0] = 6;
	arr[1] = 2;
	arr[2] = 5;
	arr[3] = 5;
	arr[4] = 4;
	arr[5] = 5;
	arr[6] = 6;
	arr[7] = 3;
	arr[8] = 7;
	arr[9] = 6;

	for (int i = 0; i < 10; i++) {
		int sum = arr[i];
		for (int j = 0; j < 10; j++) {
			if (i == j)
				continue;
		}
	}

	long long answer = 0;
	return answer;
}

//int main() {
//	cout << solution(5);
//}