/*작성자 : 황지원
1월 5일 HW41 : 삼각 알파벳 출력 프로그램 작성*/

#include <stdio.h>
#pragma warning (disable : 4996) // scanf_s 안써도 됨.

int main()
{
	int i, j;
	char ch;
	printf("* 영문자 대문자 입력('A'~'Z') : ");
	scanf("%c", &ch);
	while (1)
	{
		if (ch >= 65 && ch <= 90) // 영문자 대문자 이외의 문자 예외 처리 - A~Z라면. (A~Z의 아스키 코드 값 : 65~90)
		{
			break;
		}
		else
		{
			return 0;
		}
	}

	for (i = 0; ch - i >= 65; i++) // 바깥 for 문 : 몇 줄 출력할지.. F면 FEDCBA 6줄 출력
	{
		for (j = 0; i - j >= 0; j++) // 안쪽 for문 : 각 줄에서 어디까지 출력할지. 첫번째 줄은 1개, 두번째 줄은 2개...
		{
			printf("%c", ch - j); // j는 0부터 시작하므로 j빼줌. j가 커짐으로써 ch-j가 작아짐. 그러면서 입력한 영문자 이하의 알파벳들이 이어서 출력됨.
		}
		printf("\n"); // 각 줄 모두 출력한 후 안쪽 for문 나가면서 한줄 개행.
	}

	return 0;
}