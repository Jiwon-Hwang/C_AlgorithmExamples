/*�ۼ��� : Ȳ����
12�� 29�� HW7 : ����Ÿ��� �ü��� �Է� �޾� ����ð� ����ϴ� ���α׷� �ۼ�*/

#include <stdio.h>

//�Լ� �����
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

		double t = d / v; // ���� �ð�

		int h, m; 
		double s;
		// ���� �ð��� �ð�, �� ,�ʷ� ȯ���� ��
		h = (int)t;
		m = (int)((t - h) * 60);
		s = (t - h - m / 60) * 60 * 60; // ��ȣ �ȱ����� �ð� �����ϱ� 60*60�� ���ؼ� �ٽ� �� ������ �ٲٱ�

		output(d, h, m, s);
	}
	

	return 0;
}

double input_d(double i_d)
{
	printf("* �Ÿ��� �Է��Ͻÿ�(km����) : ");
	scanf_s("%lf", &i_d);

	return i_d;
}

double input_v(double i_v)
{
	printf("* �ü��� �Է��Ͻÿ�(km/h����) : ");
	scanf_s("%lf", &i_v);

	return i_v;

}
void output(double o_d, int o_h, int o_m, double o_s) //�ð��� ���� ������
{
	printf("%lfkm => %d�ð� %d�� %0.3lf�� �ҿ��\n \n", o_d, o_h, o_m, o_s);

	return;
}