#include <stdio.h>
#include <iostream>
#include <math.h>
using namespace std;

double distance(double,double,double,double);

int main()
{
    double x1,y1,x2,y2;
    cin >> x1 >> y1 >> x2 >> y2;
    double dist;
    dist = distance(x1,x2,y1,y2);
    printf("%.5f\n",dist);
    return 0;
}

double distance(double x1,double x2,double y1,double y2)
{
    return sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
}