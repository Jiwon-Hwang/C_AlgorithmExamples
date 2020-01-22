/*작성자 : 황지원
12월 29일 HW18 : 입장료 계산 프로그램 작성*/

#include <stdio.h>

//함수 선언부
int inputAge();
int inputNum();
void output(int, int);

int main()
{
	int a, n;
	printf("입장객의 나이를 입력하시오 : ");
	a = inputAge();
	printf("입장객의 수를 입력하시오 : ");
	n = inputNum();

	int f, d; // f는 할인전 총 입장료, d는 할인금액 (단체로 인정될 경우에만 10% 할인)
	
	if (a <= 7)
	{
		f = n * 500;
	}
	else if (a <= 13)
	{
		f = n * 700;
	}
	else if (a <= 19)
	{
		f = n * 1000;
	}
	else if (a <= 55)
	{
		f = n * 1500;
	}
	else
	{
		f = n * 500;
	}
	//여기까지 총 입장료 계산(단체 할인 전)

	if (n >= 5) //5명 이상이면 단체할인 됨
	{
		d = f*0.1;
	}
	else
	{
		d = 0;
	}

	output(f,d);

	return 0;
}

int inputAge()
{
	int age;
	scanf_s("%d", &age);

	return age;
}

int inputNum()
{
	int num;
	scanf_s("%d", &num);

	return num;
}

void output(int o_f, int o_d)
{
	int o_t = o_f - o_d;
	printf("입장료 => %d원\n", o_f);
	printf("할인금액 => %d원\n", o_d);
	printf("결제금액 => %d원\n", o_t);

	return;
}