#include <iostream>
using namespace std;

int main()
{
    int N,Y,exist=0;
    cin >> N >> Y;
    for(int i=0;i<=N;i++){
        if(Y-10000*i>=0&&exist==0){
            int tempY_1 = Y-10000*i;
            int tempN_1 = N-i;
            for(int j=0;j<=tempN_1;j++){
                if(tempY_1-5000*j>=0&&exist==0){
                    int tempY_2 = tempY_1-5000*j;
                    int tempN_2 = tempN_1-j;
                    if(tempY_2==1000*tempN_2){
                        exist = 1;
                        cout << i << " " << j << " " << tempN_2 << endl;
                    }
                    
                }
            }
        }
    }
    if(exist==0) cout << -1 << " " << -1 << " " << -1 << endl;
    return 0;
}