#include <iostream>
#include <bits/stdc++.h>
using namespace std;


bool learnable(vector<vector<int>>,int *,int);
int cost(vector<int>,int *);

int main(){
    int N,M,X;
    cin >> N >> M >> X;
    vector<int> C(N);
    vector<vector<int>> A(N);
    for(int n=0;n<N;n++){
        A[n].resize(M);
        cin >> C[n];
        for(int m=0;m<M;m++) cin >> A[n][m];
    }

    int ans=0;
    for(int j=0;j<N;j++) ans += C[j];
    bool can = false;
    int bits[12];
    for(int j=0;j<12;j++) bits[j] = 0;




    for(int i=0;i<(1<<12);i++){
        for(int j=0;j<12;j++){
            int Div = 1<<j;
            bits[j] = (i/Div)%2;
        }
        if(learnable(A,&bits[0],X)){
            can = true;
            if(ans>cost(C,&bits[0])) ans = cost(C,&bits[0]);
        }
    }
    if(!can) ans = -1;
    cout << ans << endl;
    return 0;
}

bool learnable(vector<vector<int>> A,int *bits,int X){
    bool can_2 = true;
    for(int m=0;m<A[0].size();m++){
        int m_learn = 0;
        for(int n=0;n<A.size();n++){
            if(bits[n]==1) m_learn += A[n][m];  
        }
        if(m_learn<X) can_2 = false;
    }
    return can_2;
}

int cost(vector<int> C,int *bits){
    int temp = 0;
    for(int j=0;j<C.size();j++){
        temp += C[j]*bits[j];
    }
    return temp;
}