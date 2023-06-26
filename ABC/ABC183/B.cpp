#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    double Sx,Sy,Gx,Gy;
    cin >> Sx >> Sy >> Gx >> Gy;
    double x = (Sx*Gy+Sy*Gx)/(Sy+Gy);
    printf("%.7f\n",x);
    return 0;
}