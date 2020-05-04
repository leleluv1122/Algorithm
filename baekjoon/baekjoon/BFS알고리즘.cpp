///////////// �ʺ�켱Ž�� (queue ���)
//#include <iostream>
//#include <vector>
//#include <queue>
//#include <algorithm>
//using namespace std;
//
//class Graph {
//public:
//	int N; // ������ ����
//	vector<vector<int>> adj; // ���� ����Ʈ
//
//	// ������
//	Graph() : N(0) {}
//	Graph(int n) : N(n) { adj.resize(N); }
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
//	// �ʺ� �켱 Ž��
//	void bfs() {
//		vector<bool> visited(N, false); // �湮 ���θ� �����ϴ� �迭
//		queue<int> Q;
//		Q.push(0);
//		visited[0] = true;
//		// Ž�� ����
//		while (!Q.empty()) {
//			int curr = Q.front();
//			Q.pop();
//			cout << "node " << curr << " visited" << endl;
//			for (int next : adj[curr]) {
//				if (!visited[next]) {
//					visited[next] = true;
//					Q.push(next);
//				}
//			}
//		}
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
//	G.bfs();
//}



//#include <iostream> 
//#include <queue> 
//#include <vector> 
//using namespace std; 
//int number = 9; 
//int visit[9]; 
//vector<int> a[10];
//int main() { 
//	// 1�� 2�� ���� 
//	a[1].push_back(2); 
//	a[2].push_back(1); 
//	
//	// 1�� 3�� ���� 
//	a[1].push_back(3); 
//	a[3].push_back(1); 
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
//	// 1�� ������ bfs Ž�� ���� 
//	int start = 1;
//	queue<int> q;
//	q.push(start);
//	visit[start] = true;
//	while (!q.empty()) {
//		// ť�� ���� ������� ��� �ݺ� ���� 
//		// ť�� ���� �ִ�. => ���� �湮���� ���� ��尡 ���� �Ѵ�. 
//		int x = q.front();
//		q.pop();
//		printf("%d ", x);
//		for (int i = 0; i < a[x].size(); i++) {
//			int y = a[x][i];
//			if (!visit[y]) {
//				// �湮���� �ʾҴٸ�.. 
//				q.push(y);
//				visit[y] = true;
//			}
//		}
//	}
//}