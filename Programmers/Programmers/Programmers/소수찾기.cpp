#include <string>
#include <vector>
#include <cstring>
#include <math.h>
#include <iostream>

using namespace std;

vector<int> v;
bool visited[8];
bool arr[10000000];
vector<int> ans;

void sosu_find(int a, int idx, int tidx) {
	if (idx == tidx) {
		if (arr[a]) {
			if (find(ans.begin(), ans.end(), a) == ans.end())
				ans.push_back(a);
		}
		return;
	}

	int d = a * 10;
	for (int i = 0; i < v.size(); i++) {
		if (!visited[i]) {
			d += v[i];
			visited[i] = true;
			sosu_find(d, idx + 1, tidx);
			visited[i] = false;
			d -= v[i];
		}
	}
}

void sosu() {
	memset(arr, true, sizeof(arr));
	arr[1] = false;
	for (int i = 2; i <= sqrt(10000000); i++)
		if (arr[i])
			for (int j = i + i; j < 10000000; j += i)
				arr[j] = false;
}

int solution(string numbers) {
	sosu();
	int answer = 0;
	for (int i = 0; i < numbers.size(); i++)
		v.push_back(numbers[i] - '0');

	for (int i = 1; i <= numbers.size(); i++) {
		for (int j = 0; j < numbers.size(); j++) {
			if (v[j] != 0) {
				visited[j] = true;
				sosu_find(v[j], 1, i);
				visited[j] = false;
			}
		}
	}

	answer = ans.size();
	return answer;
}

int main() {
	int d = solution("7843"); // 12³ª¿Í¾ßµÊ
	cout << d;
}