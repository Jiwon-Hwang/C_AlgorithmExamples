/*작성자 : 황지원
1월 5일 HW34 : 수도요금 계산 프로그램 작성*/

#include <stdio.h>
#pragma warning (disable : 4996) // scanf_s 안써도 됨.

//함수 선언부
int input_code();
int input_usage();
int calc(int);
void output(int,int,int);
void myflush();

int main()
{
	
	int code, unit_fee; // 사용자 코드 반환값.
	
	while (1) {
		printf("* 사용자 코드를 입력하시오(1:가정용 / 2:상업용 / 3:공업용) : ");
		code = input_code();
		if(code == 1 || code == 2 || code ==3 ){
			switch (code)
			{
				case 1:unit_fee = 50; break;
				case 2:unit_fee = 45; break;
				default:unit_fee = 30; break;
			}
			break;
		}
		printf("잘못된 값을 입력하셨습니다. 다시 입력해 주세요. \n");
	}
	
	int usage = input_usage();
	int fee = usage*unit_fee;
	int total = calc(fee);

	output(code,usage,total);

	return 0;
}

int input_code()
{
	int i_c; 
	scanf("%d", &i_c);
	return i_c;
}

int input_usage()
{
	int i_u; 
	while (1)
	{
		printf("* 사용량을 입력하시오(ton단위) : ");

		if (scanf("%d", &i_u)!=1) // 만약 여기서 a와 같이 정수가 아닌 값을 입력했을 때, %d와 타입이 맞지 않으므로 %d가 입력 버퍼로 부터 입력된 a값을 추출해 오지 못함(입력버퍼에는 a와 \n가 입력되어있음.)
		{
			printf("잘못된 값을 입력하셨습니다. 다시 입력해 주세요.\n");
			myflush();
			//따라서 재입력 받기 전에 입력버퍼에 남아있는 a와 개행문자를 지워줘야 무한루프에 빠지지 않음. 계속 a가 남아 있고 지워지지 않아서 무한루프 돌았던 것. 따라서 myflush와 getchar써야 함.
			//getchar는 그냥 하나 뽑아 와서 반환해 주는 것. 따라서 myflush에서 비우고 와야 함.
		}
		else 
		{
			break;
		}
		
	}
	return i_u;
}

int calc(int c_fee)
{
	int c_total = (int)(c_fee*1.05);

	return c_total;
}

void output(int o_code,int c_usage,int c_total)
{
	switch(o_code)
	{
	case 1: printf("# 사용자코드 : %d(가정용)\n# 사용량 : %d ton\n# 총수도요금 : %d원\n", o_code, c_usage, c_total); break;
	case 2: printf("# 사용자코드 : %d(상업용)\n# 사용량 : %d ton\n# 총수도요금 : %d원\n", o_code, c_usage, c_total); break;
	default: printf("# 사용자코드 : %d(공업용)\n# 사용량 : %d ton\n# 총수도요금 : %d원\n", o_code, c_usage, c_total); break;
	}
	
	return;
}

void myflush()
{
	while (1)
	{
		if(getchar()=='\n') // 개행문자가 입력버퍼인 stdin 맨 마지막에 남아 있을 것이므로, getchar가 개행문자 뽑아오기 전까지는 계속 전에 남아있는 문자들 뽑아옴. 개행문자까지 뽑아오면 끝.
		{
			break;
		}
	}
	return;
}