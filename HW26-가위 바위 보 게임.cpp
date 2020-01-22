/*작성자 : 황지원
1월 8일 HW26 : 가위 바위 보 프로그램 작성*/

#include <stdio.h>
#pragma warning (disable : 4996) // scanf_s 안써도 됨.
#include <stdlib.h> // rand(), srand() 함수를 사용하기 위해서 씀.
#include <time.h> // tinme()함수를 사용하기 위해서 씀.

//함수 선언부
int random(int);
int user_ip();
void output(int, int, int, int, int);
int random(int);

int main()
{
	int rand_num, user_num, win, lose, draw;
	srand((unsigned int)time(NULL));
	rand_num = random(3);
	win = 0;
	lose = 0;
	draw = 0;
	while (lose == 0)
	{
		user_num = user_ip();
		if (user_num == rand_num)
		{
			draw++;
			if (user_num == 1)
				output(win, lose, draw, user_num, rand_num);
			else if (user_num == 2)
				output(win, lose, draw, user_num, rand_num);
			else
				output(win, lose, draw, user_num, rand_num);
		}
		else
		{
			if (user_num == 1 && rand_num == 2)
			{
				lose++;
				output(win, lose, draw, user_num, rand_num);
			}
			else if (user_num == 2 && rand_num == 1)
			{
				win++;
				output(win, lose, draw, user_num, rand_num);
			}
			else if (user_num == 1 && rand_num == 3)
			{
				win++;
				output(win, lose, draw, user_num, rand_num);
			}
			else if (user_num == 3 && rand_num == 1)
			{
				lose++;
				output(win, lose, draw, user_num, rand_num);
			}
			else if (user_num == 2 && rand_num == 3)
			{
				lose++;
				output(win, lose, draw, user_num, rand_num);
			}
			else if (user_num == 3 && rand_num == 2)
			{
				win++;
				output(win, lose, draw, user_num, rand_num);
			}
		}
	}

	return 0;
}

int user_ip()
{
	int num;
	printf("바위는 1, 가위는 2, 보는 3 중에서 하나를 선택하시오 : ");
	scanf("%d", &num);
	while (num <= 0 || num >3)
	{
		printf("바위는 1, 가위는 2, 보는 3 중에서 하나를 선택하시오 : ");
		scanf("%d", &num);
	}

	return num;
}

int random(int n)
{
	int res;
	res = rand() % n + 1;

	return res;
}

void output(int win, int lose, int draw, int user_num, int rand_num)
{
	if (user_num == rand_num)
	{
		if (user_num == 1)
			printf("당신은 가위 선택, 컴퓨터는 가위 선택 : 비겼습니다. \n");
		else if (user_num == 2)
			printf("당신은 바위 선택, 컴퓨터는 바위 선택 : 비겼습니다. \n");
		else
			printf("당신은 보 선택, 컴퓨터는 보 선택 : 비겼습니다. \n");
	}
	else
	{
		if (user_num == 1 && rand_num == 2)
		{
			printf("당신은 가위 선택, 컴퓨터는 바위 선택 : 졌습니다. \n");
		}
		else if (user_num == 2 && rand_num == 1)
		{
			printf("당신은 바위 선택, 컴퓨터는 가위 선택 : 이겼습니다. \n");
		}
		else if (user_num == 1 && rand_num == 3)
		{
			printf("당신은 가위 선택, 컴퓨터는 보 선택 : 이겼습니다. \n");
		}
		else if (user_num == 3 && rand_num == 1)
		{
			printf("당신은 가위 보, 컴퓨터는 가위 선택 : 졌습니다. \n");
		}
		else if (user_num == 2 && rand_num == 3)
		{
			printf("당신은 바위 선택, 컴퓨터는 보 선택 : 졌습니다. \n");
		}
		else if (user_num == 3 && rand_num == 2)
		{
			printf("당신은 가위 보, 컴퓨터는 바위 선택 :이겼습니다. \n");
		}

		if (lose == 1)
		{
			printf("%d 승 %d 무 \n", win, draw);
		}
	}
}