/*�ۼ��� : Ȳ����
1�� 11�� HW47 : �ּڰ�, �ִ� ã�� ���α׷� �ۼ�*/

#include <stdio.h>
#pragma warning (disable : 4996) // scanf_s �Ƚᵵ ��.

//�Լ� �����
void input(double *);
double max(double *); // �������� ���� - �ּҰ�(�迭) ����
double min(double *); // �������� ���� - �ּҰ�(�迭) ����
void output(double, double);
void myflush();

int main()
{
	double ary[6];
	input(ary); // �迭���� �� �� �迭�� �ּҰ�.
	double Max = max(ary);
	double Min = min(ary);
	output(Max, Min);
	
	return 0;
}

void input(double *i_ary) // ���� �Է� �� ���Է� �䱸.
{
	for (int i = 0; i<5; i++)
	{
		while (1)
		{
			printf("%d�� �� �� : ", i);
			if (scanf("%lf", &i_ary[i]) != 1)
			{
				myflush();
				printf("���ڸ� �Է��ϼ̽��ϴ�. ���Է� �Ͻʽÿ�.\n");
			}
			else
			{
				break;
			}
		}
	}

	return; // ���� ��ȯ ���ص� �����͸� �̿������Ƿ� �迭�� �� �Է� �޾��� ����.
}

double max(double *max_ary)
{
	double M = max_ary[0]; // �ϴ� ù��° �迭����� ���� ���� ũ�ٰ� ����.
	for (int i = 1; i < 5; i++)
	{
		M = M >= max_ary[i] ? M : max_ary[i]; // max_ary[0]���� ���� �ʿ� ����.
	}
	return M;
}

double min(double *min_ary)
{
	double m = min_ary[0]; // �ϴ� ù��° �迭����� ���� ���� �۴ٰ� ����.
	for (int i = 1; i < 5; i++)
	{
		m = m <= min_ary[i] ? m : min_ary[i]; // max_ary[0]���� ���� �ʿ� ����.
	}

	return m;
}

void output(double o_Max, double o_Min)
{
	printf("���� ū �� : %.2lf\n", o_Max);
	printf("���� ���� �� : %.2lf\n", o_Min);

	return;
}

void myflush()
{
	while (1)
	{
		if (getchar() == '\n') // ���๮�ڰ� �Է¹����� stdin �� �������� ���� ���� ���̹Ƿ�, getchar�� ���๮�� �̾ƿ��� �������� ��� ���� �����ִ� ���ڵ� �̾ƿ�. ���๮�ڱ��� �̾ƿ��� ��.
		{
			break;
		}
	}
	return;
}