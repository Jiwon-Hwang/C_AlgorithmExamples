/*작성자 : 황지원
1월 11일 HW49 : 배열 내의 데이터를 역순으로 저장 프로그램 작성*/

#include <stdio.h>
#pragma warning (disable : 4996) // scanf_s 안써도 됨.

//함수 선언부 
void swap(double *, int);

int main()
{
	double ary[5]; // 배열 크기 [] 이렇게 정해놓지 않을 때에는 ={} 써줘야 함.
	int s = sizeof(ary) / sizeof(double); // ary배열은 각 방에 double형 상수들이 저장되었으므로.
	
	printf("임의의 숫자들을 입력하고, 엔터키를 누르세요 : ");
	for (int i = 0; i < s; i++)
	{
		scanf("%lf", &ary[i]);  // [] 있을 때는 & 써줘야 함.
	}

	printf("처음 배열에 저장된 값 : ");
	for (int a = 0; a < s; a++)
	{
		printf("%.2lf  ", ary[a]);
	}

	swap(ary, s);
	
	printf("\n바뀐 배열에 저장된 값 : ");
	for (int b = 0; b < s; b++)
	{
		printf("%.2lf  ", ary[b]);
	}
	printf("\n");

	return 0;
}

void swap(double *s_ary, int s_s) // 두 변수의 값을 비교하는게 아니라 그냥 역순으로 바꿔주는 함수.
{
	int temp;
	for (int i = 0; i < s_s / 2; i++)
	{		
		temp = s_ary[i];
		s_ary[i] = s_ary[s_s - i-1];
		s_ary[s_s - i-1] = temp;		
	}

	return;
}