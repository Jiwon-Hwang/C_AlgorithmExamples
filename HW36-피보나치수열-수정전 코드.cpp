/*�ۼ��� : Ȳ����
1�� 5�� HW36 : �Ǻ���ġ ���� ���ϱ� ���α׷� �ۼ�*/

#include <stdio.h>
#pragma warning (disable : 4996) // scanf_s �Ƚᵵ ��.

//�Լ� �����
int ip_num();
int cal_fibbo(int num);

int main()
{
	int user_ip, ans;
	user_ip = ip_num();
	ans = cal_fibbo(user_ip);

	printf("%d��° ������ ���� %d �Դϴ�.\n", user_ip, ans);
	return 0;
}

int ip_num() {
	int ip;
	printf("�Ǻ���ġ ������ �׼��� �Է��Ͻÿ� : ");
	scanf_s("%d", &ip);
	return ip;
}

int cal_fibbo(int num) {
	if (num == 1)
		return 1;
	else if (num == 2)
		return 1;
	else {
		return cal_fibbo(num - 2) + cal_fibbo(num - 1);
	}
}