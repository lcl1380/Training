#include <stdio.h>
#include <stdlib.h>

int main(void) {
	FILE* fp1, * fp2; //���������� fp1, fp2
	char file1[100], file2[100]; //�Է��� �����̸� ����

	printf("���� ���� �̸� : ");
	scanf("%s", file1);

	printf("���� ���� �̸� : ");
	scanf("%s", file2);

	// ù��° ������ �б� ���� ����
	if ((fp1 = fopen(file1, "r")) == NULL) {
		fprintf(stderr, "���� ���� %s�� �� �� �����ϴ�.\n", file1);
		exit(1);
	}

	// �ι�° ������ ���� ���� ����
	if ((fp2 = fopen(file2, "w")) == NULL) {
		fprintf(stderr, "���� ���� %s�� �� �� �����ϴ�.\n", file2);
		exit(1);
	}

	int c;
	// fp1���� �� ���ھ� �о fp2�� ���� 
	while ((c = fgetc(fp1)) != EOF)
		fputc(c, fp2);

	fclose(fp1);
	fclose(fp2);

	return 0;
}