#include <iostream>
#include <math.h>
#include <stdio.h>
#include <cmath>
using namespace std;

double dist1(double *,double *,int);
double dist2(double *,double *,int);
double dist3(double *,double *,int);
double dist4(double *,double *,int);

int main()
{
    int n;
    cin >> n;
    double a[n],b[n];
    for(int i=0;i<n;i++) cin >> a[i];
    for(int i=0;i<n;i++) cin >> b[i];
    printf("%.6f\n",dist1(&a[0],&b[0],n));
    printf("%.6f\n",dist2(&a[0],&b[0],n));
    printf("%.6f\n",dist3(&a[0],&b[0],n));
    printf("%.6f\n",dist4(&a[0],&b[0],n));
    cout << endl;
    return 0;
}

double dist1(double *a,double *b,int n){
    double ans = 0;
    for(int i=0;i<n;i++) ans += abs(*(a+i)-*(b+i));
    return ans;
}

double dist2(double *a,double *b,int n){
    double ans = 0;
    double c[n];
    for(int i=0;i<n;i++) c[i] = abs(*(a+i)-*(b+i))*abs(*(a+i)-*(b+i));
    for(int i=0;i<n;i++) ans += c[i];
    ans = sqrt(ans);
    return ans;
}

double dist3(double *a,double *b,int n){
    double ans = 0;
    for(int i=0;i<n;i++) ans += pow(abs(*(a+i)-*(b+i)),3);
    ans = pow(ans,1.0/3.0);
    return ans;
}

double dist4(double *a,double *b,int n){
    double ans = 0;
    for(int i=0;i<n;i++){
        if(ans < abs(*(a+i)-*(b+i))) ans = abs(*(a+i)-*(b+i));
    }
    return ans;
}
