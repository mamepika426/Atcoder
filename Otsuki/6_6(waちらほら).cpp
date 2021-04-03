#include <iostream>
#include <cmath>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
 
double f(double A,double B,double C,double t){
    return A*t+B*sin(C*t*M_PI)-100;
}
 
int main(){
    double A,B,C;
    cin >> A >> B >> C;
    double left = 0,right = (100+B)/A;
    double mid = (left+right)/2;
    double ans = mid;
    double value = 1;
    while(abs(value)>pow(10,-6)){
        mid = (left+right)/2;
        value = f(A,B,C,mid);
        if(value>=0) right = mid;
        else left = mid;
        ans = mid;
    }
    printf("%.7f\n",ans);
    return 0;
}