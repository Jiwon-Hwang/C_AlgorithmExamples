/*�ۼ��� : Ȳ����
1�� 2�� HW22 : ���ٿ� 5���� ��(*) ��� ���α׷� �ۼ�*/

#include <stdio.h>

//�Լ� �����
int input();

int main()
{
	int a;
	printf("# �������� �Է��ϼ��� : ");
	a = input();
	int i=0; // �ʱ�ȭ�� while�� �ȿ��� ���� �������� 0���� �ʱ�ȭ ���ٰ�!
	
	while (a>0)
	{
		
		if (i<5)
		{
			printf("*");
			a--, i++;
		}
		else
		{
			printf("\n");
			i = 0; // �� 5�� �� ��� ���� ���� �ٲ� ���� i=0���� �ʱ�ȭ ����� ��!! �׷��� �ٽ� 5���� ����
		}
	}

	printf("\n");

	return 0;
}

int input()
{
	int i_a;
	scanf_s("%d", &i_a);

	return i_a;
}