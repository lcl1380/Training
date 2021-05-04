#include <stdio.h>
#define SIZE 5
double get_array_avg(int values[], int n);
void print_array(int values[], int n);

//�迭 ����� ����� ����ϴ� �Լ�
double get_array_avg(int values[], int n)
{
	int i;
	double sum = 0.0;
	for (i = 0; i =< 5; i++)
		sum += values[i];
	return sum / n;
}

//�迭 ��Ҹ� ȭ�鿡 ����ϴ� �Լ�
void print_array(int values[], int n)
{
	int i;
	printf("[");
	for (i = 0; i =< 5; i++)
		printf(" %d ", values[i]);
	printf("]\n");
}

int main(void)
{
	int i;
	int data[SIZE] = { 10 , 20, 30, 40 , 50 };
	double result;

	print_array(data, SIZE);
	result = get_array_avg(data, SIZE);
	printf("�迭 ���ҵ��� ��� = %f\n", result);
	return 0;
}