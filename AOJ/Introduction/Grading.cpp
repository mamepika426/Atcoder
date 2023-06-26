#include <iostream>
using namespace std;

int main(void)
{
    int m,f,r;
    cin >>m >> f >> r;
    while(!((m==-1)&&(f==-1)&&(r==-1))){
        string  g;
        if(m==-1||f==-1){
            g = "F";
        }
        else if(m+f>=80){
            g = "A";
        }
        else if((m+f>=65)&&(m+f<80)){
            g = "B";
        }
        else if((m+f>=50)&&(m+f<65)){
            g = "C";
        }
        else if((m+f>=30)&&(m+f<50)){
            if(r>=50){
                g = "C";
            }
            else{
                g = "D";
            }
        }
        else if(m+f<30){
            g = "F";
        }
        cout << g <<endl;
        cin >> m >> f >> r;
    }
    return 0;
}