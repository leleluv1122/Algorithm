#include <string>
#include <vector>
#include <deque>
#include <queue>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> ball, vector<int> order) {
	vector<int> answer;
	deque<int> dq;
	for (int i = 0; i < ball.size(); i++)
		dq.push_back(ball[i]);
	
	int idx = 0;
	queue<int> boryu;
	while (!dq.empty()) {
		int a = dq.front();
		int b = dq.back();

		queue<int> v;
		if (boryu.size()) {
			bool bb = false;
			while (!boryu.empty()) {
				int top = boryu.front();
				boryu.pop();

				if (top == dq.front()) {
					answer.push_back(top);
					dq.pop_front();
					bb = true;
				}
				else if (top == dq.back()) {
					answer.push_back(top);
					dq.pop_back();
					bb = true;
				}
				else
					v.push(top);

				if (bb) {
					if (!v.empty()) {
						while (!v.empty()) {
							int top = v.front();
							v.pop();
							boryu.push(top);
						}
					}
				}
			}

			if (!bb) {
				if (!v.empty()) {
					while (!v.empty()) {
						int top = v.front();
						v.pop();
						boryu.push(top);
					}
				}
			}
		}

		if (idx < order.size()) {
			if (order[idx] == a) {
				idx++;
				answer.push_back(a);
				dq.pop_front();
			}
			else if (order[idx] == b) {
				idx++;
				answer.push_back(b);
				dq.pop_back();
			}
			else {
				boryu.push(order[idx]);
				idx++;
			}
		}
	}
	return answer;
}

//int main() {
//	vector<int> ball, order;
//	ball.push_back(11);
//	ball.push_back(2);
//	ball.push_back(9);
//	ball.push_back(13);
//	ball.push_back(24);
//
//	order.push_back(9);
//	order.push_back(2);
//	order.push_back(13);
//	order.push_back(24);
//	order.push_back(11);
//
//	/*ball.push_back(1);
//	ball.push_back(2);
//	ball.push_back(3);
//	ball.push_back(4);
//	ball.push_back(5);
//	ball.push_back(6);
//	
//	order.push_back(6);
//	order.push_back(2);
//	order.push_back(5);
//	order.push_back(1);
//	order.push_back(4);
//	order.push_back(3);*/
//
//
//	vector<int> s = solution(ball, order);
//	for (int i = 0; i < s.size(); i++)
//		cout << s[i] << " ";
//}