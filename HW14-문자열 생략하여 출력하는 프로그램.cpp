/*작성자 : 황지원
1월 3일 HW14 : 문자열 생략하여 출력하는 프로그램 작성*/

#include <stdio.h>
#include <string.h> // 배열 사이즈 알려주는 strlen 함수 쓰기 위해서 필요한 헤더파일
#pragma warning (disable : 4996) // scanf_s 안써도 됨.

int main()
{
	char str[20];

	printf("* 문자열 입력 : ");
	scanf("%s", &str);

	printf("[");

	str[strlen(str) / 2] = '\0'; // 널문자 앞까지의 문자열 길이 저장.//절반에 해당하는 곳까지는 널문자로 대체. 널문자는 바이트 차지 안해서 출력 안됨.공백도x.
	printf("%s", str); //절반만큼 널문자 들어가 있는데 보이진 않음. 그다음에 문자열 반만큼 출력.

	printf("...]\n");

	return 0;
}
