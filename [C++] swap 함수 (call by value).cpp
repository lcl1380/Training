#include <iostream>
using namespace std;

void swap(int a, int b) { //swap�Լ� ���� ��������
	int tmp;

	tmp = a;
	a = b;
	b = tmp;
	cout << "swap�Լ� ���ο����� a : " << a << ", b : " << b << endl;
}

int main() {
	int m = 5, n = 10; //main�Լ� ���� ��������
	cout << "swap �Լ� ���� �� m : " << m << " , n :  " << n << endl;
	swap(m, n);
	cout << "swap �Լ� ���� �� m : " << m << " , n :  " << n << endl;
}

