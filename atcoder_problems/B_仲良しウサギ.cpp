#include <iostream>
#include <vector>
using namespace std;


vector<int> a(100005,0);

int main(){
    int N;
    // vector<int> a(N+1,0);
    cin >> N;
    for(int n=1;n<=N;n++) cin >> a[n];

    int ans = 0;
    for(int n=1;n<=N;n++){
        if(a[a[n]]==n) ans++;
    }
    cout << ans/2 << endl;
    return 0;
}