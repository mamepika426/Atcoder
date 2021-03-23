#include <iostream>
#include <algorithm>
using namespace std;

int index(int *P,int N){
    int i=0;
    int A[N];
    for(int n=0;n<N;n++) A[n] = n + 1;
    do{
        int same=1;
        for(int n=0;n<N;n++){
            if(P[n]!=A[n]) same=0;
        }
        if(same==1){
            return i;
            break;
        }
        i++;
    }while(next_permutation(A,A+N));
}

int main(){
    int N;
    cin >> N;
    int P[N],Q[N];
    for(int n=0;n<N;n++) cin >> P[n];
    for(int n=0;n<N;n++) cin >> Q[n];
    int ans = abs(index(&P[0],N)-index(&Q[0],N));
    cout << ans << endl;
    return 0;
}