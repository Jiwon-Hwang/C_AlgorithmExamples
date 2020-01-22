/*�ۼ��� : Ȳ����
1�� 9�� HW32 : ���� �Լ� ���α׷� �ۼ�*/      //�ݺ��� ���ص� ��. // 0�� 0�µ� 0, � ���� 0���� ��� 1, ���� �׻� ��������� ����, ����¸� ���ϴ� ������.

#include <stdio.h>
#pragma warning (disable : 4996) // scanf_s �Ƚᵵ ��.

//�Լ� �����
unsigned int inputUInt(char*); // ���ڿ� ���� �޾Ƽ� �Է¹��� ���� ���� ��ȯ. // �迭�� �����ͷ� ����...?
double inputDouble(char*);     // ���ڿ� ���� �޾Ƽ� �Է¹��� ���� �Ǽ� ��ȯ. // �迭�� �����ͷ� ����...?
int ipow(int, int);
double fpow(double, int);
void myflush();

int main()
{
	char UInt_str1[40] = "*���� ���� ���� �Է� �Ͻÿ� : ";
	int num = inputUInt(UInt_str1); // �� ���� ��� �� ���� ���� �� �޾ƿ�.
	char UInt_str2[30] = "*���� ���� �Է� �Ͻÿ� : ";
	int N = inputUInt(UInt_str2); // �� ���� ��� �� ���� �� �޾ƿ�.
	int result = ipow(num, N); // �ذ� �� ��������.
	printf("%d�� %d���� %d�Դϴ�.\n\n", num, N, result);
	
	char Double_str1[40] = "*���� �Ǽ� ���� �Է� �Ͻÿ� : ";
	double fnum = inputDouble(Double_str1);
	char Double_str2[30] = "*���� ���� �Է� �Ͻÿ� : ";       // ***���⼭ ������ ��! fN�� intŸ�� �̹Ƿ� inputDouble�� �ƴ϶� inputUInt�� ������ ��!
	int fN = inputUInt(Double_str2);                          // ***���� intUInt�� ����!!! intUInt�� ��ȯ���� unsigned int ��!!
	double fresult = fpow(fnum, fN);
	printf("%0.2lf�� %d���� %0.3lf�Դϴ�. \n",fnum, fN, fresult);

	return 0;
}

unsigned int inputUInt(char *iU_string) // �ذ� �� �Է��϶�� �� ���ڿ� ���� ���� �޾Ƽ� �Է¹��� ���� ���� ��ȯ. //�迭�� �����ͷ� ����....?
{
	printf("%s", iU_string);
	int n;                  // num���� ���� ��, ���� ��(���� �����϶��� ���� �Ǽ��϶� ���) ��, 3���� �ٸ� ���� ���� �Էµ� ��.
	scanf("%d", &n);
	while (1)
	{
		if(n>0)
		{
			break;
		}
		else
		{
			myflush(); // ���� ����� �ƴ� ��쿣 scanf()�� �ٽ� �Է� �޾ƾ� �ϱ� ������ �Է¹��� stdin�� �����ִ� �߸��� �� ���� �ٽ� �ޱ�!
			printf("���� ���� ������ �ٽ� �Է��ϼ���.\n");
			scanf("%d",&n);
		}
	}
	
	return n;
}

int ipow(int i_num, int i_N)
{
	int i_result = 1;
	for (int i = 0; i < i_N; i++)
	{
		i_result *= i_num;
	}

	return i_result;
}

double inputDouble(char *iD_string)     // ���ڿ� ���� �޾Ƽ� �Է¹��� ���� �Ǽ� ��ȯ.
{
	printf("%s", iD_string);
	double fn;                  // num���� ���� ��, ���� ��(���� �����϶��� ���� �Ǽ��϶� ���) ��, 3���� �ٸ� ���� ���� �Էµ� ��.
	scanf("%lf", &fn);
	while (1)
	{
		if (fn > 0)
		{
			break;
		}
		else
		{
			myflush(); // ���� ����� �ƴ� ��쿣 scanf()�� �ٽ� �Է� �޾ƾ� �ϱ� ������ �Է¹��� stdin�� �����ִ� �߸��� �� ���� �ٽ� �ޱ�!
			printf("���� �Ǽ� ������ �ٽ� �Է��ϼ���.\n");
			scanf("%d", &fn);
		}
	}

	return fn;
}

double fpow(double f_num, int f_N)
{
	double f_result = 1.0;
	for (int i = 0; i < f_N; i++)
	{
		f_result *= f_num;
	}

	return f_result;
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