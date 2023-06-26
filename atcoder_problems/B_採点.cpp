#include <iostream>
#include <vector>
using namespace std;

int main(){
    int N,M;
    cin >> N >> M;
    vector<int> ans(M+1,0);

    int a;
    for(int n=0;n<N;n++){
        cin >> a;
        ans[a]++;
    }

    bool exist = false;
    for(int m=0;m<M+1;m++){
        if(ans[m]>=(N/2)+1){
            exist = true;
            cout << m << endl;
        }
    }
    if(!exist) cout << "?" << endl;
    return 0;
}