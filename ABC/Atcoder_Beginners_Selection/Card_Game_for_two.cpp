#include <iostream>
using namespace std;

void bubble_sort(int *,int N);

int main(){
    int N,alice=0,bob=0;
    cin >> N;
    int a[N];
    for(int i=0;i<N;i++) cin >> a[i];
    bubble_sort(&a[0],N);
    for(int i=0;i<N;i++){
        if(i%2==0) alice += a[i];
        else bob += a[i];
    }
    cout  << alice-bob << endl;
    return 0;
}

void bubble_sort(int *a,int N){
    if(N!=1){
        for(int i=0;i<N;i++){
            if(a[0]<a[i]){
                int temp=a[0];
                a[0] = a[i];
                a[i] = temp; 
            }
        }
        bubble_sort(&a[1],N-1);
    } 
}