#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void Print(int n)
{
	printf("Print : %d\n", n)
}
int main()
{
	Print(10);

	void(*p)(int);
	p = Print;
	p(10);

	int m = 10;
	int* k = &n;
	(int)m;
	(int*)k;
	(void(*)(int)) //���θ� ���� ����ȯ
		//����ó�� �������� �ȴ�� �����̴�
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int Bsearch(void* key, void* x, int nx, int size, int(*com	pare)(void*, void*))
{
	int left = 0;
	int right = nx - 1;
	int middle;
	while (left <= right) {
		middle = (left + right) / 2;
		switch (compare(key, (char*)x + (size * middle))) 
			//��&key���ƴ϶�?? //1byte�� �þ�� �ϱ����ؼ� char*����
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
int compare(int* a, int* b) 
{
	if (*a > *b)
		return 1;
	else if (*a < *b)
		return -1;
	else
		return 0;
}
int main() 
{
	int list[10] = { 10,20,30,40,50,60,70,80,90,100 };
	int key = 40;

	int idx = Bsearch(&key, list, 10, sizeof(int), 
		(int(*)(void*, void*))compare);
	if (idx != -1)
		printf("list[%d]: %d", idx, list[idx]);
}
