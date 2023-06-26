#include <iostream>
using namespace std;

int main(void)
{
    int H,W;
    cin >> H >> W;
    while(!(H==0&&W==0)){
        for(int i=0;i<H;i++){
            if(i%2==0){
                for(int j=0;j<W;j++){
                    if(j%2==0){
                        cout << "#";
                    }
                    else{
                        cout << ".";
                    }
                }
            }
            if(i%2==1){
                for(int j=0;j<W;j++){
                    if(j%2==0){
                        cout << ".";
                    }
                    else{
                        cout << "#";
                    }
                }
            }      
            cout << endl;
        }
        cout << endl;
        cin >> H >> W;
    }
}