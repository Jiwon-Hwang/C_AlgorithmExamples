/*작성자 : 황지원
1월 2일 HW21 : 다섯 명의 학생의 키를 입력 받아 그 평균을 출력하는 프로그램 작성*/

#include <stdio.h>

int main()
{
	double a, b, c, d, e, m;

	printf("- 1번 학생의 키는? ");
	scanf_s("%lf", &a);

	printf("- 2번 학생의 키는? ");
	scanf_s("%lf", &b);

	printf("- 3번 학생의 키는? ");
	scanf_s("%lf", &c);

	printf("- 4번 학생의 키는? ");
	scanf_s("%lf", &d);
	
	printf("- 5번 학생의 키는? ");
	scanf_s("%lf", &e);

	m = (a + b + c + d + e) / 5;
	printf("다섯 명의 평균 키는 %.1lfcm 입니다\n", m); // 소수점 이하 첫째 자리까지 출력

	return 0;
}