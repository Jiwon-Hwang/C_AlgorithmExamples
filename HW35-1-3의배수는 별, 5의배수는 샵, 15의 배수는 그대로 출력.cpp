/*�ۼ��� : Ȳ����
1�� 5�� HW35-1 : 1~100 ������ ���ڸ� ����� �� 3�� ����� '*'��, 5�� ����� '#'���� ����ϰ�, 3�� 5�� ������� ������ڷ� ����ϴ� ���α׷� �ۼ�*/

#include <stdio.h>
#pragma warning (disable : 4996) // scanf_s �Ƚᵵ ��.

int main()
{
	for (int i = 1; i <= 100; i++) {
		if (i % 3 == 0) {
			if (i % 15 == 0) {
				printf("%3d", i);
			}

			else {
				printf("  *"); // cf. printf("%3c",'*'); �̷������� �ʵ��� ������ ����!!!
			}
		}

		else if (i % 5 == 0) {
			if (i % 15 == 0) {
				printf("%3d", i);
			}
			else {
				printf("  #");
			}
		}

		else {
			printf("%3d", i);
		}


		if (i % 10 == 0) {
			printf("\n");
		}
	}
	return 0;
}