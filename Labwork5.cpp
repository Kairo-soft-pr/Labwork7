#include <iostream>
#include <stdio.h>
#include <Windows.h>
#define _USE_MATH_DEFINES
#include <math.h>
using namespace std;
int main()
{//---------------2-----------------------------------------------------------
 //обчислення значень виразу
	double A, B, x, y, z, radZ;
	printf("Введіть x,y та значення Z у градусах: ");
	scanf_s("%lf%lf%lf", &x, &y, &z);
	radZ = (z * M_PI) / 180;
	A = (3 + exp(y - 1)) / (1 + x * x * fabs(y - tan(radZ))) - tan(155*M_PI/180);
	int t = (int)A;
	printf("A=%lf\n", A);
	printf("Округлення до цілого: %d\n", t);
	B = 1+pow(y-x,1.0/3)+pow(y-x,2)/2+pow(fabs(y-x),3)/3;
	int v = (int)B;
	printf("B=%lf\n", B);
	printf("Округлення до цілого: %d\n", v);
	return 0;
}


