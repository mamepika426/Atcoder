#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;

int main(){
    long long N,M;
    cin >> N >> M;
    vector<long long> P(N+1,0);
    for(int n=1;n<=N;n++) cin >> P[n];
    
    long long N_2 = pow(N+1,2); 
    vector<long long> two_points(N_2);
    int t=0;
    for(int i=0;i<=N;i++){
        for(int j=0;j<=N;j++){
            two_points[t] = P[i]+P[j];
            t++;
        }
    }

    long long ans = 0;
    sort(two_points.begin(),two_points.end());
    two_points.erase(unique(two_points.begin(),two_points.end()),two_points.end());
    N_2 = two_points.size();


    for(int n_1=0;n_1<N_2;n_1++){
        long long first = two_points[n_1];
        long long left = 0,right = N_2-1;
        
        while(right-left>1){
            long long mid = (left+right)/2;
            if(two_points[mid]<=M-first) left = mid;
            else right = mid;
            if(ans<first+two_points[mid]&&first+two_points[mid]<=M) ans = first+two_points[mid];
        }
    }

    cout << ans << endl;
    return 0;


}