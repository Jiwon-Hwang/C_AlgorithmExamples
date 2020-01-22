/*작성자 : 황지원
1월 5일 HW42 : 구구단 출력 프로그램 작성*/

#include <stdio.h>
#pragma warning (disable : 4996) // scanf_s 안써도 됨.

int main()
{
	int i, j, k, mult;
	for (k=0;k<2;k++)
	{
		for (i = 1; i < 10; i++)
		{
			for (j = 2; j < 6; j++)  // 1단은 없으므로 j=2단부터 시작, 2, 3, 4, 5단까지 위쪽에 출력하고 그담에 2단밑에 6단부터다시 
			{
				mult = i*j;
				printf("%d*%d=%2d          ", j, i, mult);
			}
			printf("\n");
		}

		printf("\n\n");

		for (i = 1; i < 10; i++)
		{
			for (j = 6; j < 10; j++)  // 1단은 없으므로 j=2단부터 시작, 2, 3, 4, 5단까지 위쪽에 출력하고 그담에 2단밑에 6단부터다시 
			{
				mult = i*j;
				printf("%d*%d=%2d          ", j, i, mult);
			}
			printf("\n");
		}
		if (k == 0)
		{
			printf("----------------------------------------------------------------\n\n"); // 16*4단=총64개의 '-'
			printf("<3중 for문을 이용한 출력>\n");
		}	
	}
	
	return 0;
}