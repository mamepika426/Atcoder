#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
/*
int main(){
    int N;
    cin >> N;
    vector<int> A(N+1);
    for(int n=1;n<=N;n++){
        cin >> A[n];
    }
    //sort(A.begin(),A.end());
    vector<int> A_square(N+1);
    vector<int> A_cum(N+1);
    vector<int> A_square_cum(N+1);
    for(int n=1;n<=N;n++) A_square[n] = pow(A[n],2);
    A_cum[0] = 0;
    for(int n=1;n<=N;n++) A_cum[n] = A_cum[n-1] + A[n];
    A_square_cum[0] = 0;
    for(int n=1;n<=N;n++) A_square_cum[n] = A_square_cum[n-1] + A_square[n];




    
    long long ans1=0,ans2=0;
    ans1 = (N-1)*A_square_cum[N];
    //for(int n=1;n<N;n++) ans1 += (N-n)*A_square[n];
    for(int n=1;n<N;n++){
        ans2 += A[n]*(A_cum[N]-A_cum[n]);
    } 
    //for(int n=1;n<N;n++) ans3 += A_square_cum[N] - A_square_cum[n];
    long long ans = ans1-2*ans2;
    cout << ans << endl;
    //cout << ans1-2*ans2+ans3 << endl;
    return 0;

}
*/

int main(){
    int N;
    cin >> N;
    vector<int> A(N);
    for(int n=0;n<N;n++){
        cin >> A[n];
    }
    //sort(A.begin(),A.end());
    vector<int> A_square(N);
    vector<int> A_cum(N+1);
    vector<int> A_square_cum(N+1);
    for(int n=0;n<N;n++) A_square[n] = pow(A[n],2);
    long long square_sum = 0;
    for(int n=0;n<N;n++) square_sum += A_square[n];

    A_cum[0] = 0;
    for(int n=1;n<=N;n++) A_cum[n] = A_cum[n-1] + A[n-1];
    A_square_cum[0] = 0;
    for(int n=1;n<=N;n++) A_square_cum[n] = A_square_cum[n-1] + A_square[n-1];




    
    long long ans1=0,ans2=0;
    ans1 = (N-1)*square_sum;
    for(int n=1;n<N;n++){
        ans2 += A[n]*A_cum[n];
    } 
    long long ans = ans1-2*ans2;
    cout << ans << endl;
    //cout << ans1-2*ans2+ans3 << endl;
    return 0;

}