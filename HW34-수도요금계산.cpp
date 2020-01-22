/*�ۼ��� : Ȳ����
1�� 5�� HW34 : ������� ��� ���α׷� �ۼ�*/

#include <stdio.h>
#pragma warning (disable : 4996) // scanf_s �Ƚᵵ ��.

//�Լ� �����
int input_code();
int input_usage();
int calc(int);
void output(int,int,int);
void myflush();

int main()
{
	
	int code, unit_fee; // ����� �ڵ� ��ȯ��.
	
	while (1) {
		printf("* ����� �ڵ带 �Է��Ͻÿ�(1:������ / 2:����� / 3:������) : ");
		code = input_code();
		if(code == 1 || code == 2 || code ==3 ){
			switch (code)
			{
				case 1:unit_fee = 50; break;
				case 2:unit_fee = 45; break;
				default:unit_fee = 30; break;
			}
			break;
		}
		printf("�߸��� ���� �Է��ϼ̽��ϴ�. �ٽ� �Է��� �ּ���. \n");
	}
	
	int usage = input_usage();
	int fee = usage*unit_fee;
	int total = calc(fee);

	output(code,usage,total);

	return 0;
}

int input_code()
{
	int i_c; 
	scanf("%d", &i_c);
	return i_c;
}

int input_usage()
{
	int i_u; 
	while (1)
	{
		printf("* ��뷮�� �Է��Ͻÿ�(ton����) : ");

		if (scanf("%d", &i_u)!=1) // ���� ���⼭ a�� ���� ������ �ƴ� ���� �Է����� ��, %d�� Ÿ���� ���� �����Ƿ� %d�� �Է� ���۷� ���� �Էµ� a���� ������ ���� ����(�Է¹��ۿ��� a�� \n�� �ԷµǾ�����.)
		{
			printf("�߸��� ���� �Է��ϼ̽��ϴ�. �ٽ� �Է��� �ּ���.\n");
			myflush();
			//���� ���Է� �ޱ� ���� �Է¹��ۿ� �����ִ� a�� ���๮�ڸ� ������� ���ѷ����� ������ ����. ��� a�� ���� �ְ� �������� �ʾƼ� ���ѷ��� ���Ҵ� ��. ���� myflush�� getchar��� ��.
			//getchar�� �׳� �ϳ� �̾� �ͼ� ��ȯ�� �ִ� ��. ���� myflush���� ���� �;� ��.
		}
		else 
		{
			break;
		}
		
	}
	return i_u;
}

int calc(int c_fee)
{
	int c_total = (int)(c_fee*1.05);

	return c_total;
}

void output(int o_code,int c_usage,int c_total)
{
	switch(o_code)
	{
	case 1: printf("# ������ڵ� : %d(������)\n# ��뷮 : %d ton\n# �Ѽ������ : %d��\n", o_code, c_usage, c_total); break;
	case 2: printf("# ������ڵ� : %d(�����)\n# ��뷮 : %d ton\n# �Ѽ������ : %d��\n", o_code, c_usage, c_total); break;
	default: printf("# ������ڵ� : %d(������)\n# ��뷮 : %d ton\n# �Ѽ������ : %d��\n", o_code, c_usage, c_total); break;
	}
	
	return;
}

void myflush()
{
	while (1)
	{
		if(getchar()=='\n') // ���๮�ڰ� �Է¹����� stdin �� �������� ���� ���� ���̹Ƿ�, getchar�� ���๮�� �̾ƿ��� �������� ��� ���� �����ִ� ���ڵ� �̾ƿ�. ���๮�ڱ��� �̾ƿ��� ��.
		{
			break;
		}
	}
	return;
}