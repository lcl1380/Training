#include <stdio.h>

int main(void)
{
	int array[5], i;
	int* p = array;

	printf("5���� ������ �Է��ϼ��� : ");
	for (i = 0; i < 5; i++)
		scanf("%d", &array);//�Է¹��� ���� ���� �迭(array)�� ����

	printf("���� : ");
	for (i = 4; i >= 0; i--)
		printf("%d", *(p+1)); //������(p)�� ����Ͽ� �迭�� ���

	printf("\n");
	return 0;
}
