/*�ۼ��� : Ȳ����
12�� 29�� HW16 : ����ö ��� ��� ���α׷� �ۼ�*/

#include <stdio.h>

//�Լ� ����� 
int input();
int calcFee(int);
void output(int);

int main()
{
	int n; //�� ��
	printf("�� ���� �Է��Ͻÿ� : ");
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
	printf("��� : %d��\n", o_f);

	return;
}