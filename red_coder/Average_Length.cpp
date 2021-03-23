#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

double distance(double x1,double y1,double x2,double y2)
{
    return sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
}

double factorial(int N){
    double fact = 1;
    for(int n=1;n<=N;n++) fact = fact*double(n);
    return fact;
}

int main(){
    int N;
    cin >> N;
    double x[N],y[N];
    for(int n=0;n<N;n++) cin >> x[n] >> y[n];
    int P[N];
    for(int n=0;n<N;n++) P[n] = n;
    double ans = 0;
    do{
        double sum = 0;
        for(int n=0;n<N-1;n++){
            sum += distance(x[P[n]],y[P[n]],x[P[n+1]],y[P[n+1]]);
        }
        ans += sum;
    }while(next_permutation(P,P + N));
    ans = ans/factorial(N);
    printf("%.7f\n",ans);
    return 0;
}