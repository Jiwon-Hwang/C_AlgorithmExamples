/*�ۼ��� : Ȳ����
1�� 5�� HW36 : �Ǻ���ġ ���� ���ϱ� ���α׷� �ۼ�*/

#include <stdio.h>
#pragma warning (disable : 4996) // scanf_s �Ƚᵵ ��.

int main()
{
	int a = 1, b = 1, sum = 2, c;
	int num;
	printf("�Ǻ���ġ ������ �׼��� �Է��Ͻÿ� : ");
	scanf("%d", &num);

	printf("%d+%d+", a, b); // ���� 1+1+ �켱 ���

	for (int i = 2; i < num; i++)
	{
		c = a + b;
		sum += c;
		
		a = b;
		b = c;
		printf("%d+", b); // ������ c�� ���!(b=c)
	}
	printf("\b=%d\n",sum);

	return 0;
}