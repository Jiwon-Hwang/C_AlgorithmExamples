/*�ۼ��� : Ȳ����
1�� 17�� HW62 : �̸� �迭 ���α׷� �ۼ�*/

#include <stdio.h>
#pragma warning (disable : 4996) // scanf_s �Ƚᵵ ��.

int main()
{
	int arr[5][5];
	/*�迭�� size ����*/
	int arr_size = sizeof(arr[0]) / sizeof(int);
	int arr_len = arr_size;//2���� �迭�� ����ϱ� ���� �迭�� ����� ����
	int data = 1, start = 0;//data- �迭 ������ data����, start - ���� �� ���η� ������
	int i = start, j = start;//i - ��, j - ��
	int end = arr_size / 2 + 1;//���� ������ ���� �� ����- ���� �߾ӿ� �ִ� ���α��� ������ �����ϱ� ����

	for (int k = 0; k < end; k++) {
		/*k ���� �������ǿ� �ٴٸ��� ���� �ݺ�*/
		for (j; j < arr_size; j++) {
			/*�� ���� ä��� ���� ���� �ϳ��� �߰�*/
			arr[i][j] = data;
			data++;
		}
		j--;//j ���� �迭�� arr_size�� ���� ���������µ�, �迭�� index ���� Ŀ���Ƿ� ��ĭ�� ����.
		i++;//i ���� ��ĭ �߰����Ѽ� �ٷ� ���� ������ ä��� ����.
		for (i; i < arr_size; i++) {
			/*���� ���� ä��� ���� ���� �ϳ��� �߰�*/
			arr[i][j] = data;
			data++;
		}
		i--;//i ���� arr_size�� �����������Ƿ� ��ĭ�� ����.
		j--;//j ���� �� ĭ �ٿ��� �ٷ� ���� ������ ä���� �� �ֵ��� ����.
		for (j; j >= start; j--) {
			/*�� ���� ä��� ���� ���� �ϳ��� ����*/
			arr[i][j] = data;
			data++;
		}
		j++;//j ���� start���� ���������� ����
		i--;//i ���� �� ĭ �ٿ��� �ٷ� �� �� ������ ä���� �� �ֵ��� ����.
		for (i; i > start; i--) {
			/*�� ���� ä��� ���� ���� �ϳ��� ����*/
			arr[i][j] = data;
			data++;
		}

		/*�ٷ� ������ �̸��� ä��� ���� ��� ���� ���� �ϳ��� �߰��ϰ�, ũ�⸦ ���ҽ�Ŵ.*/
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