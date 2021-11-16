#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int a, b, n, c, d = 0;
	int num1 = 0, num2 = 0;
	// a에 대상 숫자, n에 mod 연산 할 숫자
	// ex : 3(mod7) = a(modn)

	while (1) {
		cout << "  1 : 지수 구하기\n  2 : 모듈러 연산\n  3 : 역원 구하기\n";
		cout << "   어떤 작업을 하시겠습니까? : ";
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

		else if (c == 3) {
			cout << "\n";
			cout << "  [ 역원 계산 ] \n";
			cout << "   원형을 입력해주세요 : ";
			cin >> a;
			cout << "   mod 숫자를 알려주세요 : ";
			cin >> b;

			for (int i = 0; i <= 9999; i++) {
				d = (a * i) % b; // 대상 숫자 * X를 mod b 연산 했을때
				if (d == 1) { //d가 1이면 = a*i(mod b)이 1이면
					cout << "\n   " << a << "(mod " << b << ")의 역원은 " << i << "(mod " << b << ") 입니다.\n\n";
					break;
				}

				else {
					if (b % a == 0) {//b가 a의 배수일경우
						cout << "\n   " << b << "은 " << a << "의 배수이므로 역원이 존재하지 않습니다.\n\n";
						break;
					}
				}
			}
		}

		cout << "------------------------------------------------------------------------";
		cout << "\n\n";

	}
}