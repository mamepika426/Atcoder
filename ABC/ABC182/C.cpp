#include <iostream>
using namespace std;

int num_digits(long long n){
    int digits = 0;
    while(n>0){
        digits++;
        n /= 10;
    }
    return digits;
}

int sum(int *bin,int N){
    int ans = 0;
    for(int n=0;n<N;n++) ans += bin[n];
    return ans;
}

bool To_3(int *N_to_digits,int *bin,int digits){
    int s=0;
    for(int d=0;d<digits;d++){
        s+=N_to_digits[d]*bin[d];
    }
    return s%3==0;
}

int main(void){
    long long N;
    cin >> N;
    int digits = num_digits(N);
    int N_to_digits[digits];
    for(int d=0;d<digits;d++){
        N_to_digits[d] = N%10;
        N = N/10;
    }



    int remain=0;
    int bin[digits];
    for(int i=0;i<(1<<digits);i++){
        for(int j=0;j<digits;j++){
            int Div = 1<<j;
            bin[j] = (i/Div)%2;
        }
        //ここまででiの二進数表現をbitに格納
        if(sum(&bin[0],digits)>remain&&sum(&bin[0],digits)>0){
            if(To_3(&N_to_digits[0],&bin[0],digits)) remain = sum(&bin[0],digits);
        }
    }
    if(remain > 0) cout << digits - remain << endl;
    else cout << -1 << endl;
    return 0;
}
