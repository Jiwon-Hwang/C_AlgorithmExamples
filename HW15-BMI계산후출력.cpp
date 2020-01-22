/*작성자 : 황지원
12월 28일 HW15 : BMI 구하기 프로그램 작성*/
#include <stdio.h>

//함수 선언부
double indata(void); // 매개변수, 전달인자? 없을 때 void // double 은 반환값(return)이 double 형식. 따라서 다시 넘겨줄 값있을때 void함수 쓰면 안됨.
double bmi_calc(double, double);
void outdata(double);      // 여기서 마지막 결과 문장 출력하고 반환안하고 끝내도 되므로 void.

int main()
{
	double weight;
	double height;
	double BMI;

	printf("몸무게를 입력하세요(kg) : ");
	weight = indata(); // 여기()에는 void 쓰는 거 아님! 전달 인자 없을 때! // indata에서 scanf로 입력 받아서 다시 main으로 넘겨받을 것.(weight에 대입)
	
	printf("키를 입력하세요(m) : ");
	height = indata();

	BMI=bmi_calc(weight, height); // bmi 계산 함수로 몸무게랑 키 넘겨주고 다시 BMI에 수치 넣어주기.

	outdata(BMI);

	return 0;          //반환값 0 : 정상종료 의미함.
}


double indata(void)    // 매개변수, 전달인자? 없을 때(아직 입력받은거 없으므로) void // double 은 반환값(return)d가 double 형식.
{
	double d;  
	scanf_s("%lf", &d);// 여기에서 weight랑 height값 각각 받음.
	
	return d;          // 마지막에 몸무게랑 키 각각 입력받은거 다시 main함수로 반환해줘야 함. 따라서 void함수면 안되고, d로 반환해줘야 함. 다시 bmi_clac로 전달해야 하므로..
}

double bmi_calc(double w, double h)
{
	double bmi;
	bmi = w / (h*h);

	return bmi;
}

void outdata(double BMI_out)
{
	if (BMI_out<18.5)
	{
		printf("당신의 BMI는 %0.2lf으로 저체중입니다.", BMI_out);
	}
	
	else if (BMI_out<25.0) //18.5 이상인건 굳이 &&로 같이 안써줘도 됨. 이미 위에서 범위 걸러짐.
	{
		printf("당신의 BMI는 %0.2lf으로 정상체중입니다.", BMI_out);
	}

	else if (BMI_out<30.0)
	{
		printf("당신의 BMI는 %0.2lf으로 과체중입니다.", BMI_out);
	}

	else if (BMI_out<40.0)
	{
		printf("당신의 BMI는 %0.2lf으로 비만입니다.", BMI_out);
	}

	else
	{
		printf("당신의 BMI는 %0.2lf으로 고도비만입니다.", BMI_out);
	}

	return;
}

