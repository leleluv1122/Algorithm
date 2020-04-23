//////// 깊이 우선 탐색 (Stack 사용)
//
//#include <iostream> 
//#include <vector> 
//using namespace std; 
//int number = 9; 
//int visit[9]; 
//vector<int> a[10]; 
//void dfs(int start){ 
//	if(visit[start]){ 
//		// 방문한경우 바로 빠져나옴 
//		return; 
//	} 
//	visit[start] = true; // 방문 
//	printf("%d ", start); 
//	for(int i=0; i< a[start].size(); i++){ 
//		// 인접한 노드를 방문 
//		int x = a[start][i]; 
//		dfs(x);
//	}
//} 
//int main() { 
//	// 1과 2를 연결 
//	a[1].push_back(2); 
//	a[2].push_back(1); 
//	
//	// 1과 3을 연결 
//	a[1].push_back(3); 
//	a[3].push_back(1); 
//	
//	// 2과 3을 연결 
//	/*a[2].push_back(3); 
//	a[3].push_back(2); */
//	
//	// 2와 4를 연결 
//	a[2].push_back(4); 
//	a[4].push_back(2); 
//	
//	// 2와 5를 연결 
//	a[2].push_back(5); 
//	a[5].push_back(2); 
//	
//	// 4와 8을 연결 
//	a[4].push_back(8); 
//	a[8].push_back(4); 
//	
//	// 5와 9를 연결 
//	a[5].push_back(9); 
//	a[9].push_back(5); 
//	
//	// 3과 6을 연결 
//	a[3].push_back(6); 
//	a[6].push_back(3); 
//	
//	// 3과 7을 연결 
//	a[3].push_back(7); 
//	a[7].push_back(3); 
//	
//	// 1번 노드부터 bfs 탐색 실행 
//	dfs(1);
//}