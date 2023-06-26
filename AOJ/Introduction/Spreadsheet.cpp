#include <iostream>
using namespace std;

void out(int *,int *,int *,int,int);
void read(int *,int,int);

int main(void)
{
    int r,c;
    cin >> r >> c ;
    int a[r][c];
    read(&a[0][0],r,c);

    int s_r[r];
    int s_c[c+1];
    for (int i=0;i<r;i++){
        s_r[i] = 0;
        for(int j=0;j<c;j++){
            s_r[i] += a[i][j];
        }
    }
    
    for (int j=0;j<c;j++){
        s_c[j] = 0;
        for(int i=0;i<r;i++){
            s_c[j] += a[i][j];
        }
    }

    s_c[c] = 0;
    for(int i=0;i<r;i++){
        s_c[c] += s_r[i]; 
    }

    out(&a[0][0],&s_r[0],&s_c[0],r,c);
    return 0;
}

void out(int *a,int *s_r,int *s_c,int r,int c)
{
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout << a[i*c+j] << " ";
        }
        cout << s_r[i] << endl;
    }
    for(int j=0;j<c;j++){
            cout << s_c[j] << " ";
    }
    cout << s_c[c] << endl;
}

void read(int *a,int r,int c)
{
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin >> a[i*c+j];
        }
    }
}