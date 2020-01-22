/*작성자 : 황지원
1월 5일 HW36 : 피보나치 수열 구하기 프로그램 작성*/

#include <stdio.h>
#pragma warning (disable : 4996) // scanf_s 안써도 됨.

int main()
{
	int a = 1, b = 1, sum = 2, c;
	int num;
	printf("피보나치 수열의 항수를 입력하시오 : ");
	scanf("%d", &num);

	printf("%d+%d+", a, b); // 초항 1+1+ 우선 출력

	for (int i = 2; i < num; i++)
	{
		c = a + b;
		sum += c;
		
		a = b;
		b = c;
		printf("%d+", b); // 누적값 c만 출력!(b=c)
	}
	printf("\b=%d\n",sum);

	return 0;
}