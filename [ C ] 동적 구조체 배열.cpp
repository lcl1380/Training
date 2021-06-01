#include <stdio.h>
#include<stdlib.h>

struct movie //movie 구조체 선언
{
	char title[100]; //문자형 title배열의 크기를 100으로 설정
	double rating; //더블형 rating 선언
};

int main(void) {
	struct movie* ptr; //movie 구조체의 포인터 선언
	int i, n;

	printf("영화의 갯수 : ");
	scanf("%d", &n); //영화의 갯수를 n에 저장

	ptr = (struct movie*)malloc(n * sizeof(struct movie));
	/*
	movie 구조체에 malloc으로 사이즈를 선언해줌
	*/

	if (ptr == NULL) { //만약 포인터값이 널이면
		printf("! 메모리 할당 오류 ! \n");
		exit(1);
	}

	for (i = 0; i < n; i++) {
		printf("영화 제목 : ");
		scanf("%s", ptr[i].title); 
		// 띄어쓰기가 있으면 따로 인식하는데 어떻게 해결하징..
		// 교수님왈 scanf말고 따른거 쓰면 된다고 함
		//'&' 붙이고 안 붙이고의 차이가 뭐더라...

		printf("영화 평점 : ");
		scanf("%lf", &ptr[i].rating);
	}

	printf("\n=============================================\n");
	for (i = 0; i < n; i++) {
		printf("영화 제목 : %s \n", ptr[i].title);
		printf("영화 평점 : %lf \n", ptr[i].rating);
	}

	printf("==============================================\n");
	free(ptr); //malloc 사용했으면 꼭 free 해주기
	return 0;
}