/*�ۼ��� : Ȳ����
12�� 29�� HW18 : ����� ��� ���α׷� �ۼ�*/

#include <stdio.h>

//�Լ� �����
int inputAge();
int inputNum();
void output(int, int);

int main()
{
	int a, n;
	printf("���尴�� ���̸� �Է��Ͻÿ� : ");
	a = inputAge();
	printf("���尴�� ���� �Է��Ͻÿ� : ");
	n = inputNum();

	int f, d; // f�� ������ �� �����, d�� ���αݾ� (��ü�� ������ ��쿡�� 10% ����)
	
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
	//������� �� ����� ���(��ü ���� ��)

	if (n >= 5) //5�� �̻��̸� ��ü���� ��
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
	printf("����� => %d��\n", o_f);
	printf("���αݾ� => %d��\n", o_d);
	printf("�����ݾ� => %d��\n", o_t);

	return;
}