/*작성자 : 황지원
12월 29일 HW11 : ASCII코드를 입력받아 ASCII코드에 해당하는 문자 출력 프로그램 작성*/

#include <stdio.h>

int main()
{
	int a;
	printf("ASCII code값을 입력하시오 : ");
	scanf_s("%d", &a);
	printf("%d은 '%c'의 ASCII code 입니다.\n", a, a);

	return 0;
}

