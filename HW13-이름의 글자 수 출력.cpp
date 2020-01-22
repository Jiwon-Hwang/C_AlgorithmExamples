/*작성자 : 황지원
1월 3일 HW13 : 이름의 글자 수 출력 프로그램 작성*/

#include <stdio.h>
#include <string.h> // 배열 사이즈 알려주는 strlen 함수 쓰기 위해서 필요한 헤더파일
#pragma warning (disable : 4996) // scanf_s 안써도 됨.

int main()
{
	char L_name[20]; // last name : 성
	char F_name[20]; // first name : 이름

	printf("#성을 입력하시오 : ");
	scanf("%s", L_name);
	printf("#이름을 입력하시오 : ");
	scanf("%s", F_name);
	
	int len_L;              
	len_L = strlen(L_name); // strlen함수는 널문자 전까지 문자열의 길이를 출력. //개행문자는 포함x?
	int len_F;
	len_F = strlen(F_name);


	printf("%s %s\n", L_name, F_name);
	while (len_L-1>0)
	{
		printf(" ");
		len_L--;
	}
	len_L = strlen(L_name);
	printf("%d ",len_L); // 성의 문자열 길이 값(ex.4) 출력 후 한칸 띄기! 이름 나오기 전에 한칸 띄어져 있으니까..

	while (len_F - 1 > 0)
	{
		printf(" ");
		len_F--;
	}
	len_F = strlen(F_name);
	printf("%d\n",len_F);

	return 0; 
}