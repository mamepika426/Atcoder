#include <iostream>
using namespace std;

int main()
{
    int a,b,c,x,ans=0;
    cin >> a >> b >> c >> x;
    for(int i=0;i<=a;i++){
        if(x-500*i>=0){
            int temp1 = x-500*i;
            for(int j=0;j<=b;j++){
                if(temp1-100*j>=0){
                    int temp2 = temp1-100*j;
                    if(temp2<=50*c) ans++;
                }
            }
        }
    }
    cout << ans << endl;
    return 0;
}