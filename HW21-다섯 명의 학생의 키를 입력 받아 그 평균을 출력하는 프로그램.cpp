/*�ۼ��� : Ȳ����
1�� 2�� HW21 : �ټ� ���� �л��� Ű�� �Է� �޾� �� ����� ����ϴ� ���α׷� �ۼ�*/

#include <stdio.h>

int main()
{
	double a, b, c, d, e, m;

	printf("- 1�� �л��� Ű��? ");
	scanf_s("%lf", &a);

	printf("- 2�� �л��� Ű��? ");
	scanf_s("%lf", &b);

	printf("- 3�� �л��� Ű��? ");
	scanf_s("%lf", &c);

	printf("- 4�� �л��� Ű��? ");
	scanf_s("%lf", &d);
	
	printf("- 5�� �л��� Ű��? ");
	scanf_s("%lf", &e);

	m = (a + b + c + d + e) / 5;
	printf("�ټ� ���� ��� Ű�� %.1lfcm �Դϴ�\n", m); // �Ҽ��� ���� ù° �ڸ����� ���

	return 0;
}