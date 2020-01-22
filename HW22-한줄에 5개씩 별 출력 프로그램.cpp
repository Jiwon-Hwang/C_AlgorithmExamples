/*작성자 : 황지원
1월 2일 HW22 : 한줄에 5개씩 별(*) 출력 프로그램 작성*/

#include <stdio.h>

//함수 선언부
int input();

int main()
{
	int a;
	printf("# 정수값을 입력하세요 : ");
	a = input();
	int i=0; // 초기화는 while문 안에서 한줄 돌때마다 0으로 초기화 해줄것!
	
	while (a>0)
	{
		
		if (i<5)
		{
			printf("*");
			a--, i++;
		}
		else
		{
			printf("\n");
			i = 0; // 별 5개 다 찍고 나서 한줄 바뀔때 마다 i=0으로 초기화 해줘야 함!! 그래야 다시 5개씩 찍힘
		}
	}

	printf("\n");

	return 0;
}

int input()
{
	int i_a;
	scanf_s("%d", &i_a);

	return i_a;
}