#include <windows.h>
#include <stdio.h>
int main(void) {
	int ch;  //������ ����
	int width = 200, height = 200;
	HDC hdc = GetWindowDC(GetForegroundWindow());
	while (1) {//while(1)�� ���ѹݺ���
		Rectangle(hdc, 100, 100, width, height);
		ch = getchar();
		Rectangle(hdc, 0, 0, 400, 300);
		if (ch == 'b') {
			width += 10; //width�� 10 ������
			height += 10; //height�� 10 ������
		}
		else if (ch == 's') {
			width -= 10;
			height -= 10;
		}
		else if (ch == 'q') {
			return 0;
		}
	}
	return 0;
} //�ٵ� ����ؼ� Ŀ���� ���� ���� ��