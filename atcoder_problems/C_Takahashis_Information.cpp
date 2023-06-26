#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<vector<int>> c(3,vector<int>(3,0));
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin >> c[i][j];
        }
    }

    bool right = true;
    for(int i=0;i<2;i++){
        if((c[i+1][0]-c[i][0])!=(c[i+1][1]-c[i][1])||(c[i+1][0]-c[i][0])!=(c[i+1][2]-c[i][2])) right = false;
    }

    if(right) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}