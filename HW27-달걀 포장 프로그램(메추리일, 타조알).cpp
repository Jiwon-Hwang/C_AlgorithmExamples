/*작성자 : 황지원
1월 8일 HW27 : 달걀 포장 프로그램 작성*/

#include <stdio.h>
#pragma warning (disable : 4996) // scanf_s 안써도 됨.

//함수 선언부
int user_ip();

int main()
{
	int count = 0;
	int res;
	while (count < 10) {
		res = user_ip();
		if (res < 150) {
			printf("* 메추리알 가지고 장난하지 마시오~^^ \n");
		}
		else if (res > 500) {
			printf("* 타조알 가지고 장난하지 마시오~^^ \n");
		}
		else {
			count++;
			printf("* 현재 달걀 수 : %d \n", count);
		}
	}

	printf("\n*** 달걀 포장이 끝났습니다. \n");
	return 0;
}

int user_ip() {
	int res;
	printf("# 계란의 무게를 입력하세요(단위 : g) : ");
	scanf_s("%d", &res);
	return res;
}