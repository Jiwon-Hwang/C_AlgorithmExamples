/*�ۼ��� : Ȳ����
12�� 29�� HW10 : �� ������ �Է� �޾� ��,��,��,���� ���� ����ϴ� ���α׷� �ۼ�*/

#include <stdio.h>

int main()
{
	int a, b;
	printf("�ΰ��� ������ �Է��Ͻÿ� : ");
	scanf_s("%d %d", &a, &b);

	printf("%d + %d = %d", a, b, a + b);
	printf("%d - %d = %d", a, b, a - b);
	printf("%d * %d = %d", a, b, a * b);
	printf("%0.0d / %0.0d = %0.2lf", a, b, a / b);

	return 0;
}