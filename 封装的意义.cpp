#include <iostream>
using namespace std;

constexpr double PI = 3.14;

class Circle {
// ����Ȩ�ޣ������ķ���Ȩ��
// ���ڿ��Է���  ������Է���
public:
	// ����
	double r;

	// ����
	double calculateZc() {
		return 2 * PI * r;
	}
};

class Student {
public:
	void print() {
		cout << "name=>" << name << " stuNum=>" << num << endl;
	}

	string getName() {
		return this->name;
	}

	string getNum() {
		return this->num;
	}

	void setName(string name) {
		this->name = name;
	}

	void setNum(string num) {
		this->num = num;
	}

private:
	string name;
	string num;
};


int main() {
	Student s1;
	s1.setName("ray");
	s1.setNum("123456");
	s1.print();

	system("pause");
	return 0;
}