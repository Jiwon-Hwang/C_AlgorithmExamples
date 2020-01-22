/*작성자 : 황지원
1월 5일 HW38 : 정해진 금액으로 물건 구입하기 프로그램 작성*/

#include <stdio.h>
#pragma warning (disable : 4996) // scanf_s 안써도 됨.

int main()
{
	int money;
	printf("현재 당신의 소유 금액 입력 : ");
	scanf("%d", &money);

	for (int i=1;money-500*i>=0;i++)
	{
		for (int j=1;money-500*i-700*j>=0;j++)
		{
			for (int k=1;money-500*i-700*j-400*k>=0;k++)
			{
				if (money-500*i-700*j-400*k==0) // 남은 돈이 없을 경우에만 저렇게 출력!
				{
					printf("크림빵(%d개), 새우깡(%d봉지), 콜라(%d병)\n",i,j,k); // i,j,k 각각 크림빵, 새우깡, 콜라 개수.
				}
			}
		}
	}

	printf("어떻게 구입하시겠습니까?\n");
	return 0;
}

