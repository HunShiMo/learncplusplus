#include <iostream>
using namespace std;

int& func() {
	// a放在了全局区
	static int a = 10;
	return a;
}

void func(int& a, int& b) {
	int temp = a;
	a = b;
	b = temp;
}

// 引用做函数的返回值
// 不要返回局部变量的引用
int& func1() {
	int a = 10;
	return a;
}

int& func2() {
	static int a = 10;
	return a;
}

void showValue(int& v) {
	v += 10;
	cout << v << endl;
}

void func3(const int& a) {
	//a = 10;
	cout << "a=>" << a << endl;
}

int main2() {
	//int &res = func1();
	//按理来说a是局部变量，存放在栈区，函数结束时会被释放，不应该能访问，但他访问到了，emmm
	//cout << res << endl;
	//cout << res << endl;

	//func() = 100;
	//int a = func();
	//cout << "a=>" << a << endl;
	return 0;
}