#include <iostream>
using namespace std;

int average(int s1, int s2, int s3) { // int�� ����� ���� �Լ� average
	int result = s1 + s2 + s3;        // result�� s1+s2+s3���� int������ ����
	return result/3;                  // result�� 3���� ���� ���� ����
}

int main() {
	int apple = 550;
	int banana = 700;
	int pineapple = 970;
	cout << average(apple, banana, pineapple);
}

