/*�ۼ��� : Ȳ����
1�� 8�� HW29 : ������ ���α׷� �ۼ�*/

#include <stdio.h>
#pragma warning (disable : 4996) // scanf_s �Ƚᵵ ��.

//�Լ� �����
int inputUInt();
void output(int, int, int); // ���⼭ �������� gozip�� �ڿ����� �� ����ϰ� ������ ��. return �� �ʿ� ����.
int transNumber(int); // *** ���� �� ��� �ڿ������� ���������� ���ؼ� ��ȯ�ϴ� �Լ�. *** output�Լ��� ������ �Ѱܼ� gozip�� ������ Ȯ���� ��.
void myflush();

int main()
{
	int start, end, gozip;
	printf("100<=P1<P2<=10000\n");
	printf("���� ��(P1) : ");
	start = inputUInt();
	printf("�� ��(P2) : ");
	end = inputUInt();
	printf("������(1<=N<=10) : ");
	gozip = inputUInt();

	printf("�������� %d�� ���� ���\n", gozip);
	output(start, end, gozip); // *** �˰��� : �켱 output�Լ��� ���� for�� ������ start~end������ ��� �ڿ��� üũ�ϸ鼭 ������==gozip�ΰŴ� ���(output). �� ���� �������� transNumber�Լ����� ���ϱ�.

	return 0;
}

int inputUInt() // ���� ������ �Է� �޾� return. ������ ���ڿ� ���� �Է� ���� ó�� �ʼ�!
{
	int input_num;
	int res;
	res = scanf("%d", &input_num); // ���� else if���� �ٽ� scanf()�� ��ȯ�� ������ �ٽ� �Է¹����� �ȵǹǷ� �̸� ��Ƶ�.
	while (1)
	{
		if (input_num <= 0) // 0�̳� ���� �Է� ���� ó�� - �� ���Է� ������ ��.
		{
			printf("������ �Է��ϼ̽��ϴ�. ���� ������ ���Է��ϼ��� : ");
			scanf("%d", &input_num);
		}
		else if (res != 1) // ���� �Է� ���� ó�� - myflush�� ������ ��. %d�� ���ڴ� ���������� �Է¹��ۿ� ��������.
		{
			myflush();
			printf("���ڸ� �Է��ϼ̽��ϴ�. ���� ������ ���Է� �ϼ��� : ");
			scanf("%d", &input_num);
		}
		else // ���������� ���� ���� �Է� �޾��� ��(input_num>0))
		{
			break;
		}
	}

	return input_num;
}

void output(int o_start, int o_end, int o_gozip) // ������� �ش��ϴ� ���� ������ ��� ����ϴ� �Լ�.
{
	int count = 0; // �������� �ش��ϴ� ���� ������ ���� count.
	for (int i = o_start; i <= o_end; i++)
	{
		if (transNumber(i) == o_gozip)
		{
			printf("%d\n", i);
			++count;
		}
		else
		{
			;
		}
	}

	printf("�� ���� : %d��\n", count);

	return;
}


int transNumber(int t_num) // ***�� �Լ� �߿�!!! ���� ���� ��� ���� ���� t_num�� �� �ڸ����� �����ؼ� ���� �� ������ ������ return.
{
	int trans_gozip = 0;
	int a, b, c, d, e, mul;

	while (1)
	{
		a = 1, b = 1, c = 1, d = 1, e = 1;

		if (t_num == 10000)
		{
			mul = 0;
			trans_gozip++;
		}
		else if (t_num >= 1000)
		{
			b = t_num / 1000;
			c = (t_num % 1000) / 100;
			d = ((t_num % 1000) % 100) / 10;
			e = ((t_num % 1000) % 100) % 10;

			mul = b*c*d*e;
			trans_gozip++;
		}
		else if (t_num >= 100)
		{
			c = t_num / 100;
			d = (t_num % 100) / 10;
			e = (t_num % 100) % 10;

			mul = c*d*e;
			trans_gozip++;
		}
		else if (t_num >= 10)
		{
			d = t_num / 10;
			e = (t_num % 10);

			mul = d*e;
			trans_gozip++;
		}
		else
		{
			break;
		}
		t_num = mul;
	}

	return trans_gozip;
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