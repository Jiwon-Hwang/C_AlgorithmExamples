/*작성자 : 황지원
1월 11일 HW47 : 최솟값, 최댓값 찾기 프로그램 작성*/

#include <stdio.h>
#pragma warning (disable : 4996) // scanf_s 안써도 됨.

//함수 선언부
void input(double *);
double max(double *); // 포인터형 변수 - 주소값(배열) 받음
double min(double *); // 포인터형 변수 - 주소값(배열) 받음
void output(double, double);
void myflush();

int main()
{
	double ary[6];
	input(ary); // 배열명은 곧 그 배열의 주소값.
	double Max = max(ary);
	double Min = min(ary);
	output(Max, Min);
	
	return 0;
}

void input(double *i_ary) // 문자 입력 시 재입력 요구.
{
	for (int i = 0; i<5; i++)
	{
		while (1)
		{
			printf("%d번 방 값 : ", i);
			if (scanf("%lf", &i_ary[i]) != 1)
			{
				myflush();
				printf("문자를 입력하셨습니다. 재입력 하십시오.\n");
			}
			else
			{
				break;
			}
		}
	}

	return; // 따로 반환 안해도 포인터를 이용했으므로 배열에 값 입력 받아져 있음.
}

double max(double *max_ary)
{
	double M = max_ary[0]; // 일단 첫번째 배열요소의 값이 가장 크다고 가정.
	for (int i = 1; i < 5; i++)
	{
		M = M >= max_ary[i] ? M : max_ary[i]; // max_ary[0]값은 비교할 필요 없음.
	}
	return M;
}

double min(double *min_ary)
{
	double m = min_ary[0]; // 일단 첫번째 배열요소의 값이 가장 작다고 가정.
	for (int i = 1; i < 5; i++)
	{
		m = m <= min_ary[i] ? m : min_ary[i]; // max_ary[0]값은 비교할 필요 없음.
	}

	return m;
}

void output(double o_Max, double o_Min)
{
	printf("가장 큰 값 : %.2lf\n", o_Max);
	printf("가장 작은 값 : %.2lf\n", o_Min);

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