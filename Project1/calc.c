#include <Stdio.h>
#include <math.h> //M_PI는 여기에 있어야 하지만 없으면..
#include "clac.h"

//더하기
double sum(double value1, double value2) {
	return value1 + value2;
}

//빼기(sub())
double sub(double value1, double value2) {
	return value1 - value2;
}

//곱하기(mul())
double mul(double value1, double value2) {
	return value1 * value2;
}

//나누기 (div())
double div(double value1, double value2) {
	if (value2 != 0) return value1 / value2;
	else {
		printf("Error : Divide by 0!");
		return 0;
	}
}

//나머지(rem())
int rem(int value1, int value2) {
	if (value2 != 0) return value1 % value2;
	else {
		printf("Error : Divide by 0!");
		return 0;
	}
}

//제곱
double power(double base, double exponent)
{
	return pow(base, exponent);
}

//제곱근
double squareRoot(double num)
{
	if (num >= 0)
		return sqrt(num); //math.h에서 있는 sqrt()함수
	else {
		printf("Error : Negative number!");
		return -1;
	}
}

//넓이
double area0fCircle(double radius)
{
	return M_PI * radius; //M_PI 정의해야 함
}

//둘레
double circumfrence0fCircle(double radius)
{
	return 2 * M_PI * radius;
}


int main(void) {
	double x = 2,
		y = 0;

	printf("x : %.1f + y : %.1f = %.1f\n", x, y, sum(x,y));
	printf("x : %.1f - y : %.1f = %.1f\n", x, y, sum(x, y));
	printf("x : %.1f * y : %.1f = %.1f\n", x, y, mul(x, y));
	printf("x : %.1f / y : %.1f = %.6f\n", x, y, div(x,y));
	printf("x : %d %% y : %d = %d\n", 
		(int)x, (int)y, rem((int)x, (int)y));

	//추가 부분
	printf("x : %.1f ^ y : %.1f\n", power(x,y));
	printf("sqrt of x : %.1f = %.1f\n", x, squareRoot(x));
	printf("area of y : %.1f = %.1f\n", y, area0fCircle(y));
	printf("circ of y : %.1f = %.1f\n", y, circumfrence0fCircle(y));

	return 0;
}

