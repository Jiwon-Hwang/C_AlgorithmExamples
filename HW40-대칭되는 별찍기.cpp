/*작성자 : 황지원
1월 5일 HW40 : 대칭되는 별찍기 프로그램 작성*/

#include <stdio.h>
#pragma warning (disable : 4996) // scanf_s 안써도 됨.

int main()
{
	char ch = '*';
	int i, j, ip_num;

	printf("# 출력 라인 수를 입력하시오 : ");

	while (1)
	{
		if(scanf_s("%d", &ip_num)==1)
		{
			break;
		}
		else
		{
			return 0;
		}
	}
	
	ip_num += 1;

	for (i = 1; i<ip_num; i++)
	{
		for (j = 0; j<i; j++)
		{
			printf("%c", ch);
		}
		for (j = 0; j<ip_num * 2 - i * 2; j++)
		{
			printf(" ");
		}
		for (j = 0; j<i; j++)
		{
			printf("%c", ch);
		}
		printf("\n");
	}
	return 0;
}