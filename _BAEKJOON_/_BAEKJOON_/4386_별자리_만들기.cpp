#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include <math.h>

#define MAX 101
using namespace std;

vector<pair<double, double>> v;
vector<pair<int, double>> node[MAX];
bool visited[MAX];

double distance(double x1, double y1, double x2, double y2) {
	double dx = pow(x1 - x2, 2);
	double dy = pow(y1 - y2, 2);
	double dis = sqrt(dx + dy);

	return dis;
}

double star() {
	priority_queue<pair<double, int>, vector<pair<double, int>>, greater<pair<double, int>>> pq;

	for (int i = 0; i < node[0].size(); i++) {
		int next = node[0][i].first;
		double cost = node[0][i].second;

		pq.push(make_pair(cost, next));
	}
	visited[0] = true;

	double result = 0;
	while (!pq.empty()) {
		double cost = pq.top().first;
		int cur = pq.top().second;
		pq.pop();

		if (visited[cur])
			continue;
		visited[cur] = true;

		result += cost;

		for (int i = 0; i < node[cur].size(); i++) {
			int next = node[cur][i].first;
			int n_cost = node[cur][i].second;

			pq.push(make_pair(n_cost, next));
		}
	}
	return result;
}

int main() {
	int N;
	cin >> N;

	double x, y;
	for (int i = 0; i < N; i++) {
		cin >> x >> y;
		v.push_back(make_pair(x, y));
	}

	for (int i = 0; i < N; i++) {
		double x1 = v[i].first;
		double y1 = v[i].second;

		for (int j = i + 1; j < N; j++) {
			double x2 = v[j].first;
			double y2 = v[j].second;
			double dis = distance(x1, y1, x2, y2);

			node[i].push_back(make_pair(j, dis));
			node[j].push_back(make_pair(i, dis));
		}
	}
	
	printf("%.2f\n", star());
}