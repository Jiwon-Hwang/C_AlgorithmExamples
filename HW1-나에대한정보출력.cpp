/*작성자 : 황지원
12월 27일 HW1 : 나에 대한 정보 출력 프로그램 작성*/
#include <stdio.h>

void printAge(int);
void printHeight(double);           // **함수 선언부 꼭 써줘야 하고, **매개변수 있을 경우엔 꼭 선언부에서 ()안에 자료형 써야 함!!!**

int main()
{
	char name[20] = "황지원";
	int age = 21;
	double height = 160.1;

	printf("성명 : %s\n", name);
	printAge(age);
	printHeight(height);           // 함수 호출부. 매개변수를 전달해줌. 
	
	return 0;                      //반환값 0 : 정상종료 의미함.
}

void printAge(int age1)           //함수 정의부
{
	printf("나이 : %d\n", age1);

	return;                            // void는 return값이 없다.
}
void printHeight(double height1)
{
	printf("나이 : %0.1f\n", height1); // double형 변수 : %f, %와 f 사이에 0.1은 소수점 뒷자리 한자리까지만 표시한다는 것.

	return;
}