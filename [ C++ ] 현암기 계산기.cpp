#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int a, b, n, c, d = 0;
	int num1 = 0, num2 = 0;
	// a�� ��� ����, n�� mod ���� �� ����
	// ex : 3(mod7) = a(modn)

	while (1) {
		cout << "  1 : ���� ���ϱ�\n  2 : ��ⷯ ����\n  3 : ���� ���ϱ�\n";
		cout << "   � �۾��� �Ͻðڽ��ϱ�? : ";
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

		else if (c == 3) {
			cout << "\n";
			cout << "  [ ���� ��� ] \n";
			cout << "   ������ �Է����ּ��� : ";
			cin >> a;
			cout << "   mod ���ڸ� �˷��ּ��� : ";
			cin >> b;

			for (int i = 0; i <= 9999; i++) {
				d = (a * i) % b; // ��� ���� * X�� mod b ���� ������
				if (d == 1) { //d�� 1�̸� = a*i(mod b)�� 1�̸�
					cout << "\n   " << a << "(mod " << b << ")�� ������ " << i << "(mod " << b << ") �Դϴ�.\n\n";
					break;
				}

				else {
					if (b % a == 0) {//b�� a�� ����ϰ��
						cout << "\n   " << b << "�� " << a << "�� ����̹Ƿ� ������ �������� �ʽ��ϴ�.\n\n";
						break;
					}
				}
			}
		}

		cout << "------------------------------------------------------------------------";
		cout << "\n\n";

	}
}