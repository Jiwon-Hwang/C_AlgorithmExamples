/*작성자 : 황지원
12월 28일 HW3 : 초 수를 시, 분, 초단위로 환산하는 프로그램 작성*/
#include <stdio.h>


int main()
{
	int sec = 54321;
	int hour, min;

	hour = sec / 3600;  // 몫만 남음.(ex. ~시간) // 1시간은 3600초.
	sec -= hour * 3600; // sec은 누적값. 총 시간 부터 뺀 나머지 남음.

	min = sec / 60;
	sec -= min * 60;

	printf("54321초는 %d시간 %d분 %d초 입니다.\n", hour, min, sec);

	return 0;           //반환값 0 : 정상종료 의미함.
}
