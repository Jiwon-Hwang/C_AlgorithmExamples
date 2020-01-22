/*작성자 : 황지원
1월 9일 HW32 : 누승 함수 프로그램 작성*/      //반복은 안해도 됨. // 0의 0승도 0, 어떤 수의 0승은 모두 1, 밑은 항상 양수값으로 제한, 양수승만 구하는 것으로.

#include <stdio.h>
#pragma warning (disable : 4996) // scanf_s 안써도 됨.

//함수 선언부
unsigned int inputUInt(char*); // 문자열 전달 받아서 입력받은 양의 정수 반환. // 배열은 포인터로 받음...?
double inputDouble(char*);     // 문자열 전달 받아서 입력받은 양의 실수 반환. // 배열은 포인터로 받음...?
int ipow(int, int);
double fpow(double, int);
void myflush();

int main()
{
	char UInt_str1[40] = "*양의 정수 밑을 입력 하시오 : ";
	int num = inputUInt(UInt_str1); // 윗 문장 출력 후 양의 정수 밑 받아옴.
	char UInt_str2[30] = "*양의 승을 입력 하시오 : ";
	int N = inputUInt(UInt_str2); // 윗 문장 출력 후 양의 승 받아옴.
	int result = ipow(num, N); // 밑과 승 전달해줌.
	printf("%d의 %d승은 %d입니다.\n\n", num, N, result);
	
	char Double_str1[40] = "*양의 실수 밑을 입력 하시오 : ";
	double fnum = inputDouble(Double_str1);
	char Double_str2[30] = "*양의 승을 입력 하시오 : ";       // ***여기서 조심할 점! fN은 int타입 이므로 inputDouble이 아니라 inputUInt로 보내야 함!
	int fN = inputUInt(Double_str2);                          // ***따라서 intUInt로 보냄!!! intUInt의 반환값도 unsigned int 형!!
	double fresult = fpow(fnum, fN);
	printf("%0.2lf의 %d승은 %0.3lf입니다. \n",fnum, fN, fresult);

	return 0;
}

unsigned int inputUInt(char *iU_string) // 밑과 승 입력하라는 두 문자열 각각 전달 받아서 입력받은 양의 정수 반환. //배열은 포인터로 받음....?
{
	printf("%s", iU_string);
	int n;                  // num에는 정수 밑, 정수 승(밑이 정수일때와 밑이 실수일때 모두) 즉, 3개의 다른 값이 각각 입력될 것.
	scanf("%d", &n);
	while (1)
	{
		if(n>0)
		{
			break;
		}
		else
		{
			myflush(); // 밑이 양수가 아닌 경우엔 scanf()로 다시 입력 받아야 하기 때문에 입력버퍼 stdin에 남아있는 잘못된 값 비우고 다시 받기!
			printf("양의 정수 값으로 다시 입력하세요.\n");
			scanf("%d",&n);
		}
	}
	
	return n;
}

int ipow(int i_num, int i_N)
{
	int i_result = 1;
	for (int i = 0; i < i_N; i++)
	{
		i_result *= i_num;
	}

	return i_result;
}

double inputDouble(char *iD_string)     // 문자열 전달 받아서 입력받은 양의 실수 반환.
{
	printf("%s", iD_string);
	double fn;                  // num에는 정수 밑, 정수 승(밑이 정수일때와 밑이 실수일때 모두) 즉, 3개의 다른 값이 각각 입력될 것.
	scanf("%lf", &fn);
	while (1)
	{
		if (fn > 0)
		{
			break;
		}
		else
		{
			myflush(); // 밑이 양수가 아닌 경우엔 scanf()로 다시 입력 받아야 하기 때문에 입력버퍼 stdin에 남아있는 잘못된 값 비우고 다시 받기!
			printf("양의 실수 값으로 다시 입력하세요.\n");
			scanf("%d", &fn);
		}
	}

	return fn;
}

double fpow(double f_num, int f_N)
{
	double f_result = 1.0;
	for (int i = 0; i < f_N; i++)
	{
		f_result *= f_num;
	}

	return f_result;
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