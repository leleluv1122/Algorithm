//#include <iostream>
//#include <string>
//#include <vector>
//#include <queue>
//#include <algorithm>
//
//using namespace std;
//
//int solution(vector<int> people, int limit) {
//	int answer = 0;
//	priority_queue<int, vector<int>, greater<int>> pq;
//	for (int i = 0; i < people.size(); i++)
//		pq.push(people[i]);
//	
//	int lim = 0;
//	while (!pq.empty()) {
//		int t = pq.top();
//
//		if (lim + t == limit) {
//			answer++;
//			pq.pop();
//			lim = 0;
//		}
//		else if (lim + t > limit) {
//			answer++;
//			lim = 0;
//		}
//		else {
//			lim += t;
//			pq.pop();
//		}
//	}
//	if (lim)
//		answer++;
//
//	return answer;
//}
//
//int main() {
//	vector<int> p;
//	p.push_back(70);
//	p.push_back(50);
//	p.push_back(80);
//	p.push_back(50);
//
//	cout << solution(p, 100);
//}