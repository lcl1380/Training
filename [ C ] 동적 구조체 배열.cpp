#include <stdio.h>
#include<stdlib.h>

struct movie //movie ����ü ����
{
	char title[100]; //������ title�迭�� ũ�⸦ 100���� ����
	double rating; //������ rating ����
};

int main(void) {
	struct movie* ptr; //movie ����ü�� ������ ����
	int i, n;

	printf("��ȭ�� ���� : ");
	scanf("%d", &n); //��ȭ�� ������ n�� ����

	ptr = (struct movie*)malloc(n * sizeof(struct movie));
	/*
	movie ����ü�� malloc���� ����� ��������
	*/

	if (ptr == NULL) { //���� �����Ͱ��� ���̸�
		printf("! �޸� �Ҵ� ���� ! \n");
		exit(1);
	}

	for (i = 0; i < n; i++) {
		printf("��ȭ ���� : ");
		scanf("%s", ptr[i].title); 
		// ���Ⱑ ������ ���� �ν��ϴµ� ��� �ذ���¡..
		// �����Կ� scanf���� ������ ���� �ȴٰ� ��
		//'&' ���̰� �� ���̰��� ���̰� ������...

		printf("��ȭ ���� : ");
		scanf("%lf", &ptr[i].rating);
	}

	printf("\n=============================================\n");
	for (i = 0; i < n; i++) {
		printf("��ȭ ���� : %s \n", ptr[i].title);
		printf("��ȭ ���� : %lf \n", ptr[i].rating);
	}

	printf("==============================================\n");
	free(ptr); //malloc ��������� �� free ���ֱ�
	return 0;
}