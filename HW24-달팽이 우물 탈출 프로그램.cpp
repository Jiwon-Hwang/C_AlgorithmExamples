/*작성자 : 황지원
1월 4일 HW24 : 달팽이 우물 탈출 프로그램 작성*/ 

#include <stdio.h>
#pragma warning (disable : 4996) // scanf_s 안써도 됨.

//함수 선언부 
int input();
int calc_day(int);
void output(int, int);

int main()
{
	int dep; //우물의 깊이
	printf("* 우물의 깊이를 입력하시오 (cm단위) : ");
	dep = input();

	int day = calc_day(dep);
	
	output(dep,day);

	return 0;
}

int input()
{
	int i_d;
	scanf("%d", &i_d);
	
	return i_d;
}

int calc_day(int c_dep)
{
	int c_d; // 탈출 날짜 (탈출하기까지 며칠이 걸리는지)
	int c_h=0; // 달팽이가 올라가 있는 높이

	for (c_d=1;c_dep>c_h;c_d++) // 올라가있는 높이가 우물보다 높으면 날짜 카운트 stop & 탈출
	{
		c_h += 50;

		if (c_dep > c_h) // 우물 높이보다 지금 올라와있는 높이가 더 낮아서 50 올라갔더니(더했더니) 이제는 우물깊이보다 넘어버림! = 즉,우물탈출! 그러므로 20내려오지않고 break.
		{
			c_h -= 20;
		}
		else
		{
			break;  
		}
	}

	return c_d; // 우물 탈출 후 탈출에 걸린 날짜 c_d 반환하기.
}

void output(int o_dep, int o_day)
{
	printf("%.2lf미터 깊이의 우물을 탈출하기 위해서는 %d일이 걸립니다.\n",(double)o_dep/100,o_day); // 미터로 출력해야 하므로 100나누고 5.00이렇게 표현해야 하므로 강제형변환.
	
	return;
}