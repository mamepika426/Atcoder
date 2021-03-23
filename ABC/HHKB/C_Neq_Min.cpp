#include <iostream>
using namespace std;

long long undiscovered_min(long long *undiscovered,long long now,long long max){
    long long ans;
    for(int i=now;i<=max+1;i++){
        if(undiscovered[i]!=-1){ 
            ans = undiscovered[i];
            break;
        }
    }
    return ans;
}

int main(){
    long long N;
    cin >> N;
    long long p[N];
    for(int n=0;n<N;n++) cin >> p[n];
    long long undiscovered[200002];
    for(int i=0;i<200002;i++) undiscovered[i] = i;

    long long now;
    long long Max=0;

    for(int n=0;n<N;n++){
        undiscovered[p[n]] = -1;
        if(Max<max(p[n],now)) Max=max(p[n],now);
        now=undiscovered_min(&undiscovered[0],now,Max);
        cout << now << endl;
    }
    return 0;
}