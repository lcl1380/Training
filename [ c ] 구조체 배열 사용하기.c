#include <stdio.h>
#include <Windows.h>
#define SIZE 100

struct point {
	int x;
	int y;
};

int main(void) {
	
	struct point circle[100];  //ũ�Ⱑ 100�� point ����ü �迭(circle) ����

	for (int i = 0; i < SIZE; i++) {  //������ ������ ��ġ ����
		circle[i].x = rand() % 500;
		circle[i].y = rand() % 500;
	}
	HDC hdc = GetWindowDC(GetForegroundWindow());
	for (int i = 0; i < SIZE; i++) {  //���� ���� ������ �׸���
		Ellipse(hdc, circle[i].x, circle[i].y, circle[i].x+10, circle[i].y+10);
	}
	return 0;
}