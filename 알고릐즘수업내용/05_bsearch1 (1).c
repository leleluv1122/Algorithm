#include <stdio.h>
#include <stdlib.h>
int compare(int a, int b) {
	if (a > b)
		return 1;
	else if (a < b)
		return -1;
	else
		return 0;
}
int Bsearch(int x[], int size, int key)
{
	int left = 0;
	int right = size - 1;
	int middle;
	while (left <= right) { //��������
		middle = (left + right) / 2;
		switch (compare(x[middle], key))
		{
		case 1:
			left = middle + 1; //middle�� �ٽ� ���� �ʿ䰡 ����
		case -1:
			right = middle - 1;
		case 0:
			return middle;
		}
	}
	return -1;
}
int main() {
	int x[10] = { 10,15,22,26,28,30,59,69,78,80 };

	int idx = Bsearch(x, 10, 27);
	if (idx != -1)
		printf("%d�� x: %dindex ����!", x[idx], idx);
	else
		printf("����!\n");
}

//#include <stdio.h>
//#include <stdlib.h>
//int Bsearch(int x[], int size, int key)
//{
//	int left = 0;
//	int right = size - 1;
//	int middle;
//	while (left <= right) { //��������
//		middle = (left + right) / 2;
//		if (x[middle] < key)
//			left = middle + 1; //middle�� �ٽ� ���� �ʿ䰡 ����
//		else if (x[middle] > key)
//			right = middle - 1;
//		else
//			return middle;
//	}
//	return -1;
//}
//int main() {
//	int x[10] = { 10,15,22,26,28,30,59,69,78,80 };
//
//	int idx = Bsearch(x, 10, 27);
//	if (idx != -1)
//		printf("%d�� x: %dindex ����!", x[idx], idx);
//	else
//		printf("����!\n");
//}

//#include <stdio.h>
//#include <stdlib.h>
//int Bsearch(int x[], int size, int key)
//{
//	int left = 0;
//	int right = size - 1;
//	int middle;
//	while (1) {
//		middle = (left + right) / 2;
//		if (x[middle] < key) 
//			left = middle + 1; //middle�� �ٽ� ���� �ʿ䰡 ����
//		else if (x[middle] > key) 
//			right = middle - 1;
//		else
//			return middle;
//	}
//	return -1;
//}
//int main() {
//	int x[10] = { 10,15,22,26,28,30,59,69,78,80 };
//
//	int idx = Bsearch(x, 10, 15);
//	if (idx != -1)
//		printf("%d�� x: %dindex ����!", x[idx], idx);
//	else
//		printf("����!\n");
//}

//#include <stdio.h>
//#include <stdlib.h>
//int Bsearch(int x[], int size)
//{
//	return -1;
//}
//int main() { 
//	int x[10] = { 10,15,22,26,28,30,59,69,78,80 };
//
//	int idx = Bsearch(x, 10);
//	if (idx != -1)
//		printf("%x�� %dindex ����!");
//	else
//		printf("����!\n");
//}

//#include <stdio.h>
//#include <stdlib.h> //bsearch
//int compare(char** a, char** b) {
//	return strcmp(*a, *b);
//}
//int main(void)
//{
//	char* ky = "80";
//	char* x[10] = { "10","15","22","26","28",
//					"30","59","69","78","80" };
//	char** p;
//	p = bsearch(&ky,
//		x,
//		10,
//		sizeof(char*),
//		compare
//	);
//
//	if (p == NULL)
//		puts("�˻��� �����߽��ϴ�.");
//	else
//		printf("%s�� x[%d]�� �ֽ��ϴ�.\n", ky, (int)(p - x));
//}

//#include <stdio.h>
//#include <stdlib.h> //bsearch
//int compare(double* a, double* b) {
//	if (*a > *b)
//		return 1;
//	else if (*a < *b)
//		return -1;
//	else
//		return 0;
//}
//int main(void)
//{
//	double ky = 69;
//	double x[10] = { 10,15,22,26,28,30,59,69,78,80 };
//	double* p;
//	p = bsearch(&ky,
//		x,
//		10,
//		sizeof(double),
//		compare
//	);
//
//	if (p == NULL)
//		puts("�˻��� �����߽��ϴ�.");
//	else
//		printf("%g�� x[%d]�� �ֽ��ϴ�.\n", ky, (int)(p - x));
//}

//#include <stdio.h>
//#include <stdlib.h> //bsearch
//int compare(int* a, int* b) {
//	if (*a > *b)
//		return 1;
//	else if (*a < *b)
//		return -1;
//	else
//		return 0;
//}
//int main(void)
//{
//	int ky = 69;
//	int x[10] = { 10,15,22,26,28,30,59,69,78,80 };
//	int* p;
//	p = bsearch(&ky,
//		x,	 							               
//		10,				 				               
//		sizeof(int),									
//		compare
//	);
//
//	if (p == NULL)
//		puts("�˻��� �����߽��ϴ�.");
//	else
//		printf("%d�� x[%d]�� �ֽ��ϴ�.\n", ky, (int)(p - x));
//}

///* bsearch �Լ��� ����Ͽ� ������������ ���ĵ� �迭�� �˻� */
//#include <stdio.h>
//#include <stdlib.h>
///*--- ������ ���ϴ� �Լ�(��������) ---*/
//int int_cmp(const int *a, const int *b)
//{
//	if (*a < *b)
//		return -1;
//	else if (*a > *b)
//		return 1;
//	else
//		return 0;
//}
//
//int main(void)
//{
//	int i, nx, ky;
//	int *x;		 		/* �迭�� ù ��° ��ҿ� ���� ������ */
//	int *p; 	        /* �˻��� ��ҿ� ���� ������ */
//	
//	puts("bsearch �Լ��� ����Ͽ� �˻�");
//	printf("����� ���� : ");
//	scanf("%d", &nx);
//	x = calloc(nx, sizeof(int)); 		/* ����� ���� nx�� int�� �迭�� ���� */
//
//	printf("������������ �Է��ϼ���.\n");
//	printf("x[0] : ");
//	scanf("%d", &x[0]);
//	for (i = 1; i < nx; i++) {
//		do {
//			printf("x[%d] : ", i);
//			scanf("%d", &x[i]);
//		} while (x[i] < x[i - 1]); 	/* �ٷ� ���� ������ ������ �ٽ� �Է� */
//	}
//
//	printf("�˻� �� : ");
//	scanf("%d", &ky);
//	p = bsearch(&ky, 					                /* �˻� ���� ���� ������ */
//		x,	 							                /* �迭 */
//		nx,				 				                /* ����� ���� */
//		sizeof(int),									/* ����� ũ�� */
//		(int(*)(const void *, const void *)) int_cmp 	/* �� �Լ� */
//	);
//
//	if (p == NULL)
//		puts("�˻��� �����߽��ϴ�.");
//	else
//		printf("%d�� x[%d]�� �ֽ��ϴ�.\n", ky, (int)(p - x));
//	
//	free(x); 		/* �迭�� ���� */
//
//	return 0;
//}