/*작성자 : 황지원
1월 5일 HW36 : 피보나치 수열 구하기 프로그램 작성*/

#include <stdio.h>
#pragma warning (disable : 4996) // scanf_s 안써도 됨.

//함수 선언부
int ip_num();
int cal_fibbo(int num);

int main()
{
	int user_ip, ans;
	user_ip = ip_num();
	ans = cal_fibbo(user_ip);

	printf("%d번째 수열의 값은 %d 입니다.\n", user_ip, ans);
	return 0;
}

int ip_num() {
	int ip;
	printf("피보나치 수열의 항수를 입력하시오 : ");
	scanf_s("%d", &ip);
	return ip;
}

int cal_fibbo(int num) {
	if (num == 1)
		return 1;
	else if (num == 2)
		return 1;
	else {
		return cal_fibbo(num - 2) + cal_fibbo(num - 1);
	}
}