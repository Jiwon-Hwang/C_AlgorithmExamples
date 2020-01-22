/*작성자 : 황지원
1월 5일 HW17 : 성명, 키, 성별을 입력 받아 실행 예와 같이 수행되는 프로그램 작성*/

#include <stdio.h>
#pragma warning (disable : 4996) // scanf_s 안써도 됨.
#include <string.h> // strlen 함수 쓰기 위해.

int main()
{
	printf("# 성명 입력 : ");
	char name[20];
	fgets(name, 20, stdin);  // 20칸보다 덜 입력했을 때 문제 생김. &c가 \n을 문자로 인식해서 %c가 가져와서 출력해버림.
	//여기에 getchar()쓰면 안됨. 그다음에 printf(키입력)이 출력이 안됨... //Q.왜 안되는지..? getchar()와 scanf() 공부!!

	int len;
	len = strlen(name); // 입력된 성명 길이 알려줌.
	name[len - 1] = '\0'; // 배열 맨 마지막에는 원래 \n이랑 \0 두개까지 입력되어 있는데 마지막에서 두번째에 있는 \n에 널문자 넣어 줌으로써 개행문자 %c 가 못가져가게 함.
	

	//cf. strlen 함수 : 맨마지막 개행문자(\n)까지 배열 길이에 포함해서 세문자 입력하면 len에 4 입력됨. 따라서 개행문자의 방번호 : name[len-1]!!

	printf("# 키 입력(cm단위) : ");
	double height;
	scanf("%lf", &height);

	getchar(); 
	// ****중요****
	//여기에 getchar써야지 %c는 위에 버퍼에 남아있던 개행문자를 못받아옴. 직전에 getchar가 개행문자(\n) 갖다 버렸기 때문. 
	//여기서 getchar()만 빼면 출력창 맨마지막줄에 # 성별입력 : 계속하려면 아무키나 누르십시오... 이거뜸!!!!
	//따라서 getchar()한번 더 써줌으로써 키입력하고 scanf가 받아온 \n을 없애주어 개행문자가 남아있지 않게 되기 때문에 다음 scanf시 %c가 남아있던 \n를 문자로 인식해 성별 입력도 못받고 끝나버리는 일이 없음!
	

	printf("# 성별입력(M/F) : ");
	char gender=0;
	scanf("%c", &gender);


	if (gender == 'M' || gender == 'm')
	{
		printf("%s씨의 키는 %.2lfcm이고 남성입니다.\n", name, height);
	}
	if(gender == 'F' || gender == 'm')
	{
		printf("%s씨의 키는 %.2lfcm이고 여성입니다.\n", name, height);
	}

	return 0;
}

/*if (gender[0] == 'M')
{
	gender = '남성';
}
else
{
	gender = '여성';
}
*/  
//이런식으로는 못씀! 한글을 문자열으로 받아들이려고 하면 식이 수정할 수 있는 lvalue여야 합니다. 라고 뜸.