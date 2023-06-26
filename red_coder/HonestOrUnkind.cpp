#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool n_is_honest(vector<int>,vector<int>,int *);
int num_of_honest(int *);

int main(){
    int N;
    cin >> N;
    int A[N];
    vector<vector<int>> x(N);
    vector<vector<int>> y(N); 
    for(int n=0;n<N;n++){
        cin >> A[n];
        x[n].resize(A[n]);
        y[n].resize(A[n]);
        for(int j=0;j<A[n];j++){
            cin >> x[n][j] >> y[n][j];
        }
    }
    //ここまででN人の証言をベクトルに格納

    int ans=0;
    int bits[15];
    for(int i=0;i<(1<<N);i++){
        for(int j=0;j<15;j++){
            int Div = 1<<j;
            bits[j] = (i/Div)%2;
        }
        bool can = true;
        for(int n=0;n<N;n++){
            if(bits[n]==1){
                if(!n_is_honest(x[n],y[n],&bits[0])) can=false;
            }
        }
        if(can&&num_of_honest(&bits[0])>ans) ans = num_of_honest(&bits[0]);
    }
    cout << ans << endl;
    return 0;
}


bool n_is_honest(vector<int> x_n,vector<int> y_n,int *bits){
    bool honest = true;
    for(int j=0;j<x_n.size();j++){
        if(bits[x_n[j]-1]!=y_n[j]) honest = false;
    }
    return honest;
}

int num_of_honest(int *bits){
    int num=0;
    for(int j=0;j<15;j++){
        if(bits[j]==1) num++;
    }
    return num;
}