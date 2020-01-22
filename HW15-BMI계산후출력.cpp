/*�ۼ��� : Ȳ����
12�� 28�� HW15 : BMI ���ϱ� ���α׷� �ۼ�*/
#include <stdio.h>

//�Լ� �����
double indata(void); // �Ű�����, ��������? ���� �� void // double �� ��ȯ��(return)�� double ����. ���� �ٽ� �Ѱ��� �������� void�Լ� ���� �ȵ�.
double bmi_calc(double, double);
void outdata(double);      // ���⼭ ������ ��� ���� ����ϰ� ��ȯ���ϰ� ������ �ǹǷ� void.

int main()
{
	double weight;
	double height;
	double BMI;

	printf("�����Ը� �Է��ϼ���(kg) : ");
	weight = indata(); // ����()���� void ���� �� �ƴ�! ���� ���� ���� ��! // indata���� scanf�� �Է� �޾Ƽ� �ٽ� main���� �Ѱܹ��� ��.(weight�� ����)
	
	printf("Ű�� �Է��ϼ���(m) : ");
	height = indata();

	BMI=bmi_calc(weight, height); // bmi ��� �Լ��� �����Զ� Ű �Ѱ��ְ� �ٽ� BMI�� ��ġ �־��ֱ�.

	outdata(BMI);

	return 0;          //��ȯ�� 0 : �������� �ǹ���.
}


double indata(void)    // �Ű�����, ��������? ���� ��(���� �Է¹����� �����Ƿ�) void // double �� ��ȯ��(return)d�� double ����.
{
	double d;  
	scanf_s("%lf", &d);// ���⿡�� weight�� height�� ���� ����.
	
	return d;          // �������� �����Զ� Ű ���� �Է¹����� �ٽ� main�Լ��� ��ȯ����� ��. ���� void�Լ��� �ȵǰ�, d�� ��ȯ����� ��. �ٽ� bmi_clac�� �����ؾ� �ϹǷ�..
}

double bmi_calc(double w, double h)
{
	double bmi;
	bmi = w / (h*h);

	return bmi;
}

void outdata(double BMI_out)
{
	if (BMI_out<18.5)
	{
		printf("����� BMI�� %0.2lf���� ��ü���Դϴ�.", BMI_out);
	}
	
	else if (BMI_out<25.0) //18.5 �̻��ΰ� ���� &&�� ���� �Ƚ��൵ ��. �̹� ������ ���� �ɷ���.
	{
		printf("����� BMI�� %0.2lf���� ����ü���Դϴ�.", BMI_out);
	}

	else if (BMI_out<30.0)
	{
		printf("����� BMI�� %0.2lf���� ��ü���Դϴ�.", BMI_out);
	}

	else if (BMI_out<40.0)
	{
		printf("����� BMI�� %0.2lf���� ���Դϴ�.", BMI_out);
	}

	else
	{
		printf("����� BMI�� %0.2lf���� �����Դϴ�.", BMI_out);
	}

	return;
}

