#include <iostream>
using namespace std;

void func(int& ref) {
	ref = 100;
}

int main1() {

	// ���õı��ʾ���ָ�볣����

	int a = 10;
	// ���������ã�������������Զ�ת��Ϊ int* const ref = &a;
	int& ref = a;
	ref = 20;

	cout << "a=>" << a << endl;
	cout << "ref=>" << ref << endl;

	system("pause");
	return 0;
}