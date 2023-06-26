#include <iostream>
using namespace std;

void out(int *);
void punctuate(void);

int main(void)
{
    int n;
    int A[3][10],B[3][10],C[3][10],D[3][10];
    int b,f,r,v;
    for(int i=0;i<3;i++){
        for(int j=0;j<10;j++){
            A[i][j]=B[i][j]=C[i][j]=D[i][j] = 0;
        }
    }
    cin >> n;
    for(int k=0;k<n;k++){
        cin >> b >> f >> r >> v;
        if(b==1){
            A[f-1][r-1] += v;
        }
        else if(b==2){
            B[f-1][r-1] += v;
        }
        else if(b==3){
            C[f-1][r-1] += v;
        }
        else{
            D[f-1][r-1] += v;
        }
    }
    out(&A[0][0]);
    punctuate();
    out(&B[0][0]);
    punctuate();
    out(&C[0][0]);
    punctuate();
    out(&D[0][0]);
    return 0;
}

void out(int *arr)
{
    for(int i=0;i<3;i++){
        cout << " ";
        for(int j=0;j<10;j++){
            if(j!=9){
                cout << *(arr+i*10+j) << " ";
            }
            else{
                cout << *(arr+i*10+j);
            }
        }
        cout << endl;
    }
}

void punctuate(void)
{
    for(int i=0;i<20;i++){
        cout << "#";
    }
    cout <<endl;
}