////������� �ʱ����� &���δ�.
//
////���߿��Ḯ��Ʈ
//
//#include <stdio.h>
//#include <stdlib.h>
//struct Node {
//	int data;
//	Node* prev;
//	Node* next;
//};
//struct List {
//	Node* head;
//	Node* tail;
//};
//Node* AllocNode(int data) {
//	Node* n = (Node*)malloc(sizeof(Node));
//	n->data = data;
//	n->next = n->prev = NULL;
//	return n;
//}
//void InitList(List& lt) {
//	lt.head = AllocNode(0);
//	lt.tail = AllocNode(0);
//	lt.head->next = lt.tail;
//	lt.tail->prev = lt.head;
//}
//void UninitList(List& lt) { //reference���� 
//	for (Node* p = lt.head; p;) {
//		Node* cur = p;
//		p = p->next;
//		free(cur);
//	}
//}
//void AddNextList(List& lt, int data) {
//	Node* n = AllocNode(data);
//	Node* tail = lt.tail;
//	Node* ptail = tail->prev;
//
//	ptail->next = n;
//	n->prev = ptail;
//	n->next = tail;
//	tail->prev = n;
//}
//void AddPrevList(List& lt, int data) {
//	Node* n = AllocNode(data);
//	Node* head = lt.head;
//	Node* phead = head->next;
//
//	phead->prev = n;
//	n->next = phead;
//	n->prev = head;
//	head->next = n;
//}
//void InsertList(List& lt, Node* p, int data) {
//	//������
//}
//void DeleteList(List& lt, Node* p) {
//	Node* pp = p->prev;
//	Node* pn = p->next;
//	pp->next = pn;
//	pn->prev = pp;
//	free(p);
//}
//void PrintNextList(List& lt) {
//	for (Node* p = lt.head->next; p != lt.tail; p = p->next)
//		printf("%d ", p->data);
//	printf("\n");
//}
//void PrintPrevList(List& lt) {
//	for (Node* p = lt.tail->prev; p != lt.head; p = p->prev)
//		printf("%d ", p->data);
//	printf("\n");
//}
/////////////////////////��ȸ�ϴ� �ڵ�//
//Node* GetHead(List& lt) {
//	return lt.head->next;
//}
//int HasNext(List& lt, Node* p) {
//	//return p != lt.tail ? 1 : 0 //tail�� �ƴϸ� true ������ false
//	return p != lt.tail; //��������
//}
//Node* Next(List& lt, Node* p) {
//	return p->next;
//}
//int GetData(List& lt, Node* p) {
//	return p->data;
//}
//int main() {
//	List lt;
//
//	InitList(lt);
//	AddNextList(lt, 100);
//	AddNextList(lt, 200);
//	AddNextList(lt, 300);
//	AddNextList(lt, 400);
//	AddNextList(lt, 500);
//
//	AddPrevList(lt, 50);
//	AddPrevList(lt, 0);
//
//	for (Node* p = GetHead(lt); HasNext(lt, p); p = Next(lt, p))
//		printf("%d ", GetData(lt, p));
//	printf("\n");
//
//	for (Node* p = GetHead(lt); HasNext(lt, p); p = Next(lt, p))
//		if (300 == GetData(lt, p))
//		{
//			DeleteList(lt, p);
//			break;
//		}
//
//	for (Node* p = GetHead(lt); HasNext(lt, p); p = Next(lt, p))
//		printf("%d ", GetData(lt, p));
//	printf("\n");
//
//	PrintPrevList(lt);
//	UninitList(lt);
//}

//#include <stdio.h>
//#include <stdlib.h>
//struct Node {
//	int data;
//	Node* prev;
//	Node* next;
//};
//struct List {
//	Node* head;
//	Node* tail;
//};
//Node* AllocNode(int data) {
//	Node* n = (Node*)malloc(sizeof(Node));
//	n->data = data;
//	n->next = n->prev = NULL;
//	return n;
//}
//void InitList(List& lt) {
//	lt.head = AllocNode(0);
//	lt.tail = AllocNode(0);
//	lt.head->next = lt.tail;
//	lt.tail->prev = lt.head;
//}
//void UninitList(List& lt) { //reference���� 
//	for (Node* p = lt.head; p;) {
//		Node* cur = p;
//		p = p->next;
//		free(cur);
//	}
//}
//void AddNextList(List& lt, int data) {
//	Node* n = AllocNode(data);
//	Node* tail = lt.tail;
//	Node* ptail = tail->prev;
//
//	ptail->next = n;
//	n->prev = ptail;
//	n->next = tail;
//	tail->prev = n;
//}
//void PrintNextList(List& lt) {
//	for (Node* p = lt.head->next; p != lt.tail; p = p->next)
//		printf("%d ", p->data);
//	printf("\n");
//}
/////////////////////////��ȸ�ϴ� �ڵ�//
//Node* GetHead(List& lt) {
//	return lt.head->next;
//}
//int HasNext(List& lt, Node* p) {
//	//return p != lt.tail ? 1 : 0 //tail�� �ƴϸ� true ������ false
//	return p != lt.tail; //��������
//}
//Node* Next(List& lt, Node* p) {
//	return p->next;
//}
//int GetData(List& lt, Node* p) {
//	return p->data;
//}
//int main() {
//	List lt;
//
//	InitList(lt);
//	AddNextList(lt, 100);
//	AddNextList(lt, 200);
//	AddNextList(lt, 300);
//	AddNextList(lt, 400);
//	AddNextList(lt, 500);
//
//	for (Node* p = GetHead(lt); HasNext(lt, p); p = Next(lt, p))
//		printf("%d ", GetData(lt, p));
//	printf("\n");
//	UninitList(lt);
//}


//#include <stdio.h>
//#include <stdlib.h>
//struct Node {
//	int data;
//	Node* prev;
//	Node* next;
//};
//struct List {
//	Node* head;
//	Node* tail;
//};
//Node* AllocNode(int data) {
//	Node* n = (Node*)malloc(sizeof(Node));
//	n->data = data;
//	n->next = n->prev = NULL;
//	return n;
//}
//void InitList(List& lt) {
//	lt.head = AllocNode(0);
//	lt.tail = AllocNode(0);
//	lt.head->next = lt.tail;
//	lt.tail->prev = lt.head;
//}
//void UninitList(List& lt) { //reference���� 
//	for (Node* p = lt.head; p;) {
//		Node* cur = p;
//		p = p->next;
//		free(cur);
//	}
//}
//void AddNextList(List& lt, int data) {
//	Node* n = AllocNode(data);
//	Node* tail = lt.tail;
//	Node* ptail = tail->prev;
//
//	ptail->next = n;
//	n->prev = ptail;
//	n->next = tail;
//	tail->prev = n;
//}
//void PrintNextList(List& lt) {
//	for (Node* p = lt.head->next; p != lt.tail; p = p->next)
//		printf("%d ", p->data);
//	printf("\n");
//}
//int main() {
//	List lt;
//
//	InitList(lt);
//	AddNextList(lt, 100);
//	AddNextList(lt, 200);
//	AddNextList(lt, 300);
//	AddNextList(lt, 400);
//	AddNextList(lt, 500);
//
//	PrintNextList(lt);
//	UninitList(lt);
//}

//#include <stdio.h>
//#include <stdlib.h>
//struct Node {
//	int data;
//	Node* prev;
//	Node* next;
//};
//struct List {
//	Node* head;
//	Node* tail;
//};
//Node* AllocNode(int data) {
//	Node* n = (Node*)malloc(sizeof(Node));
//	n->data = data;
//	n->next = n->prev = NULL;
//	return n;
//}
//void InitList(List& lt) {
//	lt.head = AllocNode(0);
//	lt.tail = AllocNode(0);
//	lt.head->next = lt.tail;
//	lt.tail->prev = lt.head;
//}
//void UninitList(List& lt) { //reference���� 
//	for (Node* p = lt.head; p;) {
//		Node* cur = p;
//		p = p->next;
//		free(cur);
//	}
//}
//void AddList(List& lt, int data) {
//	Node* n = AllocNode(data);
//	Node* tail = lt.tail;
//	Node* ptail = tail->prev;
//
//	ptail->next = n;
//	n->prev = ptail;
//	n->next = tail;
//	tail->prev = n;
//}
//void PrintList(List& lt) {
//	for (Node* p = lt.head->next; p != lt.tail; p = p->next)
//		printf("%d ", p->data);
//	printf("\n");
//}
//int main() {
//	List lt;
//
//	InitList(lt);
//	AddList(lt, 100);
//	AddList(lt, 200);
//	AddList(lt, 300);
//	AddList(lt, 400);
//	AddList(lt, 500);
//
//	PrintList(lt);
//	UninitList(lt);
//}

//#include <stdio.h>
//#include <stdlib.h>
//struct Node {
//	int data;
//	Node* prev;
//	Node* next;
//};
//struct List {
//	Node* head;
//	Node* tail;
//};
//Node* AllocNode(int data) {
//	Node* n = (Node*)malloc(sizeof(Node));
//	n->data = data;
//	n->next = n->prev = NULL;
//	return n;
//}
//void InitList(List& lt) {
//	lt.head = AllocNode(0);
//	lt.tail = AllocNode(0);
//	lt.head->next = lt.tail;
//	lt.tail->prev = lt.head;
//}
//void UninitList(List& lt) { //reference���� 
//	for (Node* p = lt.head; p;) {
//		Node* cur = p;
//		p = p->next;
//		free(cur);
//	}
//}
//void AddList(List& lt, int data) {
//	Node* n = AllocNode(data);
//	Node* tail = lt.tail;
//	Node* ptail = tail->prev;
//
//	ptail->next = n;
//	n->prev = ptail;
//	n->next = tail;
//	tail->prev = n;
//}
////void PrintList(List lt) {
////
////}
//int main() {
//	List lt;
//
//	InitList(lt);
//	AddList(lt, 100);
//	AddList(lt, 200);
//	AddList(lt, 300);
//	AddList(lt, 400);
//	AddList(lt, 500);
//
//	printf("%d\n", lt.head->next->data);
//	//PrintList(lt);
//	UninitList(lt);
//}

//////////Ʋ���ڵ� 500��� 
//#include <stdio.h>
//#include <stdlib.h>
//struct Node {
//	int data;
//	Node* prev;
//	Node* next;
//};
//struct List {
//	Node* head;
//	Node* tail;
//};
//Node* AllocNode(int data) {
//	Node* n = (Node*)malloc(sizeof(Node));
//	n->data = data;
//	n->next = n->prev = NULL;
//	return n;
//}
//void InitList(List& lt) {
//	lt.head = AllocNode(0);
//	lt.tail = AllocNode(0);
//	lt.head->next = lt.tail;
//	lt.tail->prev = lt.head;
//}
//void UninitList(List& lt) { //reference���� 
//	for (Node* p = lt.head; p;) {
//		Node* cur = p;
//		p = p->next;
//		free(cur);
//	}
//}
//void AddList(List& lt, int data) {
//	Node* n = AllocNode(data);
//
//	lt.head->next = n;
//	n->prev = lt.head;
//	n->next = lt.tail;
//	lt.tail->prev = n;
//}
////void PrintList(List lt) {
////
////}
//int main() {
//	List lt;
//
//	InitList(lt);
//	AddList(lt, 100);
//	AddList(lt, 200);
//	AddList(lt, 300);
//	AddList(lt, 400);
//	AddList(lt, 500);
//
//	printf("%d\n", lt.head->next->data);
//	//PrintList(lt);
//	UninitList(lt);
//}

//#include <stdio.h>
//#include <stdlib.h>
//struct Node {
//	int data;
//	Node* prev;
//	Node* next;
//};
//struct List {
//	Node* head;
//	Node* tail;
//};
//Node* AllocNode(int data) {
//	Node* n = (Node*)malloc(sizeof(Node));
//	n->next = n->prev = NULL;
//	return n;
//}
//void InitList(List& lt) {
//	lt.head = AllocNode(0);
//	lt.tail = AllocNode(0);
//	lt.head->next = lt.tail;
//	lt.tail->prev = lt.head;
//}
//void UninitList(List& lt) { //reference���� 
//	for (Node* p = lt.head; p;) {
//		Node* cur = p;
//		p = p->next;
//		free(cur);
//	}
//}
//int main() {
//	List lt;
//
//	InitList(lt);
//	UninitList(lt);
//}

//#include <stdio.h>
//#include <stdlib.h>
//struct Node {
//	int data;
//	Node* prev;
//	Node* next;
//};
//Node* AllocNode(int data) {
//	Node* n = (Node*)malloc(sizeof(Node));
//	n->next = n->prev = NULL;
//	return n;
//}
//void InitList(Node* &head, Node* &tail) {
//	head = AllocNode(0);
//	tail = AllocNode(0);
//	head->next = tail;
//	tail->prev = head;
//}
//void UninitList(Node* head, Node* tail) {
//	for (Node* p = head; p;) {
//		Node* cur = p;
//		p = p->next;
//		free(cur);
//	}
//}
//int main() {
//	Node* head;
//	Node* tail;
//
//	InitList(head, tail);
//	UninitList(head, tail);
//}

//���Ͽ��Ḯ��Ʈ - ����� ������ �ǽð����� ����/���� �Ǿ�� �Ѵ�.
#include <stdio.h>
#include <stdlib.h>
struct Node {
	int data;
	Node* link;
};
Node* AllocNode(int data) {
	Node* n = (Node*)malloc(sizeof(Node));
	n->data = data;
	n->link = NULL;
	return n;
}
void PrintNode(Node* head) {
	for (Node* p = head; p->link; p = p->link)
		printf("%d ", p->data);
	printf("\n");
}
void AddList(Node* &head, int data)
{
	Node* n = AllocNode(data);
	n->link = head;
	head = n;
}
void InitList(Node* &head) {
	head = AllocNode(0);
}
void UninitLinst(Node* head) {
	for (Node* p = head; p;) {
		Node* cur = p;
		p = p->link;
		free(cur);
	}
}
void EraseList(Node* head, int data) {
	Node* pp = head; //p�� �������
	Node* p = NULL;
	for (p = head; p->link && p->data != data; p = p->link)
		pp = p;
	if (p->link) {
		pp->link = p->link;
		free(p);
	}
}
int main() {
	Node* head;

	InitList(head);
	AddList(head, 100);
	AddList(head, 200);
	AddList(head, 300);

	PrintNode(head);
	
	EraseList(head, 200);
	PrintNode(head);
	UninitLinst(head);
}

//#include <stdio.h>
//#include <stdlib.h>
//struct Node {
//	int data;
//	Node* link;
//};
//Node* AllocNode(int data) {
//	Node* n = (Node*)malloc(sizeof(Node));
//	n->data = data;
//	n->link = NULL;
//	return n;
//}
//void PrintNode(Node* head) {
//	for (Node* p = head; p->link; p = p->link) //p�� dummy �ΰ� �˾Ƽ� p->link�� �Ѵ�
//		printf("%d ", p->data);
//	printf("\n");
//}
//void AddList(Node* &head, int data)
//{ 
//	Node* n = AllocNode(data); 
//	n->link = head;
//	head = n;
//}
//void InitList(Node* &head) {
//	head = AllocNode(0); //dummy node �ʱ�ȭ��
//}
//void UninitLinst(Node* head) {
//	for (Node* p = head; p; p = p->link) {
//		Node* cur = p;
//		p = p->link;
//		free(cur);
//	} //p�� cur����Ű�� p�̵��� cur�����ڵ� 
//}
//int main() {
//	Node* head; 
//
//	InitList(head);
//	AddList(head, 100);
//	AddList(head, 200);
//	AddList(head, 300);
//
//	PrintNode(head);
//	UninitLinst(head);
//}

//#include <stdio.h>
//#include <stdlib.h>
//struct Node {
//	int data;
//	Node* link;
//};
//Node* AllocNode(int data) {
//	Node* n = (Node*)malloc(sizeof(Node));
//	n->data = data;
//	n->link = NULL;
//	return n;
//}
//void PrintNode(Node* head) {
//	if (head) {
//		printf("%d ", head->data);
//		PrintNode(head->link);
//	}
//}
//void AddList(Node* &head, int data)
//{ //head�� NULL�̶�� ���� ����
//	Node* n = AllocNode(data); //���ο� ���
//	n->link = head;
//	head = n;
//}
//int main() {
//	Node* head = AllocNode(0); //null���
//
//	AddList(head, 100);
//	AddList(head, 200);
//	AddList(head, 300);
//
//	PrintNode(head);
//}

//#include <stdio.h>
//#include <stdlib.h>
//struct Node {
//	int data;
//	Node* link;
//};
//Node* AllocNode(int data) {
//	Node* n = (Node*)malloc(sizeof(Node));
//	n->data = data;
//	n->link = NULL;
//	return n;
//}
//void PrintNode(Node* head) {
//	if (head) {
//		printf("%d ", head->data);
//		PrintNode(head->link);
//	}
//}
//void AddList(Node* &head, int data) {
//	if (head == NULL)
//		head = AllocNode(data);
//	else {
//		Node* n = AllocNode(data); //���ο� ���
//		n->link = head;
//		head = n;
//	}
//}
//int main() {
//	Node* head = NULL;
//
//	AddList(head, 100);
//	AddList(head, 200);
//	AddList(head, 300);
//
//	PrintNode(head);
//}

//������ �ذ��� ��.. �߸��Ǿ���.
//#include <stdio.h>
//#include <stdlib.h>
//struct Node {
//	int data;
//	Node* link;
//};
//Node* AllocNode(int data) {
//	Node* n = (Node*)malloc(sizeof(Node));
//	n->data = data;
//	n->link = NULL;
//	return n;
//}
//void PrintNode(Node* head) {
//	if (head) {
//		printf("%d ", head->data);
//		PrintNode(head->link);
//	}
//}
//void AddList(Node* &head, int data) {
//	if (head == NULL)
//		head = AllocNode(data);
//	else {
//		Node* t = head; //���� ����� tail p->link�� NULL��
//		while (t->link)
//			t = t->link;
//		t->link = AllocNode(data); 
//	}
//}
//int main() {
//	Node* head = NULL;
//
//	AddList(head, 100);
//	AddList(head, 200);
//	AddList(head, 300);
//
//	PrintNode(head);
//}

//#include <stdio.h>
//#include <stdlib.h>
//struct Node {
//	int data;
//	Node* link;
//};
//Node* AllocNode(int data) {
//	Node* n = (Node*)malloc(sizeof(Node));
//	n->data = data;
//	n->link = NULL;
//	return n;
//}
//void PrintNode(Node* head) {
//	if (head) {
//		printf("%d ", head->data);
//		PrintNode(head->link);
//	}
//}
//void AddList(Node* &head, int data) {
//	if (head == NULL)
//		head = AllocNode(data); 
//	else
//		head->link = AllocNode(data);
//}
//int main() {
//	Node* head = NULL;
//
//	AddList(head, 100); //if�������� head�� ����
//	AddList(head, 200); //else�������� head->link�� ����
//	AddList(head, 300); //else�� �ǽ���Ǽ� head->link�� ����Ǽ�
//
//	PrintNode(head); //100 300��µȴ�.
//}

// ������ �ȵȴ� ��¥�� ��?
//#include <stdio.h>
//#include <stdlib.h>
//struct Node {
//	int data;
//	Node* link;
//};
//Node* AllocNode(int data) {
//	Node* n = (Node*)malloc(sizeof(Node));
//	n->data = data;
//	n->link = NULL;
//	return n;
//}
//void PrintNode(Node* head) {
//	if (head) {
//		printf("%d ", head->data);
//		PrintNode(head->link);
//	}
//}
//void AddList(Node* head, int data) {
//	if (head == NULL)
//		head = AllocNode(data);
//	else
//		head->link = AllocNode(data);
//}
//int main() {
//	Node* head = NULL;
//
//	AddList(head, 100);
//	AddList(head, 200);
//	AddList(head, 300);
//
//	PrintNode(head);
//}

//#include <stdio.h>
//#include <stdlib.h>
//struct Node {
//	int data;
//	Node* link;
//};
//Node* AllocNode(int data) {
//	Node* n = (Node*)malloc(sizeof(Node));
//	n->data = data;
//	n->link = NULL;
//	return n;
//}
//void PrintNode(Node* head) {
//	if (head) {
//		printf("%d ", head->data);
//		PrintNode(head->link);
//	}
//}
//int main() {
//	Node* head = NULL;
//	Node* p = NULL;
//
//	p = AllocNode(100);
//	head = p;
//
//	p = AllocNode(200);
//	head->link = p;
//
//	p = AllocNode(300);
//	head->link->link = p;
//
//	PrintNode(head);
//}


//#include <stdio.h>
//#include <stdlib.h>
//struct Node {
//	int data;
//	Node* link;
//};
//Node* AllocNode(int data) {
//	Node* n = (Node*)malloc(sizeof(Node));
//	n->data = data;
//	n->link = NULL;
//	return n;
//}
//void PrintNode(Node* head) {
//	for (Node* p = head; p; p=p->link) //p!=NULL
//		printf("%d ", p->data);
//	printf("\n");
//}
//int main() {
//	Node* head = NULL;
//	Node* p = NULL;
//
//	p = AllocNode(100);
//	head = p;
//
//	p = AllocNode(200);
//	head->link = p;
//
//	p = AllocNode(300);
//	head->link->link = p;
//
//	PrintNode(head);
//}

//#include <stdio.h>
//#include <stdlib.h>
//struct Node {
//	int data;
//	Node* link;
//};
//Node* AllocNode(int data) {
//	Node* n = (Node*)malloc(sizeof(Node));
//	n->data = data;
//	n->link = NULL;
//	return n;
//}
//int main() {
//	Node* head = NULL;
//	Node* p = NULL;
//
//	p = AllocNode(100);
//	head = p;
//
//	p = AllocNode(200);
//	head->link = p;
//
//	p = AllocNode(300);
//	head->link->link = p;
//
//	printf("%d\n", head->data);
//	printf("%d\n", head->link->data);
//	printf("%d\n", head->link->link->data);
//}

//#include <stdio.h>
//#include <stdlib.h>
//struct Node {
//	int data;
//	Node* link;
//};
//int main() {
//	Node* head = NULL;
//	Node* p = NULL;
//
//	p = (Node*)malloc(sizeof(Node));
//	p->data = 100;
//	p->link = NULL;
//	head = p;
//
//	p = (Node*)malloc(sizeof(Node));
//	p->data = 200;
//	p->link = NULL;
//	head->link = p;
//
//	p = (Node*)malloc(sizeof(Node));
//	p->data = 300;
//	p->link = NULL;
//	head->link->link = p;
//
//	printf("%d\n", head->data);
//	printf("%d\n", head->link->data);
//	printf("%d\n", head->link->link->data);
//}

//#include <stdio.h>
//#include <stdlib.h>
//struct Node {
//	int data;
//	Node* link;
//};
//int main() {
//	Node* head = NULL;
//	Node* p = NULL;
//
//	p = (Node*)malloc(sizeof(Node));
//	p->data = 100;
//	p->link = NULL;
//	head = p;
//
//	printf("%d\n", head->data);
//
//	p = (Node*)malloc(sizeof(Node));
//	p->data = 200;
//	p->link = NULL;
//	head->link = p;
//
//	printf("%d\n", head->data);
//	printf("%d\n", head->link->data);
//}


//#include <stdio.h>
//#include <stdlib.h>
//struct Node {
//	int data;
//	Node* link;
//};
//int main() {
//	Node* head = NULL;
//	Node* p = NULL;
//
//	p = (Node*)malloc(sizeof(Node));
//	p->data = 100;
//	p->link = NULL;
//
//	head = p;
//
//	printf("%d\n", head->data);
//}

//#include <stdio.h>
//struct Node {
//	int data;
//	Node* link;
//};
//int main() {
//	Node n1 = { 100 };
//
//	printf("%d\n", n1.data);
//}