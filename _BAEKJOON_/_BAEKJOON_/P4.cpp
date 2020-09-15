#include <string>
#include <vector>

using namespace std;
int gogoA[4] = { 0,1,0,-1 };
int gogoB[4] = { 1,0,-1,0 }; // 오른 아래 왼쪽 위로
int answer = 0;

void Maze(pair<int, int> d, int loca, int cnt) {

}

int solution(vector<vector<int>> maze) {
	pair<int, int> d = { 0,0 };
	if (maze[1][0])
		Maze(d, 0, 0);
	else if (maze[0][1])
		Maze(d, 1, 0);

	return answer;
}