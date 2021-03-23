#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    double A,B;
    cin >> A >> B;

    double ans = 100*(A-B)/A;
    printf("%.5f",ans);
    return 0;
}