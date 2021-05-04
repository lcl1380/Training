#include <stdio.h>

int main(void)
{
	int array[5], i;
	int* p = array;

	printf("5개의 정수를 입력하세요 : ");
	for (i = 0; i < 5; i++)
		scanf("%d", &array);//입력받은 값을 정수 배열(array)에 저장

	printf("역순 : ");
	for (i = 4; i >= 0; i--)
		printf("%d", *(p+1)); //포인터(p)를 사용하여 배열값 출력

	printf("\n");
	return 0;
}
