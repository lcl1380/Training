#include <stdio.h>
int main(void) {
	int i;
	char solution[100] = "meet at midnight";
	char answer[100] = "____ __ ________";
	char ch;
	while (1) {
		printf("\n ���ڿ��� �Է��ϼ��� : %s \n", answer);
		printf("���ڸ� �����ϼ��� : ");
		ch = getch();
		for (i = 0; solution[i] != NULL; i++) {
			if (solution[i] == ch)
				answer[i] = ch;
		}
		if (strcmp(solution, answer) == 0) {
			printf("����!");
			break;
		}
	}
	return 0;
} 