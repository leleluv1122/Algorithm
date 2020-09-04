#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr) {
	vector<int> answer;
	
	int a = arr[0];
	answer.push_back(a);
	for (int i = 1; i < arr.size(); i++) {
		if (arr[i] != a) {
			a = arr[i];
			answer.push_back(arr[i]);
		}
	}

	return answer;
}