#include <iostream>
#include <cmath>
using namespace std;

int a[15];

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

int num_digits(int x){
    int digits = 0;
    while(x>0){
        digits++;
        x /= 10;
    }
    return digits;
}

int make_g1(int ,int);
int make_g2(int,int);

int main(){
    int N,K;
    cin >> N >> K;
    int x = N;
    int g1,g2;
    while(K!=0){
        int x_digits = num_digits(x);
        g1 = make_g1(x,x_digits);
        g2 = make_g2(x,x_digits);
        if(g1==g2){
            x = 0;
            break;
        }
        else{
        x = g1 - g2;
        K = K-1;
        }
    }
    cout << x << endl;
    return 0;
}

int make_g1(int x,int x_digits){
    //int a[x_digits];
    for(int i=0;i<x_digits;i++){
        a[i] = x%10;
        x = x/10;
    }
    bubble_sort(&a[0],x_digits);
    int g1 = 0;
    for(int i=0;i<x_digits;i++){
        g1 += a[i]*pow(10,(x_digits-i-1));
    }
    return g1;
}

int make_g2(int x,int x_digits){
    //int a[x_digits];
    for(int i=0;i<x_digits;i++){
        a[i] = x%10;
        x = x/10;
    }
    bubble_sort(&a[0],x_digits);
    int g2 = 0;
    for(int i=0;i<x_digits;i++){
        if(a[i]!=0) g2 += a[i]*pow(10,i);
    }
    return g2;
}