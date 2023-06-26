#include <iostream>
#include <vector>
using namespace std;

int main(){
    int N,a,b,K;
    cin >> N >> a >> b >> K;
    vector<int> P(K);
    for(int k=0;k<K;k++) cin >> P[k];

    bool fastest = true;
    vector<bool> already(N+1,false);
    already[a] = true;
    already[b] = true;
    for(int k=0;k<K;k++){
        if(already[P[k]]){
            fastest = false;
        }
        else{
            already[P[k]] = true;
        }
    }
    if(fastest) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0; 
}