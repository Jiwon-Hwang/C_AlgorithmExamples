/*�ۼ��� : Ȳ����
1�� 3�� HW13 : �̸��� ���� �� ��� ���α׷� �ۼ�*/

#include <stdio.h>
#include <string.h> // �迭 ������ �˷��ִ� strlen �Լ� ���� ���ؼ� �ʿ��� �������
#pragma warning (disable : 4996) // scanf_s �Ƚᵵ ��.

int main()
{
	char L_name[20]; // last name : ��
	char F_name[20]; // first name : �̸�

	printf("#���� �Է��Ͻÿ� : ");
	scanf("%s", L_name);
	printf("#�̸��� �Է��Ͻÿ� : ");
	scanf("%s", F_name);
	
	int len_L;              
	len_L = strlen(L_name); // strlen�Լ��� �ι��� ������ ���ڿ��� ���̸� ���. //���๮�ڴ� ����x?
	int len_F;
	len_F = strlen(F_name);


	printf("%s %s\n", L_name, F_name);
	while (len_L-1>0)
	{
		printf(" ");
		len_L--;
	}
	len_L = strlen(L_name);
	printf("%d ",len_L); // ���� ���ڿ� ���� ��(ex.4) ��� �� ��ĭ ���! �̸� ������ ���� ��ĭ ����� �����ϱ�..

	while (len_F - 1 > 0)
	{
		printf(" ");
		len_F--;
	}
	len_F = strlen(F_name);
	printf("%d\n",len_F);

	return 0; 
}