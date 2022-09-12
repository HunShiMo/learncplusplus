#include <iostream>
using namespace std;

void func(int& ref) {
	ref = 100;
}

int main1() {

	// 引用的本质就是指针常量，

	int a = 10;
	// 发现是引用，编译器将这段自动转换为 int* const ref = &a;
	int& ref = a;
	ref = 20;

	cout << "a=>" << a << endl;
	cout << "ref=>" << ref << endl;

	system("pause");
	return 0;
}