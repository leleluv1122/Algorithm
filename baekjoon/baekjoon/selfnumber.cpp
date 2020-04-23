//#include <iostream>
//using namespace std;
//void search(Node root) {
//	Queue queue = new Queue();
//	root.marked = true; // (방문한 노드 체크)
//	queue.enqueue(root); // 1-1. 큐의 끝에 추가
//
//	// 3. 큐가 소진될 때까지 계속한다.
//	while (!queue.isEmpty()) {
//		Node r = queue.dequeue(); // 큐의 앞에서 노드 추출
//		visit(r); // 2-1. 큐에서 추출한 노드 방문
//		// 2-2. 큐에서 꺼낸 노드와 인접한 노드들을 모두 차례로 방문한다.
//		foreach(Node n in r.adjacent) {
//			if (n.marked == false) {
//				n.marked = true; // (방문한 노드 체크)
//				queue.enqueue(n); // 2-3. 큐의 끝에 추가
//			}
//		}
//	}
//}