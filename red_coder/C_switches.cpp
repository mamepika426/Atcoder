#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

bool turn_on(int *,vector<int>,int);

int main(){
    int N,M;
    cin >> N >> M;
    vector<vector<int>> vec(M);
    for(int m=0;m<M;m++){
        int k;
        cin >> k;
        vec[m].resize(k);
        for(int j=0;j<k;j++){
            cin >> vec[m][j];
        }
    }
    int p[M];
    for(int m=0;m<M;m++){
        cin >> p[m];
    }
    //ここまでで電球のスイッチをベクトルに格納

    int ans=0;
    bool can;
    int bin[30];
    for(int i=0;i<(1<<N);i++){
        bool can=true;
        for(int j=0;j<N;j++){
            int Div = 1<<j;
            bin[j] = (i/Div)%2;
        }
        //ここまででiの二進数表現をbitに格納
        for(int m=0;m<M;m++){
            if(!turn_on(&bin[0],vec[m],p[m])) can=false;
        }
        if(can) ans++;
    }
    cout << ans << endl;
    return 0;
}

bool turn_on(int *bin,vector<int> vec,int p){
    int switches=0;
    for(int i=0;i<vec.size();i++){
        if(bin[vec[i]-1]) switches++; 
    }
    return (switches%2==p);
}