#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Meet {
	int start;
	int end;
};

bool cmp(Meet a, Meet b) {
	if (a.end != b.end)
		return a.end < b.end;
	return a.start < b.start;
}

void init() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
}

int main() {
	init();
	int N;
	cin >> N;
	vector<Meet> meeting;

	for (int i = 0; i < N; i++) {
		Meet m;
		cin >> m.start >> m.end;
		meeting.push_back(m);
	}

	sort(meeting.begin(), meeting.end(), cmp);
	int sta = meeting[0].start, en = meeting[0].end;
	int cnt = 1;
	for (int i = 1; i < N; i++) {
		if (meeting[i].start >= en) {
			cnt++;
			sta = meeting[i].start;
			en = meeting[i].end;
		}
	}
	cout << cnt;
}