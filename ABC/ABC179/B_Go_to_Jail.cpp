#include <iostream>
using namespace std;

int main()
{
    int judge=0;
    int cnt = 0;
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        int dice1,dice2;
        cin >> dice1 >> dice2;
        if(dice1==dice2){
            cnt += 1;
            if(cnt==3) judge = 1;
        }
        else cnt = 0;
    }
    if(judge==1) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}