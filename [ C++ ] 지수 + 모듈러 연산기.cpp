#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int a = 0, n = 0;
	int num1 = 0, num2 = 0;
	int c;
	// a�� ��� ����, n�� mod ���� �� ����
	// ex : 3(mod7) = a(modn)
	while (1) {
		cout << "  ������ ���Ϸ��� '1', ��ⷯ ������ �����Ϸ��� '2'�� �Է����ּ��� : ";
		cin >> c;

		if (c == 1) {
			cout << "\n";
			cout << "  [ ���� ���ϱ� ] \n";
			cout << "   a�� n���� �Է��ϼ���\n";
			cout << "    ��� ���� a : ";
			cin >> a;
			cout << "    ���� n : ";
			cin >> n;
			cout << "\n    " << a << "�� " << n << "�� = " << pow(a, n) << "\n\n";
		}

		else if (c == 2) {
			cout << "\n";
			cout << "  [ ��ⷯ ���� ] \n";
			cout << "   ��� ���� a : ";
			cin >> a;
			cout << "   mod ������ n : ";
			cin >> n;

			num1 = a / n; // �� ���
			num2 = a % n; //������ ���

			cout << "\n  " << a << " = " << num2 << "(mod " << n << ")" << "\n";
			cout << "   �� : " << num1 << "  ,  ������ : " << num2 << "\n\n";
		
		}
		cout << "------------------------------------------------------------------------";
		cout << "\n\n";

	}
}