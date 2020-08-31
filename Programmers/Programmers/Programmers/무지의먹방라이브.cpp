#include <string>
#include <vector>
#include <algorithm>
#include <cstring>
#include <iostream>

using namespace std;

bool compare(pair<int, int> a, pair<int, int> b) {
	return a.second < b.second;
}

int solution(vector<int> food_times, long long k) {
	vector<pair<int, int>> v;
	int size = food_times.size();
	for (int i = 0; i < size; i++)
		v.push_back(make_pair(food_times[i], i + 1));
	sort(v.begin(), v.end());

	int time = 0;
	for (vector<pair<int,int>>::iterator it = v.begin(); it != v.end(); it++, size--) {
		long long leadTime = (long long)(it->first - time) * size;
		if (leadTime == 0)
			continue;

		if (leadTime <= k) {
			k -= leadTime;
			time = it->first;
		}
		else {
			k %= size;
			sort(it, v.end(), compare);
			return (it + k)->second;
		}
	}
	return -1;
}

int main() {
	vector<int> f;
	f.push_back(3);
	f.push_back(1);
	f.push_back(2);
	long long n = solution(f, 5);
	cout << n; // 1
}