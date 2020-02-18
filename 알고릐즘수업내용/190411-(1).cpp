#include <stdio.h>
#include <stdlib.h>
struct Stack {
	int* buf;
	int top;
};
void Push(Stack& s, int data)
{
	s.buf[s.top++] = data;
}
int Pop(Stack& s)
{
	return s.buf[--s.top];
}
void InitStack(Stack& s, int length=100) //지정하지 않으면 100개 만들어진다.
{
	s.buf = (int*)malloc(sizeof(int) * length);
	s.top = 0;
}
void UnInitStack(Stack& s)
{
	free(s.buf);
	s.top = 0;
}
int main()
{
	Stack A;
	InitStack(A);



	Push(A, 100);
	Push(A, 200);
	Push(A, 300);

	printf("%d\n", Pop(A));
	printf("%d\n", Pop(A));
	printf("%d\n", Pop(A));
	UnInitStack(A);

	Stack B;
	InitStack(B, 1000);

	Push(B, 1122);
	printf("%d\n", Pop(B));
	UnInitStack(B);
}

//#include <stdio.h>
//#include <stdlib.h>
//struct Stack {
//	int* buf;
//	int top;
//};
//void Push(Stack& s, int data)
//{
//	s.buf[s.top++] = data;
//}
//int Pop(Stack& s)
//{
//	return s.buf[--s.top];
//}
//void InitStack(Stack& s)
//{
//	s.buf = (int*)malloc(sizeof(int) * 5);
//	s.top = 0;
//}
//void UnInitStack(Stack& s)
//{
//	free(s.buf);
//	s.top = 0;
//}
//int main()
//{
//	Stack A;
//	InitStack(A);
//	Push(A, 100);
//	Push(A, 200);
//	Push(A, 300);
//
//	printf("%d\n", Pop(A));
//	printf("%d\n", Pop(A));
//	printf("%d\n", Pop(A));
//	UnInitStack(A);
//
//	Stack B;
//	InitStack(B);
//
//	Push(B, 1122);
//	printf("%d\n", Pop(B));
//	UnInitStack(B);
//}

//#include <stdio.h>
//#include <stdlib.h>
//struct Stack {
//	int buf[5];
//	int top; 
//};
//void Push(Stack& s, int data) 
//{
//	s.buf[s.top++] = data;
//}
//int Pop(Stack& s)
//{
//	return s.buf[--s.top];
//}
//void InitStack(Stack& s)
//{
//	s.top = 0;
//}
//void UnInitStack(Stack& s)
//{
//	s.top = 0;
//}
//int main()
//{
//	Stack A;
//	InitStack(A);
//	Push(A, 100);
//	Push(A, 200);
//	Push(A, 300);
//
//	printf("%d\n", Pop(A));
//	printf("%d\n", Pop(A));
//	printf("%d\n", Pop(A));
//	UnInitStack(A);
//
//	Stack B;
//	InitStack(B);
//
//	Push(B, 1122);
//	printf("%d\n", Pop(B));
//	UnInitStack(B);
//}


////c++스탈 셤안나옴
//#include <stdio.h>
//#include <stdlib.h>
//struct Stack {
//	int buf[5];
//	int top; 
//
//	void Push(int data) 
//	{
//		buf[top++] = data;
//	}
//	int Pop()
//	{
//		return buf[--top];
//	}
//};
//int main()
//{
//	Stack A = { 0 };
//	Stack B = { 0 };
//
//	A.Push(100);
//	A.Push(200);
//	A.Push(300);
//
//	printf("%d\n", A.Pop());
//	printf("%d\n", A.Pop());
//	printf("%d\n", A.Pop());
//
//	B.Push(1122);
//	printf("%d\n", B.Pop());
//}

//#include <stdio.h>
//#include <stdlib.h>
//struct Stack {
//	int buf[5];
//	int top; //top=0은 ㄴㄴ
//};
//void Push(Stack& s, int data) //&안붙이면 복사된 top이다. 복사본이...
//{
//	s.buf[s.top++] = data;
//}
//int Pop(Stack& s)
//{
//	return s.buf[--s.top];
//}
//int main()
//{
//	Stack A = { 0 };
//	Stack B = { 0 };
//
//	Push(A, 100);
//	Push(A, 200);
//	Push(A, 300);
//
//	printf("%d\n", Pop(A));
//	printf("%d\n", Pop(A));
//	printf("%d\n", Pop(A));
//
//	Push(B, 1122);
//	printf("%d\n", Pop(B));
//}

//#include <stdio.h>
//#include <stdlib.h>
//struct Stack {
//	int buf[5];
//	int top; //top=0은 ㄴㄴ
//};
//void Push(int buf[], int& top, int data) //&안붙이면 복사된 top이다. 복사본이...
//{
//	buf[top++] = data; 
//}
//int Pop(int buf[], int& top)
//{
//	return buf[--top]; 
//}
//int main()
//{
//	Stack A;
//	Stack B;
//
//	Push(A.buf ,A.top, 100);
//	Push(A.buf, A.top, 200);
//	Push(A.buf, A.top, 300);
//
//	printf("%d\n", Pop(A.buf ,A.top));
//	printf("%d\n", Pop(A.buf, A.top));
//	printf("%d\n", Pop(A.buf, A.top));
//	
//	Push(B.buf, B.top, 1122);
//	printf("%d\n", Pop(B.buf, B.top));
//}

//#include <stdio.h>
//#include <stdlib.h>
//int buf[5];
//int top = 0;
//void Push(int data)
//{
//	buf[top++] = data; //top에 data넣고 이 문장을 벗어날때 top증가
//}
//int Pop()
//{
//	return buf[--top]; //감소하고 리턴
//}
//int main()
//{
//	Push(100);
//	Push(200);
//	Push(300);
//
//	printf("%d\n", Pop());
//	printf("%d\n", Pop());
//	printf("%d\n", Pop());
//}

//#include <stdio.h>
//#include <stdlib.h>
//int buf[5];
//int top = 0;
//void Push(int data) 
//{
//	buf[top] = data;
//	++top;
//}
//int Pop() 
//{
//	int data = buf[top - 1];
//	--top;
//	return data;
//}
//int main()
//{
//	Push(100);
//	Push(200);
//	Push(300);
//
//	printf("%d\n", Pop());
//	printf("%d\n", Pop());
//	printf("%d\n", Pop());
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
//	p = (int*)malloc(5 * sizeof(int));
//	c = (char*)p; // 동일한 주소
//	v = (void*)c;
//
//	printf("%x %x %x\n", p, c, v);
//	printf("%x %x %x\n", p + 1, c + 1, (int*)v + 1); //v를 int만큼 건너뛰고 싶다.
//	printf("%x %x %x\n", p + 1, c + 1, (char*)v + 1); //v를 char만큼 건너뛰고 싶다.
//	printf("\n");
//
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
//	c = (char*)p; // 동일한 주소
//	v = (void*)c;
//
//	printf("%x %x %x\n", p, c, v);
//	printf("%x %x %x\n", p + 1, c + 1, (int*)v + 1); //v를 int만큼 건너뛰고 싶다.
//	printf("%x %x %x\n", p + 1, c + 1, (char*)v + 1); //v를 char만큼 건너뛰고 싶다.
//	printf("\n");
//	free(p);
//}