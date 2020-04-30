//////// 깊이 우선 탐색 (Stack 사용)

//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//class Graph {
//public:
//	int N; // 정점의 개수
//	vector<vector<int>> adj; // 인접 리스트
//	vector<bool> visited; // 방문 여부를 저장하는 배열
//
//	// 생성자
//	Graph() : N(0) {}
//	Graph(int n) : N(n) {
//		adj.resize(N);
//		visited.resize(N);
//	}
//
//	// 간선 추가 함수
//	void addEdge(int u, int v) {
//		adj[u].push_back(v);
//		adj[v].push_back(u);
//	}
//
//	// 모든 리스트의 인접한 정점 번호 정렬
//	void sortList() {
//		for (int i = 0; i < N; i++)
//			sort(adj[i].begin(), adj[i].end());
//	}
//
//	// 깊이 우선 탐색
//	void dfs() {
//		fill(visited.begin(), visited.end(), false);
//		dfs(0);
//	}
//
//private:
//	void dfs(int curr) {
//		visited[curr] = true;
//		cout << "node " << curr << " visited" << endl;
//		for (int next : adj[curr])
//			if (!visited[next]) dfs(next);
//	}
//};
//
//int main() {
//	Graph G(9);
//	G.addEdge(0, 1);
//	G.addEdge(0, 2);
//	G.addEdge(1, 3);
//	G.addEdge(1, 5);
//	G.addEdge(3, 4);
//	G.addEdge(4, 5);
//	G.addEdge(2, 6);
//	G.addEdge(2, 8);
//	G.addEdge(6, 7);
//	G.addEdge(6, 8);
//	G.sortList();
//	G.dfs();
//}


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
//	// 1번 노드부터 dfs 탐색 실행 
//	dfs(1);
//}