#include <stdio.h>
#include <Windows.h>
#define SIZE 100

struct point {
	int x;
	int y;
};

int main(void) {
	
	struct point circle[100];  //크기가 100인 point 구조체 배열(circle) 선언

	for (int i = 0; i < SIZE; i++) {  //난수로 점들의 위치 저장
		circle[i].x = rand() % 500;
		circle[i].y = rand() % 500;
	}
	HDC hdc = GetWindowDC(GetForegroundWindow());
	for (int i = 0; i < SIZE; i++) {  //점점 작은 원으로 그린다
		Ellipse(hdc, circle[i].x, circle[i].y, circle[i].x+10, circle[i].y+10);
	}
	return 0;
}