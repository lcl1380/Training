#include <stdio.h>
int main(void) {
	int i;
	char solution[100] = "meet at midnight";
	char answer[100] = "____ __ ________";
	char ch;
	while (1) {
		printf("\n 문자열을 입력하세요 : %s \n", answer);
		printf("글자를 추측하세요 : ");
		ch = getch();
		for (i = 0; solution[i] != NULL; i++) {
			if (solution[i] == ch)
				answer[i] = ch;
		}
		if (strcmp(solution, answer) == 0) {
			printf("정답!");
			break;
		}
	}
	return 0;
} 