#include <stdio.h>
#include<stdlib.h>
#define PI 3.1415
#define CIRCLE_AREA(r) (PI*r*r)
#define DEBUG 
//�տ� �ּ�ó���ϸ� #ifdef �κ� ������� ����

int main() {
	double radius, area;
	
#ifdef DEBUG
	printf("����� ����Դϴ�. \n");
#endif // DEBUG ��

	printf("���� ������ : ");
	scanf("%lf", &radius);
	//�Է��� �������� radius�� ����

	area = CIRCLE_AREA(radius); //���� ������ ����ϴ� ��ũ�� ȣ��
	printf("���� ���� = %.2f", area);
	//%.2f�� ����.... ��°�ڸ������� ���?
	/* -> �Ҽ��� �Ʒ��� �ڸ��� = %f ���� �����ʿ� �ִ� ��
	    �� �ڸ����� ���߱� ���� �ڵ����� ���� *�ݿø�* �Ͽ� ����Ѵ�
		%f���� ���ʰ��� ��ü �ڸ����� ������

		���� : https://semaph.tistory.com/7
	*/

	return 0;

}