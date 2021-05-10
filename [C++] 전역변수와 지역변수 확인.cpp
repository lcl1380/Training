#include <iostream>
using namespace std;

/* 전역변수와 지역변수 */
string str = "* 전역변수 *";

void func() {
	string str = "* 지역변수 *";
	cout << "func()에서의 str : " << str << endl;
}

int main() {
	cout << "main()에서의 str : " << str << endl;
	func();
}

