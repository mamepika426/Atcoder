#include <iostream>
using namespace std;

int main(void)
{
    int n;
    cin >> n;
    string exist_s[n];
    int exist_r[n];
    int exist[13];

    
    for(int r=0;r<13;r++){
        exist[r]=0;
    }
    for(int i=0;i<n;i++){
        cin >> exist_s[i] >> exist_r[i]; 
    }

    //S
    for(int i=0;i<n;i++){
         for(int r=0;r<13;r++){
            if(exist_s[i]=="S"&&exist_r[i]==r+1){
                exist[r] = 1;
            }
        }
    }
    for(int r=0;r<13;r++){
        if(exist[r]==0){
            cout << "S" << " " << r+1 <<endl;
        }
    }
    for(int r=0;r<13;r++){
        exist[r]=0;
    }

    //H
    for(int i=0;i<n;i++){
         for(int r=0;r<13;r++){
            if(exist_s[i]=="H"&&exist_r[i]==r+1){
                exist[r] = 1;
            }
        }
    }
    for(int r=0;r<13;r++){
        if(exist[r]==0){
            cout << "H" << " " << r+1 <<endl;
        }
    }
    for(int r=0;r<13;r++){
        exist[r]=0;
    }

    //C
    for(int i=0;i<n;i++){
         for(int r=0;r<13;r++){
            if(exist_s[i]=="C"&&exist_r[i]==r+1){
                exist[r] = 1;
            }
        }
    }
    for(int r=0;r<13;r++){
        if(exist[r]==0){
            cout << "C" << " " << r+1 <<endl;
        }
    }
    for(int r=0;r<13;r++){
        exist[r]=0;
    }

    //D
    for(int i=0;i<n;i++){
         for(int r=0;r<13;r++){
            if(exist_s[i]=="D"&&exist_r[i]==r+1){
                exist[r] = 1;
            }
        }
    }
    for(int r=0;r<13;r++){
        if(exist[r]==0){
            cout << "D" << " " << r+1 <<endl;
        }
    }

    
    return 0;
}
