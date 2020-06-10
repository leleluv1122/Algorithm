#include <iostream>
using namespace std;

template <typename T>
void Print(T data) {
	cout << typeid(T).name() << endl;
	cout << data << endl;
}

int main() {
	Print(5);
	Print(5.5);
}