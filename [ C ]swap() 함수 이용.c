#include <stdio.h>

void swap(int* x, int* y)
{
	int tmp;
	tmp = *x;
	*x = *y;
	*y = tmp;
}
int main(void) {
	int a = 100, b = 200;
	swap(&a, &b);
	printf("swap() È£Ãâ ÈÄ a=%d b=%d\n", a, b);
	return 0;
}