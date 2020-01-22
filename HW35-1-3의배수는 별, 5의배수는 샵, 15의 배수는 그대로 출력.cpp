/*작성자 : 황지원
1월 5일 HW35-1 : 1~100 까지의 숫자를 출력할 때 3의 배수는 '*'로, 5의 배수는 '#'으로 출력하고, 3과 5의 공배수는 정상숫자로 출력하는 프로그램 작성*/

#include <stdio.h>
#pragma warning (disable : 4996) // scanf_s 안써도 됨.

int main()
{
	for (int i = 1; i <= 100; i++) {
		if (i % 3 == 0) {
			if (i % 15 == 0) {
				printf("%3d", i);
			}

			else {
				printf("  *"); // cf. printf("%3c",'*'); 이런식으로 필드폭 조정도 가능!!!
			}
		}

		else if (i % 5 == 0) {
			if (i % 15 == 0) {
				printf("%3d", i);
			}
			else {
				printf("  #");
			}
		}

		else {
			printf("%3d", i);
		}


		if (i % 10 == 0) {
			printf("\n");
		}
	}
	return 0;
}