#include <stdio.h>
#include <iostream>
#include <math.h>
using namespace std;

double area(double,double,double);
double length(double,double,double);
double height(double,double,double);

int main()
{
    double a,b;
    double theta;
    cin >> a >> b >> theta;
    printf("%.5f %.5f %.5f\n",area(a,b,theta),length(a,b,theta),height(a,b,theta));
    return 0;
}

double area(double a,double b,double theta)
{
    return (a*b*sin(theta/180.0*M_PI))/2;
}

double length(double a,double b,double theta)
{
    double c = sqrt(a*a+b*b-2*a*b*cos(theta/180.0*M_PI));
    return a+b+c;
}

double height(double a,double b,double theta)
{
    return (b*sin(theta/180.0*M_PI));
}
