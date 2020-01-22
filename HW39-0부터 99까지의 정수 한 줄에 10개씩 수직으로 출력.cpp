/*작성자 : 황지원
1월 5일 HW39 : 0부터 99까지의 정수를 한 줄에 10개씩 수직으로 출력하는 프로그램 작성*/

#include <stdio.h>
#pragma warning (disable : 4996) // scanf_s 안써도 됨.

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