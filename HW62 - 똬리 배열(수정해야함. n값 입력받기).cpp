/*작성자 : 황지원
1월 17일 HW62 : 똬리 배열 프로그램 작성*/

#include <stdio.h>
#pragma warning (disable : 4996) // scanf_s 안써도 됨.

int main()
{
	int arr[5][5];
	/*배열을 size 설정*/
	int arr_size = sizeof(arr[0]) / sizeof(int);
	int arr_len = arr_size;//2차원 배열을 출력하기 위해 배열의 사이즈를 복사
	int data = 1, start = 0;//data- 배열 내부의 data숫자, start - 한줄 씩 내부로 들어감ㅏㄱ
	int i = start, j = start;//i - 행, j - 열
	int end = arr_size / 2 + 1;//종료 조건을 만들 기 위해- 가장 중앙에 있는 내부까지 들어갔을때 종료하기 위해

	for (int k = 0; k < end; k++) {
		/*k 값이 종료조건에 다다를때 까지 반복*/
		for (j; j < arr_size; j++) {
			/*위 쪽을 채우기 위해 행을 하나씩 추가*/
			arr[i][j] = data;
			data++;
		}
		j--;//j 값이 배열의 arr_size와 값이 동일해졌는데, 배열의 index 보다 커지므로 한칸씩 줄임.
		i++;//i 값을 한칸 추가시켜서 바로 밑의 값부터 채우기 위해.
		for (i; i < arr_size; i++) {
			/*오른 쪽을 채우기 위해 열을 하나씩 추가*/
			arr[i][j] = data;
			data++;
		}
		i--;//i 값이 arr_size와 동일해졌으므로 한칸씩 줄임.
		j--;//j 값을 한 칸 줄여서 바로 왼쪽 값부터 채워질 수 있도록 줄임.
		for (j; j >= start; j--) {
			/*밑 쪽을 채우기 위해 행을 하나씩 감소*/
			arr[i][j] = data;
			data++;
		}
		j++;//j 값이 start값과 동일해지면 종료
		i--;//i 값을 한 칸 줄여서 바로 위 쪽 값부터 채워질 수 있도록 줄임.
		for (i; i > start; i--) {
			/*왼 쪽을 채우기 위해 열을 하나씩 감소*/
			arr[i][j] = data;
			data++;
		}

		/*바로 다음쪽 똬리를 채우기 위해 행과 열의 값을 하나씩 추가하고, 크기를 감소시킴.*/
		i++;
		j++;
		arr_size--;
		start++;
	}

	for (int a = 0; a < arr_len; a++) {
		for (int b = 0; b < arr_len; b++)
		{
			printf("%2d  ", arr[a][b]);
		}

		printf("\n\n");
	}

	return 0;
}