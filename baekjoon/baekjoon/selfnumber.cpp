//#include <iostream>
//using namespace std;
//void search(Node root) {
//	Queue queue = new Queue();
//	root.marked = true; // (�湮�� ��� üũ)
//	queue.enqueue(root); // 1-1. ť�� ���� �߰�
//
//	// 3. ť�� ������ ������ ����Ѵ�.
//	while (!queue.isEmpty()) {
//		Node r = queue.dequeue(); // ť�� �տ��� ��� ����
//		visit(r); // 2-1. ť���� ������ ��� �湮
//		// 2-2. ť���� ���� ���� ������ ������ ��� ���ʷ� �湮�Ѵ�.
//		foreach(Node n in r.adjacent) {
//			if (n.marked == false) {
//				n.marked = true; // (�湮�� ��� üũ)
//				queue.enqueue(n); // 2-3. ť�� ���� �߰�
//			}
//		}
//	}
//}