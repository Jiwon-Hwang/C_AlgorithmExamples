/*�ۼ��� : Ȳ����
1�� 8�� HW27 : �ް� ���� ���α׷� �ۼ�*/

#include <stdio.h>
#pragma warning (disable : 4996) // scanf_s �Ƚᵵ ��.

//�Լ� �����
int user_ip();

int main()
{
	int count = 0;
	int res;
	while (count < 10) {
		res = user_ip();
		if (res < 150) {
			printf("* ���߸��� ������ �峭���� ���ÿ�~^^ \n");
		}
		else if (res > 500) {
			printf("* Ÿ���� ������ �峭���� ���ÿ�~^^ \n");
		}
		else {
			count++;
			printf("* ���� �ް� �� : %d \n", count);
		}
	}

	printf("\n*** �ް� ������ �������ϴ�. \n");
	return 0;
}

int user_ip() {
	int res;
	printf("# ����� ���Ը� �Է��ϼ���(���� : g) : ");
	scanf_s("%d", &res);
	return res;
}