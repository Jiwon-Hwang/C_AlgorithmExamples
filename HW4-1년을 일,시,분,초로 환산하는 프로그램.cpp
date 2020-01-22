/*작성자 : 황지원
12월 29일 HW4 : 1년을 일,시,분,초로 환산하는 프로그램 작성*/

#include <stdio.h>

int main() //강제형변환으로 소숫점 아래부분은 버리고 정수만 남김.
{
	double day = 365.2422;
	double iday, hour, min, sec;

	iday = (int)day;      //강제 형변환 : 365만 출력됨.
	hour = (int) ( (day - iday) * 24 );
	min = (int)((day - iday - hour / 24) * 24 * 60);              //day는 일 단위이기 때문에  일단위에다가 hour(시간)을 빼주면 안됨! 시간을 다시 일로 바꿔야 함.(24로 나누기)//그리고 1일은 24*60분.
	sec = (day - iday - hour / 24 - min / 24 / 60) * 24 * 60 * 60;//1일은 24*60*60초.

	printf("%0.4lf일은 %0.0lf일 %0.0lf시간 %0.0lf분 %0.2lf초 입니다.\n", day, iday, hour, min, sec);

	return 0;
}