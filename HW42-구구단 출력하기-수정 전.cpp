/*작성자 : 황지원
1월 5일 HW42 : 구구단 출력 프로그램 작성*/

#include <stdio.h>
#pragma warning (disable : 4996) // scanf_s 안써도 됨.

int main()
{
	int i, j, mult;
	for (i = 1; i < 10; i++)
	{
		for (j = 2; j < 10; j++)
		{
			mult = i*j;
			printf("%d*%d = %d ", j, i, mult);
		}
		printf("\n");
	}
	return 0;
}