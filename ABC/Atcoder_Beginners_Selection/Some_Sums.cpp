#include <iostream>
using namespace std;

int digit_sum(int);

int main(){
    int n,a,b,ans=0;
    cin >> n >> a >> b;
    for(int i=0;i<=n;i++){
        if(a<=digit_sum(i)&&digit_sum(i)<=b) ans+=i;
    }
    cout << ans <<endl;
    return 0;
}


int digit_sum(int num){
    int sum=0;
    while(1){
        if(num/10==0){
            sum += num;
            break;
        }
        else sum += num - (num/10)*10;
        num /= 10;
    }
    return sum;
}