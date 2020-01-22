/*작성자 : 황지원
1월 8일 HW25 : 숫자 맞추기 게임 프로그램 작성*/

#include <stdio.h> 
#pragma warning (disable : 4996) // scanf_s 안써도 됨.
#include <stdlib.h> // rand(), srand() 함수를 사용하기 위해서 씀.
#include <time.h> // tinme()함수를 사용하기 위해서 씀.

//함수 선언부
int random(int);
int input();
void output(int, int);
void myflush();
                        
int main()              
{
	int random_num; //난수.
	srand((unsigned int)time(NULL)); 
	// 필수 호출!! : 시간 return함. 당시의 시, 분, 초 조합함.
	// 시스템 시간을 난수 씨앗 값으로 사용해서 실행할 때 마다 다른 난수가 발생.
	// 아래 random()함수 사용전에 꼭 한번만 호출해 주어야 함.
	// 여러 번 수행시키면 프로그램의 실행 속도를 매우 저하시키는 현상이 나타남.
	
	random_num = random(100); // 1~100사이의 난수 발생.(n+1 return 했으므로)
	//여기까지 난수 발생 코드

	int i = 1;
	int a = 0, b = 100; // a 보다는 크고 b 보다는 작습니다.

	while (1) 
	{		
		int user_input = input();
		if (random_num == user_input) // 난수(=답)가 사용자 입력값이랑 같으면 탈출해서 종료.
		{
			printf("우와~ 맞았당~~~ 추카추카~~ %d번째 만에 맞추셨습니다.\n",i);
			break;
		}
		else
		{
			if (user_input<a || user_input>b)  // *** 범위 밖의 숫자 입력시 예외처리
			{
				printf("# 1~100 사이의 값을 다시 입력하세요.\n");
				continue; // *** 범위 밖의 값 입력했을 때, i값 입력 안하고 밖의 while문 조건식으로 올라가서 재확인. 
			}
			else if (user_input>random_num) // 새로 입력된 값이 답보다 크면 b에 새로입력된 값 넣어서 출력, a에는 이전 그대로 출력
			{
				b = user_input;
			}
			else // 새로 입력된 값이 답보다 작으면 a에 새로입력된 값 넣어서 출력, b에는 이전 그대로 출력
			{
				a = user_input;
			}

			output(a, b);
		}

		i++;
	}
	
	return 0;
}
int random(int n)
{
	int res;
	res = rand() % n+1; // 1~n-1+1(100)사이의 수 중 난수 발생.
	
	return res;
}

int input() // 예외처리도 해줘야 함. 0~100 밖의 값 입력시 다시 입력하게끔.
{
	int i_userInput;
	while (1)
	{
		printf("# 숫자를 입력하시오 : ");

		if (scanf("%d", &i_userInput) != 1)
		{
			printf("잘못된 값을 입력하셨습니다.  0~100 사이의 값을 다시 입력해 주세요.\n");
			myflush();
		}
		else
		{
			break;
		}
	}
	
	return i_userInput;
}

void output(int o_a, int o_b)
{
	printf("%d 보다는 크고 %d 보다는 작습니다.\n", o_a, o_b);

	return;
}

void myflush()
{
	while (1)
	{
		if (getchar() == '\n') // 개행문자가 입력버퍼인 stdin 맨 마지막에 남아 있을 것이므로, getchar가 개행문자 뽑아오기 전까지는 계속 전에 남아있는 문자들 뽑아옴. 개행문자까지 뽑아오면 끝.
		{
			break;
		}
	}
	return;
}