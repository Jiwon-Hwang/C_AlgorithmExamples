/*�ۼ��� : Ȳ����
12�� 27�� HW1 : ���� ���� ���� ��� ���α׷� �ۼ�*/
#include <stdio.h>

void printAge(int);
void printHeight(double);           // **�Լ� ����� �� ����� �ϰ�, **�Ű����� ���� ��쿣 �� ����ο��� ()�ȿ� �ڷ��� ��� ��!!!**

int main()
{
	char name[20] = "Ȳ����";
	int age = 21;
	double height = 160.1;

	printf("���� : %s\n", name);
	printAge(age);
	printHeight(height);           // �Լ� ȣ���. �Ű������� ��������. 
	
	return 0;                      //��ȯ�� 0 : �������� �ǹ���.
}

void printAge(int age1)           //�Լ� ���Ǻ�
{
	printf("���� : %d\n", age1);

	return;                            // void�� return���� ����.
}
void printHeight(double height1)
{
	printf("���� : %0.1f\n", height1); // double�� ���� : %f, %�� f ���̿� 0.1�� �Ҽ��� ���ڸ� ���ڸ������� ǥ���Ѵٴ� ��.

	return;
}