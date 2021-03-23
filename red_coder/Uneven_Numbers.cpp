#include <iostream>
using namespace std;

bool odd_digit(int n){
    int digit = 0;
    while(n>0){
        digit++;
        n /= 10;
    }
    return digit%2==1;
}

int main(){
    int N,ans=0;
    cin >> N;
    for(int i=1;i<=N;i++){
        if(odd_digit(i)) ans++;
    }
    cout << ans << endl;
    return 0;
}