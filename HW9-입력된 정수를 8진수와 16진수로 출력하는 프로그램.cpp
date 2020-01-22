/*작성자 : 황지원
12월 29일 HW9 : 입력된 정수를 8진수와 16진수로 출력하는 프로그램 작성*/

//8진수(#flag인 0에 8로 나눈 나머지(0~7사이)들 이어 쓰기)----------0~7 : 00 01 02.....07
//16진수(#flag인 0x에 16으로 나눈 나머지(0~9,A~F사이)들 이어쓰기)--0~15 : 0x0 0x1 0x2....0xF

#include <stdio.h>

//함수 선언부
int input();

int main()
{
	int number;
	printf("정수값을 입력하세요 : ");
	number = input();

	printf("입력된 값은 8진수로 0%o입니다.\n",number); 
	printf("입력된 값은 16진수로 0x%x입니다\n",number);
	//#flag까지 출력. 8진수는 %o(OCT), 16진수는 %x(HEX)

	return 0;
}

int input()
{
	int num;
	scanf_s("%d", &num);

	return num;
}