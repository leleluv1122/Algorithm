//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//int main()
//{
//	char* c;
//	int* p;
//	void* v;
//
//	p = (int*)calloc(5, sizeof(int));
//	c = (char*)p; // ������ �ּ�
//	v = (void*)c;
//
//	printf("%x %x %x\n", p, c, v);
//	printf("%x %x %x\n", p + 1, c + 1, (int*)v + 1); //v�� int��ŭ �ǳʶٰ� �ʹ�.
//	printf("%x %x %x\n", p + 1, c + 1, (char*)v + 1); //v�� char��ŭ �ǳʶٰ� �ʹ�.
//	printf("\n");
//	free(p);
//}

//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//int main()
//{
//	char* c;
//	int* p;
//	void* v;
//
//	p = (int*)calloc(5, sizeof(int));
//	c = (char*)p; // ������ �ּ�
//	v = (void*)c;
//
//	printf("%x %x %x\n", p, c, v);
//	printf("%x %x %x\n", p + 1, c + 1, (int*)v + 1); //v�� int��ŭ �ǳʶٰ� �ʹ�.
//	printf("%x %x %x\n", p + 1, c + 1, (char*)v + 1); //v�� char��ŭ �ǳʶٰ� �ʹ�.
//	printf("\n");
//	free(p);
//}

//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//int main()
//{
//	char* c;
//	int* p;
//	void* v;
//
//	p = (int*)calloc(5, sizeof(int));
//	c = (char*)p; // ������ �ּ�
//	v = (void*)c;
//
//	printf("%x %x %x\n", p, c, v);
//	printf("%x %x %x\n", p + 1, c + 1, v + 1); //����
//	printf("\n");
//	free(p);
//}

//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//int main()
//{
//	char* c;
//	int* p;
//
//	p = (int*)calloc(5, sizeof(int));
//	c = (char*)p; // ������ �ּ�
//
//	printf("%x %x\n", p, c);
//	printf("%x %x\n", p+1, c+1); //char���� 1 int���� 4
//	printf("\n");
//	free(p);
//}

//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//int main()
//{
//	int* p = (int*)calloc(5, sizeof(int));
//	for (int i = 0; i < 5; ++i)
//		p[i] = (i + 1) * 10;
//
//	for (int i = 0; i < 5; ++i)
//		printf("%10x", p + i); //16����
//	printf("\n");
//
//	free(p);
//}

//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//int main()
//{
//	int* p = (int*)malloc(sizeof(int) * 5);
//	for (int i = 0; i < 5; ++i)
//		p[i] = (i + 1) * 10;
//
//	for (int i = 0; i < 5; ++i)
//		printf("%10x", p+i); //16����
//	printf("\n");
//
//	free(p);
//}

//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//int main() 
//{
//	int* p = (int*)malloc(sizeof(int) * 5);
//	for (int i = 0; i < 5; ++i)
//		p[i] = i * 10 + 1;
//
//	for (int i = 0; i < 5; ++i)
//		printf("%5d", p[i]);
//	printf("\n");
//
//	free(p);
//}

//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//struct Person {
//	char name[20];
//	char phone[20];
//	int age;
//};
///////////////server///////////////////
//int Bsearch(void* key, void* x, int xn, int size, int(*compare)(void*, void*))
//{
//	//void* : Ÿ�Կ� ���� void�� �ּ� //������ �˼�������
//	//ã�����ϴ� �� key
//	//����� �ּ� x
//	//������ ���� xn
//	int left = 0;
//	int right = xn - 1;
//	int middle;
//	while (left <= right) { //��������
//		middle = (left + right) / 2;
//		switch (compare(key, (char*)x + (middle * size)))
//			
//		{
//		case 1:
//			left = middle + 1;
//			break;
//		case -1:
//			right = middle - 1;
//			break;
//		case 0:
//			return middle;
//		}
//	}
//	return -1;
//}
///////////////client///////////////////
//int compare(int* a, int* b) {
//	if (*a > *b)
//		return 1;
//	else if (*a < *b)
//		return -1;
//	else
//		return 0;
//}
//int main() {
//	int list[10] = { 20, 24, 26, 30, 35,40,70,72,84,96 };
//	int key = 30;
//	int* p = (int*)bsearch(&key, list, 10, sizeof(int)
//		, (int(*)(const void*, const void*))compare); 
//	if (p != NULL)
//		printf("list[%d]: %d ", (int)(p - list), *p);  //�ּҳ����� �� int�� ����ȯ..
//}

//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//struct Person {
//	char name[20];
//	char phone[20];
//	int age;
//};
//
///////////////server///////////////////
//int Bsearch(void* key, void* x, int xn, int size, int(*compare)(void*, void*))
//{
//	//void* : Ÿ�Կ� ���� void�� �ּ� //������ �˼�������
//	//ã�����ϴ� �� key
//	//����� �ּ� x]
//	//������ ���� xn
//	int left = 0;
//	int right = xn - 1;
//	int middle;
//	while (left <= right) { //��������
//		middle = (left + right) / 2;
//		switch (compare(key, (char*)x + (middle * size)))
//			//key��ü�� �ּ�, 1byte�� �����Ҽ��մ� 
//		{
//		case 1:
//			left = middle + 1;
//			break;
//		case -1:
//			right = middle - 1;
//			break;
//		case 0:
//			return middle;
//		}
//	}
//	return -1;
//}
///////////////client///////////////////
//int compare(int* a, int* b) {
//	if (*a > *b)
//		return 1;
//	else if (*a < *b)
//		return -1;
//	else
//		return 0;
//}
//int main() {
//	int list[10] = { 20, 24, 26, 30, 35,40,70,72,84,96 };
//	int key = 30;
//	int* p = (int*)bsearch(&key, list, 10, sizeof(int)
//		, (int(*)(const void*, const void*))compare); //������ �ּ� ��ȯ
//	if (p != NULL)
//		printf("list[%d]: %d ", (p-list), *p);  //*p �ϸ� �������빰���
//	//p���� �����ּ�x�� ���� �׷� ���̰� ���´�
//}

//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//struct Person {
//	char name[20];
//	char phone[20];
//	int age;
//};
//
///////////////server///////////////////
//int Bsearch(void* key, void* x, int xn, int size, int(*compare)(void*, void*))
//{
//	//void* : Ÿ�Կ� ���� void�� �ּ� //������ �˼�������
//	//ã�����ϴ� �� key
//	//����� �ּ� x]
//	//������ ���� xn
//	int left = 0;
//	int right = xn - 1;
//	int middle;
//	while (left <= right) { //��������
//		middle = (left + right) / 2;
//		switch (compare(key, (char*)x + (middle * size)))
//			//key��ü�� �ּ�, 1byte�� �����Ҽ��մ� 
//		{
//		case 1:
//			left = middle + 1;
//			break;
//		case -1:
//			right = middle - 1;
//			break;
//		case 0:
//			return middle;
//		}
//	}
//	return -1;
//}
///////////////client///////////////////
//int compare(int* a, int* b) {
//	if (*a > *b)
//		return 1;
//	else if (*a < *b)
//		return -1;
//	else
//		return 0;
//}
//int main() {
//	int list[10] = { 20, 24, 26, 30, 35,40,70,72,84,96 };
//	int key = 30;
//	int idx = Bsearch(&key, list, 10, sizeof(int)
//		, (int(*)(void*, void*))compare);
//	if (idx != -1)
//		printf("list[%d]: %d ", idx, list[idx]);
//}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Person {
	char name[20];
	char phone[20];
	int age;
};

/////////////server///////////////////
int Bsearch(void* key, void* x, int xn, int size, int(*compare)(void*, void*))
{
	//void* : Ÿ�Կ� ���� void�� �ּ� //������ �˼�������
	//ã�����ϴ� �� key
	//����� �ּ� x
	//������ ���� xn
	int left = 0;
	int right = xn - 1;
	int middle;
	while (left <= right) { //��������
		middle = (left + right) / 2;
		switch (compare(key, (char*)x + (middle * size))) 
			//key��ü�� �ּ�, 1byte�� �����Ҽ��մ� 
		{
		case 1:
			left = middle + 1;
			break;
		case -1:
			right = middle - 1;
			break;
		case 0:
			return middle;
		}
	}
	return -1;
}
/////////////client///////////////////
int compare(Person* a, Person* b) {
	return strcmp(a->phone, b->phone);
}
int main() {

	Person list[5] = { { "ȫ�浿", "010-2345-7834", 25 }
		,{ "����", "010-2345-6734", 26 }
		,{ "�Ӳ���", "010-2345-4334", 27 }
		,{ "�̸���", "010-2345-4234", 28 }
		,{ "������", "010-2345-1234", 29 }
	};

	Person key = { "","010-2345-4334" ,0 };
	int idx = Bsearch(&key, list, 5, sizeof(Person)
		, (int(*)(void*, void*))compare);
	if (idx != -1)
		printf("list[%d]: %s ", idx, list[idx].phone);
}

//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//struct Person {
//	char name[20];
//	char phone[20];
//	int age;
//};
//
///////////////server///////////////////
//int Bsearch(Person x[], int size, Person key, int(*compare)(Person, Person))
//{
//	int left = 0;
//	int right = size - 1;
//	int middle;
//	while (left <= right) { //��������
//		middle = (left + right) / 2;
//		switch (compare(key, x[middle]))
//		{
//		case 1:
//			left = middle + 1; //middle�� �ٽ� ���� �ʿ䰡 ����
//			break;
//		case -1:
//			right = middle - 1;
//			break;
//		case 0:
//			return middle;
//		}
//	}
//	return -1;
//}
///////////////client///////////////////
//int compare(Person a, Person b) {
//	return strcmp(a.phone, b.phone);
//}
//int main() {
//	
//	Person list[5] = { { "ȫ�浿", "010-2345-7834", 25 }
//		,{ "����", "010-2345-6734", 26 }
//		,{ "�Ӳ���", "010-2345-4334", 27 }
//		,{ "�̸���", "010-2345-4234", 28 }
//		,{ "������", "010-2345-1234", 29 }
//	};
//
//	Person key = { "","010-2345-4334" ,0 };
//	int idx = Bsearch(list, 5, key, compare);
//	if (idx != -1)
//		printf("list[%d]: %s ", idx, list[idx].phone);
//}

//#include <stdio.h>
//#include <stdlib.h>
///////////////server///////////////////
//int Bsearch(int x[], int size, int key, int (*compare)(int,int)) //����å call back ���� �Լ�������
//{
//	int left = 0;
//	int right = size - 1;
//	int middle;
//	while (left <= right) { //��������
//		middle = (left + right) / 2;
//		switch (compare(key, x[middle]))
//		{
//		case 1:
//			left = middle + 1; //middle�� �ٽ� ���� �ʿ䰡 ����
//			break;
//		case -1:
//			right = middle - 1;
//			break;
//		case 0:
//			return middle;
//		}
//	}
//	return -1;
//}
///////////////client///////////////////
//int compare(int a, int b) {
//	if (a > b)
//		return 1;
//	else if (a < b)
//		return -1;
//	else
//		return 0;
//}
//int main() {
//	int list[10] = { 24,50,67,69,72,75,78,80,85,90 }; //����ٲ��� client�ڵ��� compare�ٲٸ餷
//
//	int idx = Bsearch(list, 10, 85, compare);
//	if (idx != -1)
//		printf("list[%d]: %d ", idx, list[idx]);
//}

//#include <stdio.h>
//#include <stdlib.h>
//int compare(int a, int b) {
//	if (a > b)
//		return 1;
//	else if (a < b)
//		return -1;
//	else
//		return 0;
//}
//int Bsearch(int x[], int size, int key)
//{
//	int left = 0;
//	int right = size - 1;
//	int middle;
//	while (left <= right) { //��������
//		middle = (left + right) / 2;
//		switch (compare(key, x[middle]))
//		{
//		case 1:
//			left = middle + 1; //middle�� �ٽ� ���� �ʿ䰡 ����
//			break;
//		case -1:
//			right = middle - 1;
//			break;
//		case 0:
//			return middle;
//		}
//	}
//	return -1;
//}
//int main() {
//	int list[10] = { 24,50,67,69,72,75,78,80,85,90 };
//
//	int idx = Bsearch(list, 10, 85);
//	if (idx != -1)
//		printf("list[%d]: %d ", idx, list[idx]);
//}

//#include <stdio.h>
//#include <stdlib.h>
//struct Person {
//	char name[20];
//	char phone[20];
//	int age;
//};
//int compare(int a, int b) {
//	if (a > b)
//		return 1;
//	else if (a < b)
//		return -1;
//	else
//		return 0;
//}
//int Bsearch(Person x[], int size, int key)
//{
//	int left = 0;
//	int right = size - 1;
//	int middle;
//	while (left <= right) { //��������
//		middle = (left + right) / 2;
//		switch (compare(key, x[middle]))
//		{
//		case 1:
//			left = middle + 1; //middle�� �ٽ� ���� �ʿ䰡 ����
//			break;
//		case -1:
//			right = middle - 1;
//			break;
//		case 0:
//			return middle;
//		}
//	}
//	return -1;
//}
//int main() {
//	Person list[5] = { { "ȫ�浿", "010-2345-6789", 25 }
//		,{ "�Ӳ���", "010-2245-6789", 26 }
//		,{ "����", "010-2445-6789", 27 }
//		,{ "�̸���", "010-2355-6789", 28 }
//		,{ "������", "010-2845-6789", 29 }
//	};
//	for (int i = 0; i < 5; ++i) {
//		printf("name: %s, phone: %s, age: %d\n",
//			list[i].name, list[i].phone, list[i].age);
//	}
//}

//#include <stdio.h>
//#include <stdlib.h>
//struct Person {
//	char name[20];
//	char phone[20];
//	int age;
//};
//int compare(int a, int b) {
//	if (a > b)
//		return 1;
//	else if (a < b)
//		return -1;
//	else
//		return 0;
//}
//int Bsearch(int x[], int size, int key)
//{
//	int left = 0;
//	int right = size - 1;
//	int middle;
//	while (left <= right) { //��������
//		middle = (left + right) / 2;
//		switch (compare(key, x[middle]))
//		{
//		case 1:
//			left = middle + 1; //middle�� �ٽ� ���� �ʿ䰡 ����
//			break;
//		case -1:
//			right = middle - 1;
//			break;
//		case 0:
//			return middle;
//		}
//	}
//	return -1;
//}
//int main() {
//	Person list[5] = { { "ȫ�浿", "010-2345-6789", 25 }
//		,{ "�Ӳ���", "010-2245-6789", 26 }
//		,{ "����", "010-2445-6789", 27 }
//		,{ "�̸���", "010-2355-6789", 28 }
//		,{ "������", "010-2845-6789", 29 }
//	};
//	for (int i = 0; i < 5; ++i) {
//		printf("name: %s, phone: %s, age: %d\n",
//			list[i].name, list[i].phone, list[i].age);
//	}
//}

//#include <stdio.h>
//#include <stdlib.h>
//struct Person {
//	char name[20];
//	char phone[20];
//	int age;
//};
//int compare(int a, int b) {
//	if (a > b)
//		return 1;
//	else if (a < b)
//		return -1;
//	else
//		return 0;
//}
//int Bsearch(int x[], int size, int key)
//{
//	int left = 0;
//	int right = size - 1;
//	int middle;
//	while (left <= right) { //��������
//		middle = (left + right) / 2;
//		switch (compare(key, x[middle]))
//		{
//		case 1:
//			left = middle + 1; //middle�� �ٽ� ���� �ʿ䰡 ����
//			break;
//		case -1:
//			right = middle - 1;
//			break;
//		case 0:
//			return middle;
//		}
//	}
//	return -1;
//}
//int main() {
//	Person list[5] = { {"ȫ�浿", "010-2345-6789", 25}
//					,{ "�Ӳ���", "010-2245-6789", 26 }
//					,{ "����", "010-2445-6789", 27 }
//					,{"�̸���", "010-2355-6789", 28}
//					,{ "������", "010-2845-6789", 29 }
//	};
//
//	printf("name: %s, phone: %s, age: %d\n",
//		list[0].name, list[0].phone, list[0].age);
//	printf("name: %s, phone: %s, age: %d\n",
//		list[1].name, list[1].phone, list[1].age);
//	printf("name: %s, phone: %s, age: %d\n",
//		list[2].name, list[2].phone, list[2].age);
//	printf("name: %s, phone: %s, age: %d\n",
//		list[3].name, list[3].phone, list[3].age);
//	printf("name: %s, phone: %s, age: %d\n",
//		list[4].name, list[4].phone, list[4].age);
//}