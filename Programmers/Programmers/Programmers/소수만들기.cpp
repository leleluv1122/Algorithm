#include <vector>
#include <iostream>
#include <cstring>
#include <math.h>
using namespace std;

int ans = 0;
bool srr[3010];
bool visited[51];

void sosu(int n, int cnt, vector<int>& nums, int d) {
	if (cnt == 3) {
		if (srr[n])
			ans++;
		return;
	}

	for (int i = d + 1; i < nums.size(); i++) {
		if (!visited[i]) {
			visited[i] = true;
			sosu(n + nums[i], cnt + 1, nums, i);
			visited[i] = false;
		}
	}
}

int solution(vector<int> nums) {
	memset(srr, true, sizeof(srr));
	for (int i = 2; i <= sqrt(3001); i++)
		if (srr[i])
			for (int j = i + i; j <= 3001; j += i)
				srr[j] = false;

	for (int i = 0; i < nums.size() - 2; i++) {
		visited[i] = true;
		sosu(nums[i], 1, nums, i);
	}
	
	return ans;
}

int main() {
	vector<int> v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);
	cout << solution(v);
}