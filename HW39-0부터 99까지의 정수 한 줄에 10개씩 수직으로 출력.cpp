/*�ۼ��� : Ȳ����
1�� 5�� HW39 : 0���� 99������ ������ �� �ٿ� 10���� �������� ����ϴ� ���α׷� �ۼ�*/

#include <stdio.h>
#pragma warning (disable : 4996) // scanf_s �Ƚᵵ ��.

int main()
{
	int i, j;
	int num;

	for (i = 0; i < 10; i++) {
		num = 10;
		num += i;
		printf("%d  ", i);
		for (j = 0; j < 9; j++) {
			printf("%d  ", num);
			num = num + 10;
		}
		printf("\n");
	}
	return 0;
}