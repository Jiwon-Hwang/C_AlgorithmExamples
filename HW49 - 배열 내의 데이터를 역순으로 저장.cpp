/*�ۼ��� : Ȳ����
1�� 11�� HW49 : �迭 ���� �����͸� �������� ���� ���α׷� �ۼ�*/

#include <stdio.h>
#pragma warning (disable : 4996) // scanf_s �Ƚᵵ ��.

//�Լ� ����� 
void swap(double *, int);

int main()
{
	double ary[5]; // �迭 ũ�� [] �̷��� ���س��� ���� ������ ={} ����� ��.
	int s = sizeof(ary) / sizeof(double); // ary�迭�� �� �濡 double�� ������� ����Ǿ����Ƿ�.
	
	printf("������ ���ڵ��� �Է��ϰ�, ����Ű�� �������� : ");
	for (int i = 0; i < s; i++)
	{
		scanf("%lf", &ary[i]);  // [] ���� ���� & ����� ��.
	}

	printf("ó�� �迭�� ����� �� : ");
	for (int a = 0; a < s; a++)
	{
		printf("%.2lf  ", ary[a]);
	}

	swap(ary, s);
	
	printf("\n�ٲ� �迭�� ����� �� : ");
	for (int b = 0; b < s; b++)
	{
		printf("%.2lf  ", ary[b]);
	}
	printf("\n");

	return 0;
}

void swap(double *s_ary, int s_s) // �� ������ ���� ���ϴ°� �ƴ϶� �׳� �������� �ٲ��ִ� �Լ�.
{
	int temp;
	for (int i = 0; i < s_s / 2; i++)
	{		
		temp = s_ary[i];
		s_ary[i] = s_ary[s_s - i-1];
		s_ary[s_s - i-1] = temp;		
	}

	return;
}