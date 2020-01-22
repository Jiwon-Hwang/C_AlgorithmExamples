/*작성자 : 황지원
1월 3일 HW12 : 이름을 영문으로 입력 받아 왼쪽, 오른쪽 정렬 프로그램 작성*/

#include <stdio.h>
#include <string.h> // 배열 사이즈 알려주는 strlen 함수 쓰기 위해서 필요한 헤더파일
#pragma warning (disable : 4996) // scanf_s 안써도 됨.

int main()
{
	char name[21];
	printf("이름을 입력하시오 : ");
	scanf("%s",name);   // name 자체로 주소값 의미함. 배열의 이름은 첫번째 방 주소와 동일.
	//배열 입력 받을 때, scanf_s로 받으려면 name뒤에 배열 크기도 한번 더 써줘야함..sizeof(name) 이렇게! 따라서 scanf쓰고 위에 워닝 코드 쓰기.

	printf("\"%s\"\n",name); // " 하나 출력 받으려면 \"(역슬레시 ") 로 써야함.

	int len;
	len = strlen(name); // 맨마지막 널문자 전까지(개행문자 포함해서) 배열 사이즈 알려줌 : [21] 이거 말고, 실제 입력받은 문자열 길이)

	printf("\"");
	while (21 - (len-1) > 0)
	{
		printf(" ");
		len++;
	}
	printf("%s\"\n", name);//오른쪽 정렬. while문에서 빠져나오면 공백 오른쪽에 이어서 이름 출력후 한줄 띄기.

	printf("\"%s", name);// 왼쪽 정렬. 공백 전에 이름 먼저 출력 후 나머지는 공백으로 이어서 출력.
	len = strlen(name);  // 위에서 len++해서 값 바꼈으니까 다시 입력받았던 문자열의 길이 대입.(초기화)
	while (21 - (len - 1) > 0)
	{
		printf(" ");
		len++;
	}
	printf("\"\n");
	
	return 0;
}