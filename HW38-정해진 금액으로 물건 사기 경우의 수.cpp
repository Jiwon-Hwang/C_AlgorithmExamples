/*�ۼ��� : Ȳ����
1�� 5�� HW38 : ������ �ݾ����� ���� �����ϱ� ���α׷� �ۼ�*/

#include <stdio.h>
#pragma warning (disable : 4996) // scanf_s �Ƚᵵ ��.

int main()
{
	int money;
	printf("���� ����� ���� �ݾ� �Է� : ");
	scanf("%d", &money);

	for (int i=1;money-500*i>=0;i++)
	{
		for (int j=1;money-500*i-700*j>=0;j++)
		{
			for (int k=1;money-500*i-700*j-400*k>=0;k++)
			{
				if (money-500*i-700*j-400*k==0) // ���� ���� ���� ��쿡�� ������ ���!
				{
					printf("ũ����(%d��), �����(%d����), �ݶ�(%d��)\n",i,j,k); // i,j,k ���� ũ����, �����, �ݶ� ����.
				}
			}
		}
	}

	printf("��� �����Ͻðڽ��ϱ�?\n");
	return 0;
}

