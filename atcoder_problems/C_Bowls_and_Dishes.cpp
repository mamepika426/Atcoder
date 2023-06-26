#include <iostream>
#include <vector>
using namespace std;

int criteria(int,int,vector<int>,vector<int>,vector<int>,vector<int>);

int main(){
    int N,M,K;
    cin >> N >> M;
    vector<int> A(M),B(M);
    for(int m=0;m<M;m++) cin >> A[m] >> B[m];
    cin >> K;
    vector<int> C(K),D(K);
    for(int k=0;k<K;k++) cin >> C[k] >> D[k];
    //ここまでで入力

    int ans = 0;
    for(int bit=0;bit<(1<<K);bit++){
        if(criteria(bit,N,A,B,C,D)>ans) ans = criteria(bit,N,A,B,C,D);  
    }
    cout << ans << endl;
    return 0;
}

int criteria(int bit,int N,vector<int> A,vector<int> B,vector<int> C,vector<int> D){
    vector<int> dishes(N);
    for(int k=0;k<C.size();k++){
        if(bit&(1<<k)) dishes[C[k]-1] = 1;
        else dishes[D[k]-1] = 1;
    }
    int num_criteria = 0;
    for(int m=0;m<A.size();m++){
        if(dishes[A[m]-1]&&dishes[B[m]-1]) num_criteria++;
    }
    return num_criteria;
}