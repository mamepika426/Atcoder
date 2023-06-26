#include<string>
#include<iostream>
#include <cmath>
using namespace std;

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

long long to(string X,int X_digits,int base){
    long long sum = 0;
    for(int i=0;i<X_digits;i++){
        sum += int(X[i]-'0')*pow(base,X_digits-i-1);
    }
    return sum;
}

int main() {
    string X;
    long long M;
    cin >> X >> M;

   
    int X_digits = X.size();
    int a[X_digits];
    for(int i=0;i<X_digits;i++){
        a[i] = int(X[i]-'0');
    }
    bubble_sort(&a[0],X_digits);

    int d = a[0];
    int ans = 0;
    int base = d+1;
    bool bigger = false;
    while(!bigger){
        if(to(X,X_digits, base)<=M){
            ans++;
            base++;
        }
        else bigger = true;
    }
    cout << ans << endl;
    return 0;
}