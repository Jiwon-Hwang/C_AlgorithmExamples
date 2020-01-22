/*작성자 : 황지원
1월 2일 HW20 : Pay 계산 프로그램 작성*/

#include <stdio.h>

//함수 선언부
int input();
int gloss_calc(int);
int tax_calc(int);
void output(int, int, int);

int main()
{
	int h;
	int g_p, tax, net_pay;
	printf("일주일 근무시간을 입력하시오 : ");
	h = input();
	g_p = gloss_calc(h);
	tax = tax_calc(g_p);
	net_pay = g_p - tax;
	output(g_p, tax, net_pay);

	return 0;
}

int input()
{
	int hour;
	scanf_s("%d", &hour);

	return hour;
}

int gloss_calc(int hour)
{
	int base = 3000;
	int g_c;
	if (hour <= 40)
	{
		g_c = base*hour;
	}
	else
	{
		g_c = base * 40 + (base*(hour - 40))*1.5;
	}

	return g_c;
}

int tax_calc(int gloss_pay)
{
	int tax;
	if (gloss_pay <= 100000)
	{
		tax = gloss_pay*0.15;
	}
	else
	{
		tax = 100000*0.15 + (gloss_pay-100000)*0.25;
	}

	return tax;
}

void output(int gloss_pay, int taxes, int net_pay)
{
	printf("총 수입 : %d\n", gloss_pay);
	printf("세   금 : %d\n", taxes);
	printf("실 수입 : %d\n", net_pay);
	
	return;
}
