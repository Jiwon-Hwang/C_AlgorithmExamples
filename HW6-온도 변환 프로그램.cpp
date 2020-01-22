/*작성자 : 황지원
12월 29일 HW6 : 온도 변환 프로그램 작성*/

#include <stdio.h>

//함수 선언부
double input(double);
void output(double);

int main()
{
	double F = 0;
	F = input(F);
	double C = 5.0 / 9.0 * (F - 32); // 나눗셈에서 몫연산자(/) : 정수나누기 정수는 정수(따라서 몫만 남음), 실수 나누기 실수는 실수(따라서 소숫점 뒤에까지 나타남!)//5.0, 9.0!
									 // C:섭씨, F:화씨

	output(C);

	return 0;
}

double input(double i_F)
{
	printf("화씨 온도를 입력하세요 : ");
	scanf_s("%lf", &i_F);

	return i_F;
}

void output(double o_C)
{
	printf("섭씨 온도는 %0.1lf도 입니다.\n", o_C);

	return;
}