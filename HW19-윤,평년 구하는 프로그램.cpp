/*�ۼ��� : Ȳ����
1�� 2�� HW19 : ��,��� ���ϴ� ���α׷� �ۼ�*/

#include <stdio.h>

//�Լ� �����
int input();
int yearCheck(int);
void output(int,int);     // ��� ���� ��¸� �ϸ� ����ϱ� �ƹ��͵� ��ȯ �����൵ ��.

int main()
{
	int y;
	printf("�⵵�� �Է��Ͻÿ� : ");
	y = input(); 

	int checkResult=yearCheck(y);  // �����̸� 1, ����̸� 0 ��ȯ ���� ��.

	output(y, checkResult);

	return 0;
}

int input()
{
	int year;
	scanf_s("%d", &year);

	return year;
}

int yearCheck(int year)
{
	int result;

	if (year % 4 == 0)
	{
		if (year % 100 == 0)
		{
			if (year % 400 == 0)
			{
				result = 1;
			}
		}
	}
	else
	{
		result = 0;
	}

	return result;  // result : 1 or 0
}

void output(int o_year, int o_result)
{
	if (o_result == 1)
	{
		printf("%d���� ����(Leap Year)�Դϴ�.\n",o_year);
	}
	else
	{
		printf("%d���� ���(Common Year)�Դϴ�.\n",o_year);
	}

	return;
}