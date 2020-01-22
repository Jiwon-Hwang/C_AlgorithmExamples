/*�ۼ��� : Ȳ����
1�� 8�� HW25 : ���� ���߱� ���� ���α׷� �ۼ�*/

#include <stdio.h> 
#pragma warning (disable : 4996) // scanf_s �Ƚᵵ ��.
#include <stdlib.h> // rand(), srand() �Լ��� ����ϱ� ���ؼ� ��.
#include <time.h> // tinme()�Լ��� ����ϱ� ���ؼ� ��.

//�Լ� �����
int random(int);
int input();
void output(int, int);
void myflush();
                        
int main()              
{
	int random_num; //����.
	srand((unsigned int)time(NULL)); 
	// �ʼ� ȣ��!! : �ð� return��. ����� ��, ��, �� ������.
	// �ý��� �ð��� ���� ���� ������ ����ؼ� ������ �� ���� �ٸ� ������ �߻�.
	// �Ʒ� random()�Լ� ������� �� �ѹ��� ȣ���� �־�� ��.
	// ���� �� �����Ű�� ���α׷��� ���� �ӵ��� �ſ� ���Ͻ�Ű�� ������ ��Ÿ��.
	
	random_num = random(100); // 1~100������ ���� �߻�.(n+1 return �����Ƿ�)
	//������� ���� �߻� �ڵ�

	int i = 1;
	int a = 0, b = 100; // a ���ٴ� ũ�� b ���ٴ� �۽��ϴ�.

	while (1) 
	{		
		int user_input = input();
		if (random_num == user_input) // ����(=��)�� ����� �Է°��̶� ������ Ż���ؼ� ����.
		{
			printf("���~ �¾Ҵ�~~~ ��ī��ī~~ %d��° ���� ���߼̽��ϴ�.\n",i);
			break;
		}
		else
		{
			if (user_input<a || user_input>b)  // *** ���� ���� ���� �Է½� ����ó��
			{
				printf("# 1~100 ������ ���� �ٽ� �Է��ϼ���.\n");
				continue; // *** ���� ���� �� �Է����� ��, i�� �Է� ���ϰ� ���� while�� ���ǽ����� �ö󰡼� ��Ȯ��. 
			}
			else if (user_input>random_num) // ���� �Էµ� ���� �亸�� ũ�� b�� �����Էµ� �� �־ ���, a���� ���� �״�� ���
			{
				b = user_input;
			}
			else // ���� �Էµ� ���� �亸�� ������ a�� �����Էµ� �� �־ ���, b���� ���� �״�� ���
			{
				a = user_input;
			}

			output(a, b);
		}

		i++;
	}
	
	return 0;
}
int random(int n)
{
	int res;
	res = rand() % n+1; // 1~n-1+1(100)������ �� �� ���� �߻�.
	
	return res;
}

int input() // ����ó���� ����� ��. 0~100 ���� �� �Է½� �ٽ� �Է��ϰԲ�.
{
	int i_userInput;
	while (1)
	{
		printf("# ���ڸ� �Է��Ͻÿ� : ");

		if (scanf("%d", &i_userInput) != 1)
		{
			printf("�߸��� ���� �Է��ϼ̽��ϴ�.  0~100 ������ ���� �ٽ� �Է��� �ּ���.\n");
			myflush();
		}
		else
		{
			break;
		}
	}
	
	return i_userInput;
}

void output(int o_a, int o_b)
{
	printf("%d ���ٴ� ũ�� %d ���ٴ� �۽��ϴ�.\n", o_a, o_b);

	return;
}

void myflush()
{
	while (1)
	{
		if (getchar() == '\n') // ���๮�ڰ� �Է¹����� stdin �� �������� ���� ���� ���̹Ƿ�, getchar�� ���๮�� �̾ƿ��� �������� ��� ���� �����ִ� ���ڵ� �̾ƿ�. ���๮�ڱ��� �̾ƿ��� ��.
		{
			break;
		}
	}
	return;
}