/*�ۼ��� : Ȳ����
1�� 5�� HW42 : ������ ��� ���α׷� �ۼ�*/

#include <stdio.h>
#pragma warning (disable : 4996) // scanf_s �Ƚᵵ ��.

int main()
{
	int i, j, mult;
	for (i = 1; i < 10; i++)
	{
		for (j = 2; j < 10; j++)
		{
			mult = i*j;
			printf("%d*%d = %d ", j, i, mult);
		}
		printf("\n");
	}
	return 0;
}