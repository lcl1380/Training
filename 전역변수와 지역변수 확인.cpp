#include <iostream>
using namespace std;

/* ���������� �������� */
string str = "* �������� *";

void func() {
	string str = "* �������� *";
	cout << "func()������ str : " << str << endl;
}

int main() {
	cout << "main()������ str : " << str << endl;
	func();
}

