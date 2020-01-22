/*작성자 : 황지원
1월 8일 HW28 : 문자 종류별 카운트 프로그램 작성*/

#include <stdio.h>
#pragma warning (disable : 4996) // scanf_s 안써도 됨.

int main()
{
	      
	printf("# 영문 문장을 입력 하시오 : \n"); // getchar() : ctrl+z 누르면 getchar가 입력 실패하므로 이를 의미하는 -1 반환. 이 때 입력 종료. // 우선순위 : 1.<=,>= , 2. &&, 3. || 

	int count_abc=0, count_123=0, count_empty=0, count_etc=0;
	char ch=getchar(); // 우선 처음에 입력 받아서 while문에 갖고 들어가서 조건 확인해야함. 

	while (ch!=EOF) // ctrl+z 입력하지 않았을 때. 이렇게 하면 getchar() 계속 하나씩 꺼내와서 범위 비교 할때마다 하나 비교하고 버려져서 없어지는 문제 해결! 한문자씩 꺼내올때마다 범위한번체크하고 나감.
	{
		if (ch >= 65 && ch <= 90 || ch >= 97 && ch <= 122) //A~Z, a~z의 아스키코드 값. //*** ch>='A' && ch<='Z' 이렇게 하는게 더 나음!!!!
		{
			++count_abc;
		}
		else if(ch >= 48 && ch <= 57) // 0~9의 아스키코드 값. //*** ch>='0' && ch<='9' 이렇게 하는게 더 나음!!!!
		{
			++count_123;
		}
		else if (ch=='\n' || ch=='\t' || ch==32) // space의 아스키코드 값 : 32
		{
			++count_empty;
		}
		else if (ch!=32 && ch<48 || ch>57 && ch<65 || ch>90 && ch<97 || ch>122) // 영문자, 숫자, 공백기호 등을 모두 제외한 아스키코드 범위.
		{
			++count_etc;
		}
		else // EOF : 매크로 상수. 전처리 후 값이 -1로 바뀜. // getchar():eco하므로 화면에 나타남.
		{
			break;
		} 
		// 입력 종료.
		ch = getchar(); // 다음에 조건 확인해볼 문자 갖고 오기. 갖고 온 다음에 조건으로 올라가서 확인. -1인지 아닌지.
	}

	printf("* 영문자 대소문자 개수 : %d개\n", count_abc);
	printf("* 숫자문자 개수 : %d개\n", count_123);
	printf("* 여백문자(space, tab, enter) 개수 : %d개\n", count_empty);
	printf("* 그 외 기타문자 개수 : %d개\n", count_etc);

	return 0;
}

