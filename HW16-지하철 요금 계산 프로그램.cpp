/*작성자 : 황지원
12월 29일 HW16 : 지하철 요금 계산 프로그램 작성*/

#include <stdio.h>

//함수 선언부 
int input();
int calcFee(int);
void output(int);

int main()
{
	int n; //역 수
	printf("역 수를 입력하시오 : ");
	n = input();

	int fee;
	fee = calcFee(n);

	output(fee);

	return 0;
}

int input()
{
	int i_n;
	scanf_s("%d", &i_n);

	return i_n;
}

int calcFee(int c_n)
{
	int c_f;

	if (c_n <= 5)
	{
		c_f = 600;
	}
	else if (c_n <= 10)
	{
		c_f = 800;
	}
	else
	{
		c_f = 800 + (c_n - 9) / 2 * 100;
	}

	return c_f;
}

void output(int o_f)
{
	printf("요금 : %d원\n", o_f);

	return;
}