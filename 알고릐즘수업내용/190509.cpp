//#include <stdio.h>
//int Factorial(int n) {
//	if (n == 1) //��������
//		return 1;
//	return n * Factorial(n - 1);
//}
//int main() {
//	int total = Factorial(5);
//	printf("%d\n", total);
//}

//#include <stdio.h>
//int Factorial(int n) {
//	int result;
//	if (n == 1) //��������
//		return 1; 
//	result = n * Factorial(n - 1);
//	return result;
//}
//int main() {
//	int total = Factorial(5);
//	printf("%d\n", total);
//}

//for���ȴ�
//#include <stdio.h>
//void Print(int n) {
//	printf("+%d\n", n);
//	if (n > 0) {
//		for (int i = 0; i < r; ++i)
//			Print(n - 1);
//	}
//	printf("-%d\n", n);
//}
//int main() {
//	Print(5);
//}

//3^6-1�� ȣ��
//#include <stdio.h>
//void Print(int n) {
//	printf("+%d\n", n); 
//	if (n > 0) {
//		Print(n - 1);
//		Print(n - 1);
//		Print(n - 1);
//	}
//	printf("-%d\n", n); 
//}
//int main() {
//	Print(5);
//}

//#include <stdio.h>
//void Print(int n) {
//	printf("+%d\n", n); //���� ��µǴ°�
//	if (n > 0) {
//		Print(n - 1);
//		Print(n - 1);
//	}
//	printf("-%d\n", n); //�����ϸ鼭 ��µǴ°�
//}
//int main() {
//	Print(5);
//}

//#include <stdio.h>
//void Print(int n) {
//	printf("+%d\n", n);
//	if(n > 0)
//		Print(n - 1);
//	printf("-%d\n", n);
//}
//int main() {
//	Print(5);
//}

//#include <stdio.h>
//void Print(int n) {
//	if (n < 0)
//		return;
//	printf("%d\n", n); //���� ȣ���̶� 0����
//	Print(n - 1);
//}
//int main() {
//	Print(5);
//}

//#include <stdio.h>
//void Print(int n) {
//	printf("%d\n", n);
//	if (n <= 0)
//		return;
//	Print(n - 1);
//}
//int main() {
//	Print(5);
//}

//#include <stdio.h>
//void Print(int n) {
//	printf("%d\n", n);
//	if (n > 0) //�۰ų� ������ ����
//		Print(n - 1); //0�� ȣ��Ǵ� ������ ȣ���ؾ� �񱳰� �����ϴ�.
//}
//int main() {
//	Print(5);
//}

//#include <stdio.h>
//void Print(int n) {
//	printf("%d\n", n);
//	if (n < 10)
//		Print(n + 1);
//}
//int main() {
//	Print(20);
//}

//#include <stdio.h>
//void Print(int n) {
//	printf("%d\n", n);
//	if (n < 10)
//		Print(n + 1);
//}
//int main() {
//	Print(5);
//}

//#include <stdio.h>
//void Print(int n) {
//	printf("%d\n", n);
//	if (n > 0)
//		Print(n - 1);
//}
//int main() {
//	Print(5);
//}

////�������Ǹ���x ����Լ��� �ƴϴ�.
//#include <stdio.h>
//void Print(int n) {
//	printf("%d\n", n);
//	Print(5);
//}
//int main() {
//	Print(5);
//}

//#include <stdio.h>
//void Print(int n) {
//	printf("%d\n", n);
//}
//int main() {
//	Print(5);
//}

///////////Queue////////////
//#include <stdio.h>
//int buf[5];
//int front = 0, rear = 0;
//void Push(int data) {
//	if ((rear + 1)%5 == front%5)
//		return ; //�����ִ� ���� - log�����
//	rear = (rear + 1) % 5;
//	buf[rear] = data;
//}
//int Pop() {
//	if (front == rear)
//		return -1;
//	front = (front + 1) % 5;
//	return buf[front];
//}
//int main() {
//	Push(10);
//	Push(20);
//	Push(30);
//
//	printf("%d\n", Pop());
//	printf("%d\n", Pop());
//	printf("%d\n", Pop());
//}

//#include <stdio.h>
//int buf[5];
//int front = 0, rear = 0;
//void Push(int data) {
//	rear += 1;
//	if (rear == 5)
//		rear = 0;
//	buf[rear] = data;
//}
//int Pop() {
//	front += 1;
//	if (front == 5)
//		front = 0;
//	return buf[front];
//}
//int main() {
//	Push(10);
//	Push(20);
//	Push(30);
//
//	printf("%d\n", Pop());
//	printf("%d\n", Pop());
//	printf("%d\n", Pop());
//}

//#include <stdio.h>
//int buf[5];
//int front = 0, rear = 0;
//void Push(int data) {
//	buf[rear++] = data;
//}
//int Pop() {
//	return buf[front++];
//}
//int main() {
//	Push(10);
//	Push(20);
//	Push(30);
//
//	printf("%d\n", Pop());
//	printf("%d\n", Pop());
//	printf("%d\n", Pop());
//}

//#include <stdio.h>
//#include <queue>
//using namespace std;
//typedef queue<int> Queue;
//
//int main() {
//	Queue q;
//
//	q.push(10);
//	q.push(20);
//	q.push(30);
//
//	printf("%d\n", q.front()); q.pop();
//	printf("%d\n", q.front()); q.pop();
//	printf("%d\n", q.front()); q.pop();
//}