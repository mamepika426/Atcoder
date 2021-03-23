#include<iostream>
#include <cmath>
#include <list>
using namespace std;
/*
int main(){
    long long N;
    cin >> N;
    double root_N = sqrt(N);
    long long gauss = root_N/1;
    vector<long long> checked(1000000);

    long long ans = 0;
    for(int n=2;n<=gauss;n++){
        int check = n;
        while(check<N){
            if(check*n<=N){
                ans++;
                check = check*n;
                checked[];
            }
            else break;
        }
    }

    cout << ans << endl;
    return 0;

}