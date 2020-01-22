/*작성자 : 황지원
1월 2일 HW19 : 윤,평년 구하는 프로그램 작성*/

#include <stdio.h>

//함수 선언부
int input();
int yearCheck(int);
void output(int,int);     // 결과 문장 출력만 하면 종료니깐 아무것도 반환 안해줘도 됨.

int main()
{
	int y;
	printf("년도를 입력하시오 : ");
	y = input(); 

	int checkResult=yearCheck(y);  // 윤년이면 1, 평년이면 0 반환 받을 것.

	output(y, checkResult);

	return 0;
}

int input()
{
	int year;
	scanf_s("%d", &year);

	return year;
}

int yearCheck(int year)
{
	int result;

	if (year % 4 == 0)
	{
		if (year % 100 == 0)
		{
			if (year % 400 == 0)
			{
				result = 1;
			}
		}
	}
	else
	{
		result = 0;
	}

	return result;  // result : 1 or 0
}

void output(int o_year, int o_result)
{
	if (o_result == 1)
	{
		printf("%d년은 윤년(Leap Year)입니다.\n",o_year);
	}
	else
	{
		printf("%d년은 평년(Common Year)입니다.\n",o_year);
	}

	return;
}