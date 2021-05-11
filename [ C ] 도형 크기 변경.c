#include <windows.h> 
#include <stdio.h>
int main(void) {
	int ch;  //정수형 주의
	int width = 200, height = 200;
	HDC hdc = GetWindowDC(GetForegroundWindow());
	while (1) {//while(1)은 무한반복문
		Rectangle(hdc, 100, 100, width, height);
		ch = getchar();
		Rectangle(hdc, 0, 0, 400, 300);
		if (ch == 'b') {
			width += 10; //width가 10 증가함
			height += 10; //height가 10 증가함
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
} //근데 계속해서 커지진 않음 뭐임 ㅜ --> windows랑 stdio랑 순서 바뀌어서 그런가?? 확인해볼것 
