/*�ۼ��� : Ȳ����
1�� 8�� HW26 : ���� ���� �� ���α׷� �ۼ�*/

#include <stdio.h>
#pragma warning (disable : 4996) // scanf_s �Ƚᵵ ��.
#include <stdlib.h> // rand(), srand() �Լ��� ����ϱ� ���ؼ� ��.
#include <time.h> // tinme()�Լ��� ����ϱ� ���ؼ� ��.

//�Լ� �����
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
	printf("������ 1, ������ 2, ���� 3 �߿��� �ϳ��� �����Ͻÿ� : ");
	scanf("%d", &num);
	while (num <= 0 || num >3)
	{
		printf("������ 1, ������ 2, ���� 3 �߿��� �ϳ��� �����Ͻÿ� : ");
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
			printf("����� ���� ����, ��ǻ�ʹ� ���� ���� : �����ϴ�. \n");
		else if (user_num == 2)
			printf("����� ���� ����, ��ǻ�ʹ� ���� ���� : �����ϴ�. \n");
		else
			printf("����� �� ����, ��ǻ�ʹ� �� ���� : �����ϴ�. \n");
	}
	else
	{
		if (user_num == 1 && rand_num == 2)
		{
			printf("����� ���� ����, ��ǻ�ʹ� ���� ���� : �����ϴ�. \n");
		}
		else if (user_num == 2 && rand_num == 1)
		{
			printf("����� ���� ����, ��ǻ�ʹ� ���� ���� : �̰���ϴ�. \n");
		}
		else if (user_num == 1 && rand_num == 3)
		{
			printf("����� ���� ����, ��ǻ�ʹ� �� ���� : �̰���ϴ�. \n");
		}
		else if (user_num == 3 && rand_num == 1)
		{
			printf("����� ���� ��, ��ǻ�ʹ� ���� ���� : �����ϴ�. \n");
		}
		else if (user_num == 2 && rand_num == 3)
		{
			printf("����� ���� ����, ��ǻ�ʹ� �� ���� : �����ϴ�. \n");
		}
		else if (user_num == 3 && rand_num == 2)
		{
			printf("����� ���� ��, ��ǻ�ʹ� ���� ���� :�̰���ϴ�. \n");
		}

		if (lose == 1)
		{
			printf("%d �� %d �� \n", win, draw);
		}
	}
}