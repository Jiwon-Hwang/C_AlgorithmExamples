/*작성자 : 황지원
12월 29일 HW10 : 두 정수를 입력 받아 합,차,곱,몫의 값을 출력하는 프로그램 작성*/

#include <stdio.h>

int main()
{
	int a, b;
	printf("두개의 정수를 입력하시오 : ");
	scanf_s("%d %d", &a, &b);

	printf("%d + %d = %d", a, b, a + b);
	printf("%d - %d = %d", a, b, a - b);
	printf("%d * %d = %d", a, b, a * b);
	printf("%0.0d / %0.0d = %0.2lf", a, b, a / b);

	return 0;
}