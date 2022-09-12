#include <iostream>
using namespace std;

void func(int a=1, int b=2, int c=3) {
	cout << "a=>" << a << endl;
	cout << "b=>" << b << endl;
	cout << "c=>" << c << endl;
}

// 函数占位参数
void func2(int a, int) {
	cout << "a=>" << a << endl;
}

int main3() {
	func(4,5);
	return 0;
}