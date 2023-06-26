#include <iostream>
#include <math.h>
#include <bits/stdc++.h>
using namespace std;

int main(){
    double N;
    double x_0,y_0,x_opp,y_opp,x_center,y_center;
    cin >>N;
    cin >> x_0 >> y_0 >> x_opp >> y_opp;
    x_center = (x_0+x_opp)/2;
    y_center =(y_0+y_opp)/2;
    double rad = (360/N)*M_PI/180;
    double x_rot,y_rot;
    x_rot = (x_0-x_center)*cos(rad)-(y_0-y_center)*sin(rad)+x_center;
    y_rot = (x_0-x_center)*sin(rad)+(y_0-y_center)*cos(rad)+y_center;
    printf("%.5f %.5f\n",x_rot,y_rot);
    return 0;
}