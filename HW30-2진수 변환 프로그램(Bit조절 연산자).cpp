/*작성자 : 황지원
1월 8일 HW30 : 2진수 변환 프로그램 작성*/         

#include <stdio.h>
#pragma warning (disable : 4996) // scanf_s 안써도 됨.

int main()                                              
{
	int a;
	printf("* 10진수 정수를 입력하시오 : ");
	scanf("%d", &a);
	printf("%d(10) = ",a);
	if (a >= 0)
	{
		for (int i = 31; i>=0; i--) // 31칸 오른쪽으로 밂. 32칸 밀면 다 없어짐ㅋ
		{
			printf("%d", (a >> i) & 1); // & : 맨 오른쪽 비트 값만 그대로 놓아두고, 나머지 비트는 0을 만듦.(0인지1인지 확인가능)
		}
	}
	else
	{
		//2의 보수 만들기.
		a = -a; // 절댓값 처리.
		a = ~a; // 1의 보수 연산자(비트 not 연산자)
		a += 1; // 1더하기.
		for (int i = 31; i>=0; i--)
		{
			printf("%d", (a >> i) & 1); // & : 맨 오른쪽 비트 값만 그대로 놓아두고, 나머지 비트는 0을 만듦.(0인지1인지 확인가능)
		}
	}
	printf("(2)\n");

	return 0;
}