//////2진트리
#include <stdio.h>
#include <stdlib.h>
#include <queue>
using namespace std;
struct Node {
	int data;
	Node* lChild;
	Node* rChild;
};
Node* AllocNode(int data)
{
	Node* n = (Node*)malloc(sizeof(Node));
	n->data = data;
	n->lChild = n->rChild = NULL;

	return n;
}
void Inorder(Node* root) { //내 함수 다출력
	if (root) //root!=NULL  //종료조건 더이상 깊이 내려갈 수 없을 때!(호출했을때 NULL)
	{
		Inorder(root->lChild); //재귀함수 - left 다 갔다오면
		printf("%d ", root->data); //출력
		Inorder(root->rChild);
	}
}
void Preorder(Node* root) {
	if (root) {
		printf("%d ", root->data);
		Preorder(root->lChild);
		Preorder(root->rChild);
	}
}
void Postorder(Node* root) {
	if (root) {
		Postorder(root->lChild);
		Postorder(root->rChild);
		printf("%d ", root->data);
	}
}
void Levelorder(Node* root) {
	queue<Node*> q; //정수를 저장x -> 숫자는 예시로 한거
	if (root == NULL)
		return;

	q.push(root);

	while (!q.empty()) { //q가 비어있지 않은가??
		Node* p = q.front(); q.pop(); //제일 앞에거를 꺼냄 그러고 제거
		printf("%d ", p->data); // 1 

		if (p->lChild)
			q.push(p->lChild); //2
		if (p->rChild)
			q.push(p->rChild); //3
							   //queue가 빌때까지 반복. 
	}
}
Node* SearchTree(Node* root, int data) {
	if (root == NULL)
		return NULL;
	if (root->data > data)
		return SearchTree(root->lChild, data); //왼쪽 - 찾고나서 던져줘야ㄷ.. return 한다..!!
	else if (root->data < data)
		return SearchTree(root->rChild, data); //오른쪽
	else
		return root;
}
Node* AddTree(Node* root, int data) {
	if (root == NULL)
		return AllocNode(data); //50주소 return
	else if (root->data > data)
		root->lChild = AddTree(root->lChild, data); //작을때
	else
		root->rChild = AddTree(root->rChild, data);; //클때
	return root;
}
int main() {
	Node* root = NULL;

	root = AddTree(root, 50); //return으로 바뀜
	root = AddTree(root, 30);
	root = AddTree(root, 70);
	root = AddTree(root, 20);
	root = AddTree(root, 40);
	root = AddTree(root, 60);
	root = AddTree(root, 90);

	Node* p = SearchTree(root, 60); //못찾으면 null 찾으면 찾은노드반환
	if (p)
		printf("찾은 원소: %d", p->data);
	printf("\n");
	Inorder(root);	printf("\n");
	Preorder(root);	printf("\n");
	Postorder(root);	printf("\n");
	Levelorder(root);	printf("\n");
}

//검색
//#include <stdio.h>
//#include <stdlib.h>
//#include <queue>
//using namespace std;
//struct Node {
//	int data;
//	Node* lChild;
//	Node* rChild;
//};
//Node* AllocNode(int data)
//{
//	Node* n = (Node*)malloc(sizeof(Node));
//	n->data = data;
//	n->lChild = n->rChild = NULL;
//
//	return n;
//}
//void Inorder(Node* root) { //내 함수 다출력
//	if (root) //root!=NULL  //종료조건 더이상 깊이 내려갈 수 없을 때!(호출했을때 NULL)
//	{
//		Inorder(root->lChild); //재귀함수 - left 다 갔다오면
//		printf("%d ", root->data); //출력
//		Inorder(root->rChild);
//	}
//}
//void Preorder(Node* root) {
//	if (root) {
//		printf("%d ", root->data);
//		Preorder(root->lChild);
//		Preorder(root->rChild);
//	}
//}
//void Postorder(Node* root) {
//	if (root) {
//		Postorder(root->lChild);
//		Postorder(root->rChild);
//		printf("%d ", root->data);
//	}
//}
//void Levelorder(Node* root) {
//	queue<Node*> q; //정수를 저장x -> 숫자는 예시로 한거
//	if (root == NULL)
//		return;
//
//	q.push(root);
//
//	while (!q.empty()) { //q가 비어있지 않은가??
//		Node* p = q.front(); q.pop(); //제일 앞에거를 꺼냄 그러고 제거
//		printf("%d ", p->data); // 1 
//
//		if (p->lChild)
//			q.push(p->lChild); //2
//		if (p->rChild)
//			q.push(p->rChild); //3
//		//queue가 빌때까지 반복. 
//	}
//}
//Node* SearchTree(Node* root, int data) {
//	if (root == NULL)
//		return NULL;
//	if (root->data > data)
//		return SearchTree(root->lChild, data); //왼쪽 - 찾고나서 던져줘야ㄷ.. return 한다..!!
//	else if (root->data < data)
//		return SearchTree(root->rChild, data); //오른쪽
//	else
//		return root;
//}
//int main() {
//	Node* root = NULL;
//
//	root = AllocNode(50);
//	root->lChild = AllocNode(30);
//	root->rChild = AllocNode(70);
//
//	root->lChild->lChild = AllocNode(20);
//	root->lChild->rChild = AllocNode(40);
//	root->rChild->lChild = AllocNode(60);
//	root->rChild->rChild = AllocNode(90);
//
//	Node* p = SearchTree(root, 60); //못찾으면 null 찾으면 찾은노드반환
//	if (p) 
//		printf("찾은 원소: %d", p->data);
//	printf("\n");
//	Inorder(root);	printf("\n");
//	Preorder(root);	printf("\n");
//	Postorder(root);	printf("\n");
//	Levelorder(root);	printf("\n");
//}

//#include <stdio.h>
//#include <stdlib.h>
//#include <queue>
//using namespace std;
//struct Node {
//	int data;
//	Node* lChild;
//	Node* rChild;
//};
//Node* AllocNode(int data)
//{
//	Node* n = (Node*)malloc(sizeof(Node));
//	n->data = data;
//	n->lChild = n->rChild = NULL;
//
//	return n;
//}
//void Inorder(Node* root) { //내 함수 다출력
//	if (root) //root!=NULL  //종료조건 더이상 깊이 내려갈 수 없을 때!(호출했을때 NULL)
//	{
//		Inorder(root->lChild); //재귀함수 - left 다 갔다오면
//		printf("%d ", root->data); //출력
//		Inorder(root->rChild);
//	}
//}
//void Preorder(Node* root) {
//	if (root) {
//		printf("%d ", root->data);
//		Preorder(root->lChild);
//		Preorder(root->rChild);
//	}
//}
//void Postorder(Node* root) {
//	if (root) {
//		Postorder(root->lChild);
//		Postorder(root->rChild);
//		printf("%d ", root->data);
//	}
//}
//void Levelorder(Node* root) {
//	queue<Node*> q; //정수를 저장x -> 숫자는 예시로 한거
//	if (root == NULL)
//		return;
//
//	q.push(root);
//
//	while (!q.empty()) { //q가 비어있지 않은가??
//		Node* p = q.front(); q.pop(); //제일 앞에거를 꺼냄 그러고 제거
//		printf("%d ", p->data); // 1 
//
//		if (p->lChild)
//			q.push(p->lChild); //2
//		if (p->rChild)
//			q.push(p->rChild); //3
//		//queue가 빌때까지 반복. 
//	}
//}
//int main() {
//	Node* root = NULL;
//	Node* p = NULL;
//
//	root = AllocNode(50);
//	root->lChild = AllocNode(30);
//	root->rChild = AllocNode(70);
//
//	root->lChild->lChild = AllocNode(20);
//	root->lChild->rChild = AllocNode(40);
//	root->rChild->lChild = AllocNode(60);
//	root->rChild->rChild = AllocNode(90);
//
//	Inorder(root);	printf("\n");
//	Preorder(root);	printf("\n");
//	Postorder(root);	printf("\n");
//	Levelorder(root);	printf("\n");
//}

//#include <stdio.h>
//#include <stdlib.h>
//struct Node {
//	int data;
//	Node* lChild;
//	Node* rChild;
//};
//Node* AllocNode(int data)
//{
//	Node* n = (Node*)malloc(sizeof(Node));
//	n->data = data;
//	n->lChild = n->rChild = NULL;
//
//	return n;
//}
//void Inorder(Node* root) { //내 함수 다출력
//	if (root) //root!=NULL  //종료조건 더이상 깊이 내려갈 수 없을 때!(호출했을때 NULL)
//	{
//		Inorder(root->lChild); //재귀함수 - left 다 갔다오면
//		printf("%d ", root->data); //출력
//		Inorder(root->rChild);
//	}
//}
//void Preorder(Node* root) {
//	if (root) {
//		printf("%d ", root->data);
//		Preorder(root->lChild);
//		Preorder(root->rChild);
//	}
//}
//void Postorder(Node* root) {
//	if (root) {
//		Postorder(root->lChild);
//		Postorder(root->rChild);
//		printf("%d ", root->data);
//	}
//}
//int main() {
//	Node* root = NULL;
//	Node* p = NULL;
//
//	root = AllocNode(50);
//	root->lChild = AllocNode(30);
//	root->rChild = AllocNode(70);
//
//	root->lChild->lChild = AllocNode(20);
//	root->lChild->rChild = AllocNode(40);
//	root->rChild->lChild = AllocNode(60);
//	root->rChild->rChild = AllocNode(90);
//
//	Inorder(root);	printf("\n");
//	Preorder(root);	printf("\n");
//	Postorder(root);	printf("\n");
//}

//#include <stdio.h>
//#include <stdlib.h>
//struct Node {
//	int data;
//	Node* lChild;
//	Node* rChild;
//};
//Node* AllocNode(int data)
//{
//	Node* n = (Node*)malloc(sizeof(Node));
//	n->data = data;
//	n->lChild = n->rChild = NULL;
//
//	return n;
//}
//int main() {
//	Node* root = NULL;
//	Node* p = NULL;
//
//	root = AllocNode(50);
//	root->lChild = AllocNode(30);
//	root->rChild = AllocNode(70);
//
//	root->lChild->lChild = AllocNode(20);
//	root->lChild->rChild = AllocNode(40);
//	root->rChild->lChild = AllocNode(60);
//	root->rChild->rChild = AllocNode(90);
//}