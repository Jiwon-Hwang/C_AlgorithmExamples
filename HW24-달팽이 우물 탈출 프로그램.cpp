/*�ۼ��� : Ȳ����
1�� 4�� HW24 : ������ �칰 Ż�� ���α׷� �ۼ�*/ 

#include <stdio.h>
#pragma warning (disable : 4996) // scanf_s �Ƚᵵ ��.

//�Լ� ����� 
int input();
int calc_day(int);
void output(int, int);

int main()
{
	int dep; //�칰�� ����
	printf("* �칰�� ���̸� �Է��Ͻÿ� (cm����) : ");
	dep = input();

	int day = calc_day(dep);
	
	output(dep,day);

	return 0;
}

int input()
{
	int i_d;
	scanf("%d", &i_d);
	
	return i_d;
}

int calc_day(int c_dep)
{
	int c_d; // Ż�� ��¥ (Ż���ϱ���� ��ĥ�� �ɸ�����)
	int c_h=0; // �����̰� �ö� �ִ� ����

	for (c_d=1;c_dep>c_h;c_d++) // �ö��ִ� ���̰� �칰���� ������ ��¥ ī��Ʈ stop & Ż��
	{
		c_h += 50;

		if (c_dep > c_h) // �칰 ���̺��� ���� �ö���ִ� ���̰� �� ���Ƽ� 50 �ö󰬴���(���ߴ���) ������ �칰���̺��� �Ѿ����! = ��,�칰Ż��! �׷��Ƿ� 20���������ʰ� break.
		{
			c_h -= 20;
		}
		else
		{
			break;  
		}
	}

	return c_d; // �칰 Ż�� �� Ż�⿡ �ɸ� ��¥ c_d ��ȯ�ϱ�.
}

void output(int o_dep, int o_day)
{
	printf("%.2lf���� ������ �칰�� Ż���ϱ� ���ؼ��� %d���� �ɸ��ϴ�.\n",(double)o_dep/100,o_day); // ���ͷ� ����ؾ� �ϹǷ� 100������ 5.00�̷��� ǥ���ؾ� �ϹǷ� ��������ȯ.
	
	return;
}