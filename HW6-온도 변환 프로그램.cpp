/*�ۼ��� : Ȳ����
12�� 29�� HW6 : �µ� ��ȯ ���α׷� �ۼ�*/

#include <stdio.h>

//�Լ� �����
double input(double);
void output(double);

int main()
{
	double F = 0;
	F = input(F);
	double C = 5.0 / 9.0 * (F - 32); // ���������� �򿬻���(/) : ���������� ������ ����(���� �� ����), �Ǽ� ������ �Ǽ��� �Ǽ�(���� �Ҽ��� �ڿ����� ��Ÿ��!)//5.0, 9.0!
									 // C:����, F:ȭ��

	output(C);

	return 0;
}

double input(double i_F)
{
	printf("ȭ�� �µ��� �Է��ϼ��� : ");
	scanf_s("%lf", &i_F);

	return i_F;
}

void output(double o_C)
{
	printf("���� �µ��� %0.1lf�� �Դϴ�.\n", o_C);

	return;
}