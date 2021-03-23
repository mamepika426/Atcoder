#include <iostream>
using namespace std;

bool all_even(int *,int);

int main(){
    int N,ans=0;
    cin >> N;
    int a[N];
    for(int i=0;i<N;i++){
        cin >> a[i];
    }

    while(all_even(&a[0],N)){
        for(int i=0;i<N;i++){
            a[i] /= 2;
        }
        ans++;
    }
    cout << ans;
}


bool all_even(int *a,int N){
    int even = 1;
    for(int i=0;i<N;i++){
        if(a[i]%2==1) even = 0;
    }
    if(even==1) return true;
    else return false;
}