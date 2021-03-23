#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;
    vector<long long> a(100,0);
    for(int n=0;n<N;n++) cin >> a[n];

    long long sum=0;
    for(int n=0;n<N-1;n++) sum += a[n+1]-a[n];

    double ans = (double)sum/(double)(N-1);

    printf("%.3f\n",ans);
    return 0;
}
