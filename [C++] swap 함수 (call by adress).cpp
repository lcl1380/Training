#include <iostream>
using namespace std;

void swap(int* a, int* b) {
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
	cout << "swap함수 내부에서의 *a : " << *a << ", *b : " << *b << endl;
}

int main() {
	int m = 5, n = 10;
	cout << "swap 함수 실행 전 m : " << m << " , n :  " << n << endl;
	swap(&m, &n);
	cout << "swap 함수 실행 후 m : " << m << " , n :  " << n << endl;
}

