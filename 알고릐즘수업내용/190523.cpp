///////////////////////////////���Ḯ��Ʈ(���)
//#include <stdio.h>
//struct Node {
//	int data;
//	Node* link;
//};
//int main() {
//	Node n1 = { 10,NULL };
//	Node n2 = { 20,NULL };
//	Node n3 = { 30,NULL };
//	Node* head;
//
//	head = &n1;
//	n1.link = &n2;
//	n2.link = &n3;
//
//	Node* p = head;
//
//	printf("%d\n", p->data);
//	p = p->link;
//	printf("%d\n", p->data);
//	p = p->link;
//	printf("%d\n", p->data);
//}

//#include <stdio.h>
//struct Node {
//	int data;
//	Node* link;
//};
//int main() {
//	Node n1 = { 10,NULL };
//	Node n2 = { 20,NULL };
//	Node n3 = { 30,NULL };
//	Node* head;
//
//	head = &n1;
//	n1.link = &n2;
//	n2.link = &n3;
//	printf("%d\n", head->data);
//	printf("%d\n", head->link->data);
//	printf("%d\n", head->link->link->data);
//}

//#include <stdio.h> //���Ͽ��Ḯ��Ʈ 
//struct Node {
//	int data;
//	Node* link;
//};
//int main() {
//	Node n1 = { 10,NULL };
//	Node n2 = { 20,NULL };
//	Node n3 = { 30,NULL };
//	Node* head;
//
//	head = &n1;
//	n1.link = &n2;
//	n2.link = &n3;
//	printf("%d\n", n1);
//	printf("%d\n", n2);
//	printf("%d\n", n3);
//}

//#include <stdio.h>
//struct Node {
//	int data;
//	Node* link; //�ڱ�����
//};
//int main() {
//	Node n1 = { 10,NULL };
//	Node n2 = { 20,NULL };
//	Node n3 = { 30,NULL };
//
//	printf("%d\n", n1);
//	printf("%d\n", n2);
//	printf("%d\n", n3);
//}



////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////
//////////////////////////////���ڷᱸ�� - ������/////////////
//#include <stdio.h>
//#include <algorithm>
//using namespace std;
//void PrintList(int list[], int size) {
//	printf("size: %d\n", list[0]); //list[0]�� size�־����� ��
//	for (int i = 1; i <= size; ++i)
//		printf("%5d", list[i]);
//	printf("\n");
//}
//void Swap(int& a, int& b) {
//	int t = a;
//	a = b;
//	b = t;
//}
//void Push_Heap(int list[], int size) {
//	list[0] = size;
//	int child = size;
//	int parent = child / 2;
//	while (parent >= 1) {
//		if (list[child] > list[parent])
//			Swap(list[child], list[parent]);
//		else
//			break;
//		child = parent;
//		parent = child / 2;
//	}
//}
//void Make_Heap(int list[], int size) {
//	for (int i = 0; i < size; ++i) //for�� 10�� ������
//		Push_Heap(list, ++list[0]); //1~10���� ������ 
//}
//void Pop_Heap(int list[], int& size) { //���ؾߵǼ� ���� 
//	// ���������Ҷ� ��Ʈ���Ҹ� �ٲ۴�. ������ ���Ҵ� heap�� ����ִ°� �ƴ�
//	list[0] = --size;
//	Swap(list[1], list[size + 1]); //���ҽ��ѳ��� +1����
//	int parent = 1;
//	int child = parent * 2;
//	while (child <= size) {
//		if (child < size && list[child] < list[child + 1])
//			child = child + 1; // child���� �������ؼ� ū�Ͱ� ���Ѵ�
//		if (list[parent] < list[child])
//			Swap(list[parent], list[child]);
//		else
//			break;
//		parent = child;
//		child = parent * 2;
//	}
//}
//void Sort_Heap(int list[], int size) {
//	int heapSize = size;
//	for (int i = 0; i < size; ++i)
//		Pop_Heap(list, heapSize); //--�� �Ǽ� root - 10 9 8 7 ~~~ ��������
//} //������ pop 10�� �ϸ� ����
//int main() {
//	int list[20] = { 0,  20,50,70,60,25,45,92,38,76,65 };
//	//int list[20] = { 0,  70,20,50,60,25,45,92,38,76,65 };
//	int heapSize = 10;
//
//	Make_Heap(list, 10);
//	PrintList(list, 10);
//	Sort_Heap(list, 10);
//	PrintList(list, 10);
//}

//////////////////////////////�ڵ尳���ϱ�...??
//#include <stdio.h>
//#include <algorithm>
//using namespace std;
//void PrintList(int list[], int size) {
//	printf("size: %d\n", list[0]); //list[0]�� size�־����� ��
//	for (int i = 1; i <= size; ++i)
//		printf("%5d", list[i]);
//	printf("\n");
//}
//void Swap(int& a, int& b) {
//	int t = a;
//	a = b;
//	b = t;
//}
//void Push_Heap(int list[], int size) {
//	list[0] = size;
//	int child = size;
//	int parent = child / 2;
//	while (parent >= 1) {
//		if (list[child] > list[parent])
//			Swap(list[child], list[parent]);
//		else
//			break;
//		child = parent;
//		parent = child / 2;
//	}
//}
//void Make_Heap(int list[], int size) {
//	for (int i = 0; i < size; ++i)
//		Push_Heap(list, ++list[0]);
//}
//void Pop_Heap(int list[], int& size) { //���ؾߵǼ� ���� 
//	// ���������Ҷ� ��Ʈ���Ҹ� �ٲ۴�. ������ ���Ҵ� heap�� ����ִ°� �ƴ�
//	list[0] = --size;
//	Swap(list[1], list[size + 1]); //���ҽ��ѳ��� +1����
//	int parent = 1;
//	int child = parent * 2;
//	while (child <= size) {
//		if (child < size && list[child] < list[child + 1])
//			child = child + 1; // child���� �������ؼ� ū�Ͱ� ���Ѵ�
//		if (list[parent] < list[child])
//			Swap(list[parent], list[child]);
//		else
//			break;
//		parent = child;
//		child = parent * 2;
//	}
//}
//int main() {
//	//int list[20] = { 10,  20,50,70,60,25,45,92,38,76,65 };
//	int list[20] = { 0,  70,20,50,60,25,45,92,38,76,65 };
//	int heapSize = 10;
//
//	Make_Heap(list, 10);
//	PrintList(list, 10);
//	Pop_Heap(list, heapSize);
//	Pop_Heap(list, heapSize);
//	Pop_Heap(list, heapSize);
//	Pop_Heap(list, heapSize);
//	Pop_Heap(list, heapSize);
//	Pop_Heap(list, heapSize);
//	Pop_Heap(list, heapSize);
//	Pop_Heap(list, heapSize);
//	Pop_Heap(list, heapSize);
//	Pop_Heap(list, heapSize);
//	PrintList(list, 10);
//}

//#include <stdio.h>
//#include <algorithm>
//using namespace std;
//void PrintList(int list[], int size) {
//	printf("size: %d\n", list[0]); //list[0]�� size�־����� ��
//	for (int i = 1; i <= size; ++i)
//		printf("%5d", list[i]);
//	printf("\n");
//}
//void Swap(int& a, int& b) {
//	int t = a;
//	a = b;
//	b = t;
//}
//void Push_Heap(int list[], int size) {
//	list[0] = size;
//	int child = size;
//	int parent = child / 2;
//	while (parent >= 1) {
//		if (list[child] > list[parent])
//			Swap(list[child], list[parent]);
//		else
//			break;
//		child = parent;
//		parent = child / 2;
//	}
//}
//int main() {
//	//int list[20] = { 10,  20,50,70,60,25,45,92,38,76,65 };
//	int list[20] = { 0,  70,20,50,60,25,45,92,38,76,65 };
//	int heapSize = 0; 
//
//	Push_Heap(list, ++heapSize); 
//	Push_Heap(list, ++heapSize); 
//	Push_Heap(list, ++heapSize); 
//	Push_Heap(list, ++heapSize); 
//	Push_Heap(list, ++heapSize); 
//	Push_Heap(list, ++heapSize); 
//	Push_Heap(list, ++heapSize);
//	Push_Heap(list, ++heapSize);
//	Push_Heap(list, ++heapSize);
//	Push_Heap(list, ++heapSize);
//	PrintList(list, 10);
//}

//#include <stdio.h>
//#include <algorithm>
//using namespace std;
//void PrintList(int list[], int size) {
//	printf("size: %d\n", list[0]); //list[0]�� size�־����� ��
//	for (int i = 1; i <= size; ++i)
//		printf("%5d", list[i]);
//	printf("\n");
//}
//void Swap(int& a, int& b) {
//	int t = a;
//	a = b;
//	b = t;
//}
//void Push_Heap(int list[], int size) {
//	list[0] = size;
//	int child = size;
//	int parent = child / 2;
//	while (parent >= 1) { //0�� ħ������ �ʰ�..
//		if (list[child] > list[parent])
//			Swap(list[child], list[parent]);
//		else
//			break;
//		child = parent; //index��ȣ �ٲٱ�
//		parent = child / 2; //index��ȣ �ٲٱ�
//	}
//}//4�� ���´�
//int main() {
//	//int list[20] = { 10,  20,50,70,60,25,45,92,38,76,65 };
//	int list[20] = { 3,  70,20,50,60,25,45,92,38,76,65 };
//	int heapSize = 3; //3���� �־��ٰ� ����.
//	
//	PrintList(list, 10);
//	Push_Heap(list, ++heapSize); //4�� ��������
//	Push_Heap(list, ++heapSize); //5�� ��������
//	Push_Heap(list, ++heapSize); //6�� ��������
//	Push_Heap(list, ++heapSize); //7�� ��������
//	Push_Heap(list, ++heapSize); //8�� ��������
//	Push_Heap(list, ++heapSize); //9�� ��������
//	Push_Heap(list, ++heapSize); //10�� ��������
//	PrintList(list, 10);
//}

//#include <stdio.h>
//#include <algorithm>
//using namespace std;
//void PrintList(int list[], int size) {
//	printf("size: %d\n", list[0]); //list[0]�� size�־����� ��
//	for (int i = 1; i <= size; ++i)
//		printf("%5d", list[i]);
//	printf("\n");
//}
//int main() {
//	int list[20] = { 10,20,50,70,60,25,45,92,38,76,65 };
//	PrintList(list, 10);
//
//
//}

//#include <stdio.h>
//#include <algorithm>
//using namespace std;
//int main() {
//	int list[10] = { 20,50,70,60,25,45,92,38,76,65 };
//
//	//make_heap(list, list + 10);
//	for (int i = 1; i <= 10; ++i)
//		push_heap(list, list + i);
//
//	//sort_heap(list, list + 10);
//	for (int i = 10; i > 0; --i)
//		pop_heap(list, list + i);
//
//	for (int i = 0; i < 10; ++i)
//		printf("%5d", list[i]);
//	printf("\n");
//}

//#include <stdio.h>
//#include <algorithm>
//using namespace std;
//int main() {
//	int list[10] = { 20,50,70,60,25,45,92,38,76,65 };
//
//	//make_heap(list, list + 10);
//	for (int i = 1; i <= 10; ++i)
//		push_heap(list, list + i);
//
//	sort_heap(list, list + 10); //��������
//	for (int i = 0; i < 10; ++i)
//		printf("%5d", list[i]);
//	printf("\n");
//}

//#include <stdio.h>
//#include <algorithm>
//using namespace std;
//int main() {
//	int list[10] = { 20,50,70,60,25,45,92,38,76,65 };
//
//	//make_heap(list, list + 10);
//	for (int i = 1; i <= 10; ++i)
//		push_heap(list, list + i);
//
//	for (int i = 0; i < 10; ++i)
//		printf("%5d", list[i]);
//	printf("\n");
//}

//#include <stdio.h>
//#include <algorithm>
//using namespace std;
//int main() {
//	int list[10] = { 20,50,70,60,25,45,92,38,76,65 };
//
//	make_heap(list, list + 10);
//
//	for (int i = 0; i < 10; ++i)
//		printf("%5d", list[i]);
//	printf("\n");
//}