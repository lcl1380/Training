#include <stdio.h>
#include<stdlib.h>
#define PI 3.1415
#define CIRCLE_AREA(r) (PI*r*r)
#define DEBUG 
//앞에 주석처리하면 #ifdef 부분 실행되지 않음

int main() {
	double radius, area;
	
#ifdef DEBUG
	printf("디버깅 모드입니다. \n");
#endif // DEBUG 끝

	printf("원의 반지름 : ");
	scanf("%lf", &radius);
	//입력한 반지름을 radius에 저장

	area = CIRCLE_AREA(radius); //원의 면적을 계산하는 매크로 호출
	printf("원의 면적 = %.2f", area);
	//%.2f는 뭘까.... 둘째자리까지만 출력?
	/* -> 소수점 아래의 자릿수 = %f 점의 오른쪽에 있는 값
	    그 자릿수를 맞추기 위해 자동으로 값을 *반올림* 하여 출력한다
		%f점의 왼쪽값은 전체 자릿수를 조절함

		참고 : https://semaph.tistory.com/7
	*/

	return 0;

}