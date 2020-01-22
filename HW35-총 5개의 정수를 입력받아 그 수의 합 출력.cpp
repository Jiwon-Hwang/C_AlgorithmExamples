/*작성자 : 황지원
1월 5일 HW35 : 총 5개의 정수를 입력 받아 그 수의 합 출력 프로그램 작성*/

#include <stdio.h>
#pragma warning (disable : 4996) // scanf_s 안써도 됨.

int main()
{
	int num[5];//5개의 정수를 저장할 수 있는 배열을 선언
	int res = 0;//res라는 결과물을 출력하는 변수를 초기화

	for (int i = 0; i < 5; i++) {
		printf("0보다 큰수를 입력하시오(%d번째) : ",i+1);
		scanf("%d", &num[i]);
		if (num[i] <= 0) {
			//num값이 0보다 같거나 작을때는 더해진 i를 하나 줄인 다음에 continue로 해당 번째 반복문을 멈춤.
			i--;
			continue;
		}
		res += num[i]; // 저장된 배열의 i번째 방을 res라는 변수에 더함
	}


	printf("입력된 값의 총 합 : %d\n", res);
	return 0;
}