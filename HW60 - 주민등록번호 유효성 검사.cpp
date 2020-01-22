/*�ۼ��� : Ȳ����
1�� 18�� HW60 : �ֹε�Ϲ�ȣ ��ȿ�� �˻� ���α׷� �ۼ�*/

#include <stdio.h>
#pragma warning (disable : 4996) // scanf_s �Ƚᵵ ��.
#include<string.h>
#include<stdlib.h>
#include<memory.h>
#define TRUE 1
#define FALSE 0
#define RESIDENT_NUMBER_LENGTH  13 /* �ֹε�Ϲ�ȣ ����*/
int availability_check(char *resident_number);
int length_character_check(char *resident_number);
int date_check(char *resident_number);
int gender_check(char *resident_number);
int identification_check(char *resident_number);
int year_check(int year);

int main()
{
	/* �׽�Ʈ�� �ֹε�Ϲ�ȣ ���� �迭*/
	char resident_number[][20] = { "0402291000008", "870401102321", "00031541949179",
		"0003154194917", "801203#201122", "7804155328845", "7804150328840",
		"9612241068382", "9902292194322", "0230174326176", "8811391042219",
		"8100122042213", "8112002042213", "9210101069415", "0802294012345",
		"8806311069417","8807311069418"
	};
	int i, count;
	/* �˻��� �ֹε�Ϲ�ȣ�� ���� ���*/
	count = sizeof(resident_number) / sizeof(resident_number[0]);
	for (i = 0; i<count; i++) /* �ֹε�Ϲ�ȣ ��ȿ�� �˻縦 �ݺ������� ���� ��*/
	{
		if (availability_check(resident_number[i]) == TRUE)
		{
			printf("(+) �ֹι�ȣ%s��(��) ��ȿ�� ��ȣ�Դϴ�.\n", resident_number[i]);
		}
		else
		{
			printf("(-) �ֹι�ȣ%s��(��) ��ȿ���� ���� ��ȣ�Դϴ�.\n", resident_number[i]);
		}
	}
	return 0;
}
/*----------------------------------------------------------------
availability_check()�Լ�: �ֹε�Ϲ�ȣ ��ȿ�� �˻� �Լ�
��������: ��ȿ�� �˻��� �ֹε�Ϲ�ȣ(���ڿ�)
���ϰ�: ��ȿ�ϸ�TRUE, ��ȿ���� ������FALSE ����
------------------------------------------------------------------*/
int availability_check(char *resident_number)
{
	if (length_character_check(resident_number)) { /* ���� �� ���ڹ��� ��ȿ���˻�*/        //*** == TRUE �����൵ ��.
		if (date_check(resident_number)) {  /* ��¥�˻�*/
			if (identification_check(resident_number)) {  /* �ν��� ����üũ*/
				return TRUE;
			}
		}
	}
	return FALSE;
}
/*-------------------------------------------------------------------------
length_character_check()�Լ�: �ֹε�Ϲ�ȣ ���� �� ���� ��ȿ���˻� �Լ�
��������: �˻��� �ֹε�Ϲ�ȣ(���ڿ�)
���ϰ�: �ֹε�Ϲ�ȣ�� ���̰� �°� ���ڹ��ڷθ� �����Ǿ� ������TRUE,
���̰� ª�ų� ���, ���� ���ڰ� �ƴ� ���ڰ� ���� ������FALSE ����
--------------------------------------------------------------------------*/
int length_character_check(char *resident_number)
{
	int len;
	len = sizeof(resident_number) / sizeof(char); // ���ڿ� : �� ���ڴ�(���ڴ�) 1����Ʈ�� ����. ���� len�� �ֹε�Ϲ�ȣ ���� �˷���.
	int i, count = 0; // count�� ���� ����� ������ ���� ����. 0~9�� �ƴ� ���� �����Ÿ� ī��Ʈ ���� ����.
	for (i = 0; i < len; i++)
	{
		if (resident_number[i] >= '0' && resident_number[i] <= '9') //### ���⼭ '0' �ƴ�??? char�� �迭 �ȿ��� char�� ���� ����� ��� �����Ƿ�..?
		{
			++count;
		}
		else
		{
			;
		}
	}
	if (len == RESIDENT_NUMBER_LENGTH && count == RESIDENT_NUMBER_LENGTH)
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}

}
/*----------------------------------------------------------------
date_check()�Լ�: ù6�ڸ�(��,��,��)�� ��ȿ�� �˻� �Լ�   // 6�ڸ� �� ó�� ���ڸ��� �⵵�� year_check�Լ��� �ѱ��. ���� ���� �� ���� �޶���. && 1������ 12�������� �����ؾ���.
��������: ��ȿ�� �˻��� �ֹε�Ϲ�ȣ(���ڿ�)
���ϰ�: ��ȿ�� ��¥�̸�TRUE, ��ȿ���� ���� ��¥�̸�FALSE ����
------------------------------------------------------------------*/
int date_check(char *resident_number)                             // ***����*** month, day�� ���ڰ� �־���ϴµ�, resident[2]�̷��� ���ڻ����!1�̶� '1' �̷��� �Ȱ�! 1�� �ƽ�Ű..!
{
	int year, month, day;
	if (resident_number[6] == '1' || resident_number[6] == '2')
	{
		year = 1900 + resident_number[0] * 10 + resident_number[1]; // ### ���⼭ 48 ����ߴ�..?�Ȼ���ߴ�?? char���ε�..? �ƴ� �����°�?(###�ϴ� -48 ���� �ڵ�)
	}
	else
	{
		year = 2000 + resident_number[0] * 10 + resident_number[1];
	}

	month = resident_number[2] * 10 + resident_number[3]; // ***���� ���� 12���̸� 1*10+2 �� �ƴ϶� '1'�� �ƽ�Ű �ڵ� ���� 49*10+50 �̷��� �Ǵ°Ŵ�!
	day = resident_number[4] * 10 + resident_number[5];
	if (month >= 1 && month <= 12)
	{
		if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
		{
			if (day <= 31)
			{
				return TRUE;
			}                                          // ***Q. �ٵ� char�� ���� ���� ���� �� int�� ������ month, day�� �����ϱ� �����°��Ģ�� ���� ����...?!(48���� �غ���)
			else
			{
				return FALSE;
			}
		}
		else if (month == 2) //������ �ؿ��� 2�� 29���� ������.
		{
			if (year_check(year)) // ��, ��� �˻� �Լ�. 1(����, true).
			{
				if (day <= 29)
				{
					return TRUE;
				}
				else
				{
					return FALSE;
				}
			}
			else // 0(���, false).
			{
				if (day <= 28)
				{
					return TRUE;
				}
				else
				{
					return FALSE;
				}
			}
		}
		else // �Ѵ��� �� 30���� ������ �޵�.( 4,6,9,11��)
		{
			if (day <= 30)
			{
				return TRUE;
			}
			else
			{
				return FALSE;
			}
		}
	}
}
/*----------------------------------------------------------------------
gender_check()�Լ�: 7��° �ڸ��� �����ĺ���ȣ ��ȿ�� �˻��Լ�
��������: ��ȿ�� �˻��� �ֹε�Ϲ�ȣ(���ڿ�)
���ϰ�: �����ĺ���ȣ��'1'~'4'�̸�TRUE, �� �� ���� �����̸�FALSE ����
-----------------------------------------------------------------------*/
int gender_check(char *resident_number)
{
	if (resident_number[6] >= '1' && resident_number[6] <= '4') // *** ���⼭ �׳� 1���� 4 ���̶�� �ϸ� �ȵ�!! �׳� 1�� 4�� ��¥ ���� �ƴ϶� �ƽ�Ű �ڵ� ����.
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
}
/*------------------------------------------------------------------------
identification_check()�Լ�: �ֹε�Ϲ�ȣ ���ڸ�(�ν���) ��ȿ�� �˻� �Լ�
��������: ��ȿ�� �˻��� �ֹε�Ϲ�ȣ(���ڿ�)
���ϰ�: ��ȿ�� �ν����̸�TRUE, ��ȿ���� ���� �ν����̸�FALSE ����
-------------------------------------------------------------------------*/
int identification_check(char *resident_number)
{
	int sum = 0, identifier;
	for (int i = 0; i < RESIDENT_NUMBER_LENGTH - 1; i++) // �ν��� �������� �� ���ϱ�
	{
		sum += resident_number[i]; // *** �����°��Ģ?!?!?! ����?! int = char;�϶� char�� int�� ���� ����ȯ... ### 48 �Ȼ��ִ°� ����??
	}
	identifier = sum % 10;
	if (identifier == resident_number[12])
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
}
/*----------------------------------------------------------------
year_check()�Լ�: �⵵�� ��,��� ���� �˻�
��������: ��,��� �˻��� �⵵
���ϰ�: �����̸�1, ����̸�0 ����
------------------------------------------------------------------*/
int year_check(int year)
{
	int result;

	if (year % 4 == 0)
	{
		if (year % 100 == 0)
		{
			if (year % 400 == 0)
			{
				result = 1;
			}
		}
	}
	else
	{
		result = 0;
	}

	return result;  // result : 1 or 0 //r *** return 1 or return 0; �̷��� �� �ʿ� ���� �׳� result�� ��Ƽ� ��ȯ�ϸ� ��.
}
