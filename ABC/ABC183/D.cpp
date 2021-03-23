#include <iostream>
#include <vector>
using namespace std;

int need[200001];

int main(){
    int  N,W;
    vector<vector<int>> M(N,vector<int>(3));
    cin >> N >> W;
    for(int n=0;n<N;n++) cin >> M[n][0] >> M[n][1] >> M[n][2];

    bool can = true;
    for(int n=0;n<N;n++){
        for(int j=M[n][0];j<M[n][1];j++){
            need[j] += M[n][2];
            if(need[j]>W) can = false;
        }
    }
    if(can) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}