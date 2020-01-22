/*�ۼ��� : Ȳ����
1�� 2�� HW20 : Pay ��� ���α׷� �ۼ�*/

#include <stdio.h>

//�Լ� �����
int input();
int gloss_calc(int);
int tax_calc(int);
void output(int, int, int);

int main()
{
	int h;
	int g_p, tax, net_pay;
	printf("������ �ٹ��ð��� �Է��Ͻÿ� : ");
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
	printf("�� ���� : %d\n", gloss_pay);
	printf("��   �� : %d\n", taxes);
	printf("�� ���� : %d\n", net_pay);
	
	return;
}
