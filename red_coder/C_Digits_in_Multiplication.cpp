#include <iostream>
#include <math.h>
using namespace std;

int num_digits(long long n){
    int digits = 0;
    while(n>0){
        digits++;
        n /= 10;
    }
    return digits;
}

int main(){
    long long N;
    cin >> N;
    long long route_N = sqrt(N)/1;
    int ans = num_digits(N);
    for(long long i=1;i<=route_N;i++){
        if(N%i==0) ans = num_digits(N/i);
    }
    cout << ans << endl;
    return 0;
}