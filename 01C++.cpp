#include <iostream>
using namespace std;

int& func() {
	// a������ȫ����
	static int a = 10;
	return a;
}

void func(int& a, int& b) {
	int temp = a;
	a = b;
	b = temp;
}

// �����������ķ���ֵ
// ��Ҫ���ؾֲ�����������
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
	//������˵a�Ǿֲ������������ջ������������ʱ�ᱻ�ͷţ���Ӧ���ܷ��ʣ��������ʵ��ˣ�emmm
	//cout << res << endl;
	//cout << res << endl;

	//func() = 100;
	//int a = func();
	//cout << "a=>" << a << endl;
	return 0;
}