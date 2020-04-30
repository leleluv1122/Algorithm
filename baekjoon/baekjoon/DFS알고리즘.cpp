//////// ���� �켱 Ž�� (Stack ���)

//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//class Graph {
//public:
//	int N; // ������ ����
//	vector<vector<int>> adj; // ���� ����Ʈ
//	vector<bool> visited; // �湮 ���θ� �����ϴ� �迭
//
//	// ������
//	Graph() : N(0) {}
//	Graph(int n) : N(n) {
//		adj.resize(N);
//		visited.resize(N);
//	}
//
//	// ���� �߰� �Լ�
//	void addEdge(int u, int v) {
//		adj[u].push_back(v);
//		adj[v].push_back(u);
//	}
//
//	// ��� ����Ʈ�� ������ ���� ��ȣ ����
//	void sortList() {
//		for (int i = 0; i < N; i++)
//			sort(adj[i].begin(), adj[i].end());
//	}
//
//	// ���� �켱 Ž��
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
//		// �湮�Ѱ�� �ٷ� �������� 
//		return; 
//	} 
//	visit[start] = true; // �湮 
//	printf("%d ", start); 
//	for(int i=0; i< a[start].size(); i++){ 
//		// ������ ��带 �湮 
//		int x = a[start][i]; 
//		dfs(x);
//	}
//} 
//int main() { 
//	// 1�� 2�� ���� 
//	a[1].push_back(2); 
//	a[2].push_back(1); 
//	
//	// 1�� 3�� ���� 
//	a[1].push_back(3); 
//	a[3].push_back(1); 
//	
//	// 2�� 3�� ���� 
//	/*a[2].push_back(3); 
//	a[3].push_back(2); */
//	
//	// 2�� 4�� ���� 
//	a[2].push_back(4); 
//	a[4].push_back(2); 
//	
//	// 2�� 5�� ���� 
//	a[2].push_back(5); 
//	a[5].push_back(2); 
//	
//	// 4�� 8�� ���� 
//	a[4].push_back(8); 
//	a[8].push_back(4); 
//	
//	// 5�� 9�� ���� 
//	a[5].push_back(9); 
//	a[9].push_back(5); 
//	
//	// 3�� 6�� ���� 
//	a[3].push_back(6); 
//	a[6].push_back(3); 
//	
//	// 3�� 7�� ���� 
//	a[3].push_back(7); 
//	a[7].push_back(3); 
//	
//	// 1�� ������ dfs Ž�� ���� 
//	dfs(1);
//}