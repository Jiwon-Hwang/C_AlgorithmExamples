/*작성자 : 황지원
1월 8일 HW29 : 고집수 프로그램 작성*/

#include <stdio.h>
#pragma warning (disable : 4996) // scanf_s 안써도 됨.

//함수 선언부
int inputUInt();
void output(int, int, int); // 여기서 고집수가 gozip인 자연수들 다 출력하고 끝내면 됨. return 값 필요 없음.
int transNumber(int); // *** 범위 내 모든 자연수들의 고집수들을 구해서 반환하는 함수. *** output함수로 고집수 넘겨서 gozip과 같은지 확인할 것.
void myflush();

int main()
{
	int start, end, gozip;
	printf("100<=P1<P2<=10000\n");
	printf("시작 값(P1) : ");
	start = inputUInt();
	printf("끝 값(P2) : ");
	end = inputUInt();
	printf("고집수(1<=N<=10) : ");
	gozip = inputUInt();

	printf("고집수가 %d인 숫자 출력\n", gozip);
	output(start, end, gozip); // *** 알고리즘 : 우선 output함수로 가서 for문 돌리고 start~end범위내 모든 자연수 체크하면서 고집수==gozip인거는 출력(output). 각 수의 고집수는 transNumber함수에서 구하기.

	return 0;
}

int inputUInt() // 양의 정수만 입력 받아 return. 음수와 문자에 대한 입력 예외 처리 필수!
{
	int input_num;
	int res;
	res = scanf("%d", &input_num); // 밑의 else if에서 다시 scanf()의 반환값 쓰려고 다시 입력받으면 안되므로 미리 담아둠.
	while (1)
	{
		if (input_num <= 0) // 0이나 음수 입력 예외 처리 - 걍 재입력 받으면 됨.
		{
			printf("음수를 입력하셨습니다. 양의 정수를 재입력하세요 : ");
			scanf("%d", &input_num);
		}
		else if (res != 1) // 문자 입력 예외 처리 - myflush로 비워줘야 함. %d가 문자는 못가져가서 입력버퍼에 남아있음.
		{
			myflush();
			printf("문자를 입력하셨습니다. 양의 정수를 재입력 하세요 : ");
			scanf("%d", &input_num);
		}
		else // 정상적으로 양의 정수 입력 받았을 때(input_num>0))
		{
			break;
		}
	}

	return input_num;
}

void output(int o_start, int o_end, int o_gozip) // 고잡수에 해당하는 양의 정수들 모두 출력하는 함수.
{
	int count = 0; // 고집수에 해당하는 양의 정수의 개수 count.
	for (int i = o_start; i <= o_end; i++)
	{
		if (transNumber(i) == o_gozip)
		{
			printf("%d\n", i);
			++count;
		}
		else
		{
			;
		}
	}

	printf("총 개수 : %d개\n", count);

	return;
}


int transNumber(int t_num) // ***이 함수 중요!!! 범위 내의 모든 양의 정수 t_num을 각 자릿수로 분할해서 곱한 후 각각의 고집수 return.
{
	int trans_gozip = 0;
	int a, b, c, d, e, mul;

	while (1)
	{
		a = 1, b = 1, c = 1, d = 1, e = 1;

		if (t_num == 10000)
		{
			mul = 0;
			trans_gozip++;
		}
		else if (t_num >= 1000)
		{
			b = t_num / 1000;
			c = (t_num % 1000) / 100;
			d = ((t_num % 1000) % 100) / 10;
			e = ((t_num % 1000) % 100) % 10;

			mul = b*c*d*e;
			trans_gozip++;
		}
		else if (t_num >= 100)
		{
			c = t_num / 100;
			d = (t_num % 100) / 10;
			e = (t_num % 100) % 10;

			mul = c*d*e;
			trans_gozip++;
		}
		else if (t_num >= 10)
		{
			d = t_num / 10;
			e = (t_num % 10);

			mul = d*e;
			trans_gozip++;
		}
		else
		{
			break;
		}
		t_num = mul;
	}

	return trans_gozip;
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