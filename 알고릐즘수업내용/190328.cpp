#include <stdio.h>
#include <stdlib.h> //rand함수잇는곳
#include <Windows.h> //window os 에 들어잇는
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };

	srand(GetTickCount()); //rand 다른값반환
						   ////////////////////////
	for (int i = 0; i < 10; ++i)
		arr[i] = rand() % 11 + 10;

	for (int i = 0; i < 10; ++i) {
		printf("%d\n", arr[i]);
	}
}

//#include <stdio.h>
//#include <stdlib.h> //rand함수잇는곳
//#include <Windows.h> //window os 에 들어잇는
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//
//	srand(GetTickCount()); //rand 다른값반환
//	////////////////////////
//	for (int i = 0; i < 10; ++i)
//		arr[i] = rand() % 11 + 10;
//
//	for (int i = 0; i < 10; ++i) {
//		printf("%d\n", arr[i]);
//	}
//}

//#include <stdio.h>
//#include <stdlib.h> //rand함수잇는곳
//#include <Windows.h> //window os 에 들어잇는
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//
//	srand(GetTickCount()); //rand 다른값반환
//	////////////////////////
//	for (int i = 0; i < 10; ++i)
//		arr[i] = rand() % 10 + 1;
//
//	for (int i = 0; i < 10; ++i) {
//		printf("%d\n", arr[i]);
//	}
//}

//#include <stdio.h>
//#include <stdlib.h> //rand함수잇는곳
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//
//	////////////////////////
//	for (int i = 0; i < 10; ++i)
//		arr[i] = rand() % 10;
//
//	for (int i = 0; i < 10; ++i) {
//		printf("%d\n", arr[i]);
//	}
//}

//#include <stdio.h>
//#include <stdlib.h> //rand함수잇는곳
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//
//	////////////////////////
//	for (int i = 0; i < 10; ++i)
//		arr[i] = rand();
//
//
//	for (int i = 0; i < 10; ++i) {
//		printf("%d\n", arr[i]);
//	}
//}

//#include <stdio.h>
//struct Person {
//	char name[20];
//	char phone[20];
//	int age;
//};
//void PrintPerson(Person* p)
//{
//	printf("%s, %s, %d\n", p->name, p->phone, p->age);
//}
//int main()
//{
//	Person p1 = { "홍길동", "010-4567-1234",25 };
//	PrintPerson(&p1);
//
//	Person p2 = { "임꺽정","010-1234-5678",30 };
//	PrintPerson(&p2);
//}

//#include <stdio.h>
//struct Person {
//	char name[20];
//	char phone[20];
//	int age;
//};
//void PrintPerson(Person per)
//{
//	printf("%s, %s, %d\n", per.name, per.phone, per.age);
//}
//int main()
//{
//	Person p1 = { "홍길동", "010-4567-1234",25 };
//	PrintPerson(p1);
//
//	Person p2 = { "임꺽정","010-1234-5678",30 };
//	PrintPerson(p2);
//}

//#include <stdio.h>
//struct Person {
//	char name[20]; 
//	int number;
//	int age;
//};
//void PrintPerson(Person per)
//{
//	printf("%s, %d, %d\n", per.name, per.number, per.age);
//}
//int main()
//{
//	Person p1 = { "홍길동",100,25 };
//	PrintPerson(p1);
//
//	Person p2 = { "임꺽정",200,30 };
//	PrintPerson(p2);
//}

//#include <stdio.h>
//struct PersonInfo {
//	char name[20]; //순서가 바뀌면 안ㄷ
//	int number;
//	int age;
//};
//void PrintInfo(PersonInfo per)
//{
//	printf("%s, %d, %d\n", per.name, per.number, per.age);
//}
//int main()
//{
//	PersonInfo p1 = { "홍길동",100,25 };
//	PrintInfo(p1);
//
//	PersonInfo p2 = { "임꺽정",200,30 };
//	PrintInfo(p2);
//}

//#include <stdio.h>
//struct PersonInfo {
//	char name[20]; //순서가 바뀌면 안ㄷ
//	int number;
//	int age;
//};
//void PrintInfo(PersonInfo per)
//{
//	printf("%s, %d, %d\n", per.name, per.number, per.age);
//}
//int main()
//{
//	PersonInfo p1 = { "홍길동",100,25 };
//
//	PrintInfo(p1);
//}

//#include <stdio.h>
//struct PersonInfo {
//	char name[20]; //순서가 바뀌면 안ㄷ
//	int number;
//	int age;
//};
//int main()
//{
//	PersonInfo p1 = { "홍길동",100,25 };
//
//	printf("%s, %d, %d\n", p1.name, p1.number, p1.age);
//}

//#include <stdio.h>
//#include <stdlib.h>
//void PrintInfo(char* name, int number, int age) 
//{
//	printf("%s %d %d\n", name, number, age);
//}
//
//int main()
//{
//	int number = 100;
//	int age = 25;
//	char name[20] = "홍길동";
//
//	PrintInfo(name, number, age);
//	system("pause");
//}

//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//	int number = 100;
//	int age = 25;
//	char name[20] = "홍길동";
//
//	printf("%s %d %d\n", name, number, age);
//	system("pause");
//}

//#include <stdio.h>
//#include <stdlib.h>
//int main() 
//{
//	int number = 100;
//	int age = 25;
//	const char* name = "홍길동";
//
//	printf("%s %d %d\n", name, number, age);
//	system("pause");
//}