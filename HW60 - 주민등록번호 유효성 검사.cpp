/*작성자 : 황지원
1월 18일 HW60 : 주민등록번호 유효성 검사 프로그램 작성*/

#include <stdio.h>
#pragma warning (disable : 4996) // scanf_s 안써도 됨.
#include<string.h>
#include<stdlib.h>
#include<memory.h>
#define TRUE 1
#define FALSE 0
#define RESIDENT_NUMBER_LENGTH  13 /* 주민등록번호 길이*/
int availability_check(char *resident_number);
int length_character_check(char *resident_number);
int date_check(char *resident_number);
int gender_check(char *resident_number);
int identification_check(char *resident_number);
int year_check(int year);

int main()
{
	/* 테스트할 주민등록번호 저장 배열*/
	char resident_number[][20] = { "0402291000008", "870401102321", "00031541949179",
		"0003154194917", "801203#201122", "7804155328845", "7804150328840",
		"9612241068382", "9902292194322", "0230174326176", "8811391042219",
		"8100122042213", "8112002042213", "9210101069415", "0802294012345",
		"8806311069417","8807311069418"
	};
	int i, count;
	/* 검사할 주민등록번호의 개수 계산*/
	count = sizeof(resident_number) / sizeof(resident_number[0]);
	for (i = 0; i<count; i++) /* 주민등록번호 유효성 검사를 반복적으로 수행 함*/
	{
		if (availability_check(resident_number[i]) == TRUE)
		{
			printf("(+) 주민번호%s는(은) 유효한 번호입니다.\n", resident_number[i]);
		}
		else
		{
			printf("(-) 주민번호%s는(은) 유효하지 않은 번호입니다.\n", resident_number[i]);
		}
	}
	return 0;
}
/*----------------------------------------------------------------
availability_check()함수: 주민등록번호 유효성 검사 함수
전달인자: 유효성 검사할 주민등록번호(문자열)
리턴값: 유효하면TRUE, 유효하지 않으면FALSE 리턴
------------------------------------------------------------------*/
int availability_check(char *resident_number)
{
	if (length_character_check(resident_number)) { /* 길이 및 숫자문자 유효성검사*/        //*** == TRUE 안해줘도 됨.
		if (date_check(resident_number)) {  /* 날짜검사*/
			if (identification_check(resident_number)) {  /* 인식자 오류체크*/
				return TRUE;
			}
		}
	}
	return FALSE;
}
/*-------------------------------------------------------------------------
length_character_check()함수: 주민등록번호 길이 및 문자 유효성검사 함수
전달인자: 검사할 주민등록번호(문자열)
리턴값: 주민등록번호의 길이가 맞고 숫자문자로만 구성되어 있으면TRUE,
길이가 짧거나 길고, 숫자 문자가 아닌 문자가 섞여 있으면FALSE 리턴
--------------------------------------------------------------------------*/
int length_character_check(char *resident_number)
{
	int len;
	len = sizeof(resident_number) / sizeof(char); // 문자열 : 한 문자당(숫자당) 1바이트씩 차지. 따라서 len은 주민등록번호 길이 알려줌.
	int i, count = 0; // count는 숫자 상수의 개수를 세는 변수. 0~9가 아닌 문자 같은거면 카운트 되지 않음.
	for (i = 0; i < len; i++)
	{
		if (resident_number[i] >= '0' && resident_number[i] <= '9') //### 여기서 '0' 아님??? char형 배열 안에는 char형 문자 상수가 들어 있으므로..?
		{
			++count;
		}
		else
		{
			;
		}
	}
	if (len == RESIDENT_NUMBER_LENGTH && count == RESIDENT_NUMBER_LENGTH)
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}

}
/*----------------------------------------------------------------
date_check()함수: 첫6자리(연,월,일)의 유효성 검사 함수   // 6자리 중 처음 두자리인 년도는 year_check함수로 넘기기. 월에 따라 일 수가 달라짐. && 1월에서 12월까지만 존재해야함.
전달인자: 유효성 검사할 주민등록번호(문자열)
리턴값: 유효한 날짜이면TRUE, 유효하지 않은 날짜이면FALSE 리턴
------------------------------------------------------------------*/
int date_check(char *resident_number)                             // ***주의*** month, day에 숫자값 넣어야하는데, resident[2]이런건 문자상수임!1이라도 '1' 이렇게 된것! 1은 아스키..!
{
	int year, month, day;
	if (resident_number[6] == '1' || resident_number[6] == '2')
	{
		year = 1900 + resident_number[0] * 10 + resident_number[1]; // ### 여기서 48 빼줘야댐..?안빼줘야댐?? char형인데..? 아님 정수승계?(###일단 -48 지운 코드)
	}
	else
	{
		year = 2000 + resident_number[0] * 10 + resident_number[1];
	}

	month = resident_number[2] * 10 + resident_number[3]; // ***따라서 만약 12월이면 1*10+2 가 아니라 '1'의 아스키 코드 값인 49*10+50 이렇게 되는거다!
	day = resident_number[4] * 10 + resident_number[5];
	if (month >= 1 && month <= 12)
	{
		if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
		{
			if (day <= 31)
			{
				return TRUE;
			}                                          // ***Q. 근데 char형 변수 간의 연산 후 int형 변수인 month, day에 담으니까 정수승계법칙에 의해 가능...?!(48빼고 해보기)
			else
			{
				return FALSE;
			}
		}
		else if (month == 2) //윤년인 해에는 2월 29일이 존재함.
		{
			if (year_check(year)) // 윤, 평년 검사 함수. 1(윤년, true).
			{
				if (day <= 29)
				{
					return TRUE;
				}
				else
				{
					return FALSE;
				}
			}
			else // 0(평년, false).
			{
				if (day <= 28)
				{
					return TRUE;
				}
				else
				{
					return FALSE;
				}
			}
		}
		else // 한달이 총 30일인 나머지 달들.( 4,6,9,11월)
		{
			if (day <= 30)
			{
				return TRUE;
			}
			else
			{
				return FALSE;
			}
		}
	}
}
/*----------------------------------------------------------------------
gender_check()함수: 7번째 자리의 성별식별번호 유효성 검사함수
전달인자: 유효성 검사할 주민등록번호(문자열)
리턴값: 성별식별번호가'1'~'4'이면TRUE, 그 외 숫자 문자이면FALSE 리턴
-----------------------------------------------------------------------*/
int gender_check(char *resident_number)
{
	if (resident_number[6] >= '1' && resident_number[6] <= '4') // *** 여기서 그냥 1에서 4 사이라고 하면 안됨!! 그냥 1과 4는 진짜 값이 아니라 아스키 코드 값임.
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
}
/*------------------------------------------------------------------------
identification_check()함수: 주민등록번호 끝자리(인식자) 유효성 검사 함수
전달인자: 유효성 검사할 주민등록번호(문자열)
리턴값: 유효한 인식자이면TRUE, 유효하지 않은 인식자이면FALSE 리턴
-------------------------------------------------------------------------*/
int identification_check(char *resident_number)
{
	int sum = 0, identifier;
	for (int i = 0; i < RESIDENT_NUMBER_LENGTH - 1; i++) // 인식자 전까지만 다 더하기
	{
		sum += resident_number[i]; // *** 정수승계법칙?!?!?! 가능?! int = char;일때 char가 int로 강제 형변환... ### 48 안빼주는게 맞음??
	}
	identifier = sum % 10;
	if (identifier == resident_number[12])
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
}
/*----------------------------------------------------------------
year_check()함수: 년도의 윤,평년 여부 검사
전달인자: 윤,평년 검사할 년도
리턴값: 윤년이면1, 평년이면0 리턴
------------------------------------------------------------------*/
int year_check(int year)
{
	int result;

	if (year % 4 == 0)
	{
		if (year % 100 == 0)
		{
			if (year % 400 == 0)
			{
				result = 1;
			}
		}
	}
	else
	{
		result = 0;
	}

	return result;  // result : 1 or 0 //r *** return 1 or return 0; 이렇게 할 필요 없이 그냥 result에 담아서 반환하면 됨.
}
