/*�ۼ��� : Ȳ����
1�� 5�� HW40 : ��Ī�Ǵ� ����� ���α׷� �ۼ�*/

#include <stdio.h>
#pragma warning (disable : 4996) // scanf_s �Ƚᵵ ��.

int main()
{
	char ch = '*';
	int i, j, ip_num;

	printf("# ��� ���� ���� �Է��Ͻÿ� : ");

	while (1)
	{
		if(scanf_s("%d", &ip_num)==1)
		{
			break;
		}
		else
		{
			return 0;
		}
	}
	
	ip_num += 1;

	for (i = 1; i<ip_num; i++)
	{
		for (j = 0; j<i; j++)
		{
			printf("%c", ch);
		}
		for (j = 0; j<ip_num * 2 - i * 2; j++)
		{
			printf(" ");
		}
		for (j = 0; j<i; j++)
		{
			printf("%c", ch);
		}
		printf("\n");
	}
	return 0;
}