#include <iostream>
using namespace std;

int main(){
    int N,ans=0,new_int;
    cin >> N;
    int d[N],test[N];
    for(int i=0;i<N;i++){
         cin >> d[i];
         test[i] = -1;
    }
    for(int i=0;i<N;i++){
        new_int=1;
        for(int j=0;j<N;j++){
            if(d[i]==test[j]) new_int = 0;
        }
        if(new_int==1) test[i] = d[i];
    }

    for(int i=0;i<N;i++){
        if(test[i]!=-1) ans++;
    }

    cout << ans << endl;
    return 0;
}