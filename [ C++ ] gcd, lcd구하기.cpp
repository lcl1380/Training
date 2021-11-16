#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

int gcd(int a, int b) {
	int temp;
	while (b != 0) {
		temp = a % b;
		a = b;
		b = temp;
	}
	return a;
}
int lcm(int a, int b, int gcd_result) {
	return (a*b) / gcd_result;
}
int main() {
	vector<int> answer;
	int gcd_result;
	int n = 0;
	int m = 0;

	cout << "첫번째 숫자를 입력하세요 : ";
	cin >> n;

	cout << "두번째 숫자를 입력하세요 : ";
	cin >> m;

	if (n > m) {
		gcd_result = gcd(n, m);
		answer.push_back(gcd_result);
		answer.push_back(lcm(n, m, gcd_result));
	}
	else {
		gcd_result = gcd(m, n);
		answer.push_back(gcd_result);
		answer.push_back(lcm(m, n, gcd_result));

	}

	cout << "gcd("<< n << ", " << m << ") = " << answer[0] << endl;
	cout << "lcd(" << n << ", " << m << ") = " << answer[1] << endl;

	return 0;
}