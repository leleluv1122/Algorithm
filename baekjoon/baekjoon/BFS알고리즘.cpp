//// �ʺ�켱Ž�� (queue ���)

//#include <iostream> 
//#include <queue> 
//#include <vector> 
//using namespace std; 
//int number = 9; 
//int visit[9]; 
//vector<int> a[10]; 
//void bfs(int start){ 
//	
//} int main() { 
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