// なぜか動かない
// #include <iostream>
// using namespace std;

// void read(int *,int,int);
// void out(int *,int,int);

// int main(void)
// {
//     int n,m,l;
//     cin >> n >> m >> l;
//     int **A = new int *[n];
//     int **B = new int *[m];
//     int **C = new int *[n];

//     for(int i=0;i<n;i++){
//         A[i] = new int[m];
//         C[i] = new int[l];
//     }
//     for(int j=0;j<m;j++){
//         B[j] = new int[l];
//     }
//     read(&A[0][0],n,m);
//     read(&B[0][0],m,l);
//     for(int i=0;i<n;i++){
//         for(int k=0;k<l;k++){
//             *(&C[0][0]+i*l+k) = 0;
//         }
//     }




//     for(int i=0;i<n;i++){
//         for(int k=0;k<l;k++){
//             for(int j=0;j<m;j++){
//                 *(&C[0][0]+i*l+k) += *(&A[0][0]+i*m+j)*(*(&B[0][0]+j*l+k));
//             }
//         }
//     }

//     out(&C[0][0],n,l);

//     for(int i=0;i<n;i++){
//         delete[] A[i];
//         delete[] C[i];
//     }
//     for(int j=0;j<m;j++){
//         delete[] B[j];
//     }
//     delete[] A;
//     delete[] B;
//     delete[] C;
//     A = 0;
//     B = 0;
//     C = 0;
//     return 0; 
// }

// void read(int *a,int r,int c)
// {
//     for(int i=0;i<r;i++){
//         for(int j=0;j<c;j++){
//             cin >> *(a+i*c+j);
//         }
//     }
// }

// void out(int *a,int r,int c){
//     for(int i=0;i<r;i++){
//         for(int k=0;k<c;k++){
//             if(k!=c-1) cout << *(a+i*c+k) << " ";
//             else cout << *(a+i*c+k);
//         }
//         cout << endl;
//     }
// }

   


#include <iostream>
using namespace std;

void read(long long int *,int,int);
void out(long long int *,int,int);

int main(void)
{
    int n,m,l;
    cin >> n >> m >> l;
    long long int A[n][m],B[m][l];
    long long int C[n][l];
    read(&A[0][0],n,m);
    read(&B[0][0],m,l);

    for(int i=0;i<n;i++){
        for(int k=0;k<l;k++){
            C[i][k] = 0;
            for(int j=0;j<m;j++){
                C[i][k] += A[i][j]*B[j][k]; 
            }
        }
    }

    out(&C[0][0],n,l);
}

void read(long long int *arr,int r,int c){
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin >> arr[i*c+j];
        }
    }
}

void out(long long int *arr,int r,int c){
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(j!=c-1) cout << arr[i*c+j] << " ";
            else cout << arr[i*c+j];
        }
        cout << endl;
    }
}

