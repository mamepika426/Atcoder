#include <iostream>
using namespace std;

int main(void)
{
    int H,W;
    cin >> H >> W;
    while(!(H==0&&W==0)){
        for(int i=0;i<H;i++){
            for(int j=0;j<W;j++){
                if(i==0||i==H-1){
                    cout << "#";
                }
                else if(j==0||j==W-1){
                    cout << "#";
                }
                else{
                    cout << ".";
                }
            }
            cout << endl;
        }
        cout << endl;
        cin >> H >> W;
    }
}