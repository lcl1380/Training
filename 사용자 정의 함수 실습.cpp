#include <iostream>
using namespace std;

int average(int s1, int s2, int s3) { // int형 사용자 정의 함수 average
	int result = s1 + s2 + s3;        // result에 s1+s2+s3값을 int형으로 저장
	return result/3;                  // result를 3으로 나눈 값을 리턴
}

int main() {
	int apple = 550;
	int banana = 700;
	int pineapple = 970;
	cout << average(apple, banana, pineapple);
}

