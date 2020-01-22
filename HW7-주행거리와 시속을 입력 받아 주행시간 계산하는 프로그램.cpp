/*작성자 : 황지원
12월 29일 HW7 : 주행거리와 시속을 입력 받아 주행시간 계산하는 프로그램 작성*/

#include <stdio.h>

//함수 선언부
double input_d(double);
double input_v(double);
void output(double, int, int, double);

int main()
{
	while (1)
	{
		double d = 0;
		d = input_d(d);

		double v = 0;
		v = input_v(v);

		double t = d / v; // 주행 시간

		int h, m; 
		double s;
		// 주행 시간을 시간, 분 ,초로 환산한 것
		h = (int)t;
		m = (int)((t - h) * 60);
		s = (t - h - m / 60) * 60 * 60; // 괄호 안까지는 시간 단위니까 60*60을 곱해서 다시 초 단위로 바꾸기

		output(d, h, m, s);
	}
	

	return 0;
}

double input_d(double i_d)
{
	printf("* 거리를 입력하시오(km단위) : ");
	scanf_s("%lf", &i_d);

	return i_d;
}

double input_v(double i_v)
{
	printf("* 시속을 입력하시오(km/h단위) : ");
	scanf_s("%lf", &i_v);

	return i_v;

}
void output(double o_d, int o_h, int o_m, double o_s) //시간과 분은 정수형
{
	printf("%lfkm => %d시간 %d분 %0.3lf초 소요됨\n \n", o_d, o_h, o_m, o_s);

	return;
}