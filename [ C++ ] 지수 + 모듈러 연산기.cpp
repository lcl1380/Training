#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int a = 0, n = 0;
	int num1 = 0, num2 = 0;
	int c;
	// a에 대상 숫자, n에 mod 연산 할 숫자
	// ex : 3(mod7) = a(modn)
	while (1) {
		cout << "  지수를 구하려면 '1', 모듈러 연산을 실행하려면 '2'를 입력해주세요 : ";
		cin >> c;

		if (c == 1) {
			cout << "\n";
			cout << "  [ 지수 구하기 ] \n";
			cout << "   a의 n승을 입력하세요\n";
			cout << "    대상 숫자 a : ";
			cin >> a;
			cout << "    지수 n : ";
			cin >> n;
			cout << "\n    " << a << "의 " << n << "승 = " << pow(a, n) << "\n\n";
		}

		else if (c == 2) {
			cout << "\n";
			cout << "  [ 모듈러 연산 ] \n";
			cout << "   대상 숫자 a : ";
			cin >> a;
			cout << "   mod 연산할 n : ";
			cin >> n;

			num1 = a / n; // 몫 출력
			num2 = a % n; //나머지 출력

			cout << "\n  " << a << " = " << num2 << "(mod " << n << ")" << "\n";
			cout << "   몫 : " << num1 << "  ,  나머지 : " << num2 << "\n\n";
		
		}
		cout << "------------------------------------------------------------------------";
		cout << "\n\n";

	}
}