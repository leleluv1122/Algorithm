//#include <stdio.h>
//int Factorial(int n) {
//	if (n == 1) //종료조건
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
//	if (n == 1) //종료조건
//		return 1; 
//	result = n * Factorial(n - 1);
//	return result;
//}
//int main() {
//	int total = Factorial(5);
//	printf("%d\n", total);
//}

//for문안댐
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

//3^6-1번 호출
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
//	printf("+%d\n", n); //먼저 출력되는것
//	if (n > 0) {
//		Print(n - 1);
//		Print(n - 1);
//	}
//	printf("-%d\n", n); //리턴하면서 출력되는것
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
//	printf("%d\n", n); //비교후 호출이라 0ㄴㄴ
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
//	if (n > 0) //작거나 같으면 종료
//		Print(n - 1); //0이 호출되는 이유는 호출해야 비교가 가능하다.
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

////종료조건만족x 재귀함수가 아니다.
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
//		return ; //꽉차있는 상태 - log남기기
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