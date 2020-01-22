/*작성자 : 황지원
1월 4일 HW23 : 반복적으로 두 개의 정수를 입력 받아 두 수의 차 출력 프로그램 작성*/ /*정수가 아닌 값 입력할 경우 반복 종료*/

#include <stdio.h>
#pragma warning (disable : 4996) // scanf_s 안써도 됨.

int main()
{
	int a, b, M, m;
	while (1)
	{
		printf("#두개의 정수를 입력하세요 : ");

		if (scanf("%d %d", &a, &b) != 2) // 하나라도 정수값 제대로 입력 안받았을 때. 정상적으로 입력받았다면 그냥 printf로 출력.
		{
			break; //  while 전체 빠져나가서 return 0; 반복 종료.
		}
		
		M = a >= b ? a : b; 
		m = a >= b ? b : a; // 삼항연산자. 두 정수가 같을 경우도 고려해야 함. 큰 값 작은 값 구분.
		printf("%d - %d = %d\n",M,m,M-m);
	}
	
	return 0;
}