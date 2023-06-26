#include <iostream>
using namespace std;

int main(void)
{
    int n,m;
    cin >> n >> m;
    int **A;
    A = new int*[n];
    for(int i=0;i<n;i++){
        A[i] = new int[m];
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >> A[i][j];
        }
    }
    
    int *b = new int[m];
    for(int j=0;j<m;j++){
        cin >> b[j];
    }

    int *c = new int[n];
    for(int i=0;i<n;i++){
        c[i]=0;
        for(int j=0;j<m;j++){
            c[i] += A[i][j]*b[j];
        }
    }

    for(int i=0;i<n;i++){
        cout << c[i] << endl;
    }


    for(int i=0;i<n;i++){
        delete[] A[i];
    }
    delete[] A;
    A = 0;
    delete[] b;
    b = 0;
    delete[] c;
    c = 0;
    return 0;
}




// int main(void)
// {
//     int size_x,size_y;
//     cin >> size_x >> size_y; 
//     int **array = new int*[size_x];
//         for (int i = 0; i < size_x; i++) {
//             array[i] = new int[size_y];
//         }
//         for(int i = 0;i<size_x;i++){
//             for(int j=0;j<size_y;j++){
//                 cin >> array[i][j];
//             }
//         }

//         for(int i=0;i<size_x;i++){
//             for(int j=0;j<size_y;j++){
//                 cout << array[i][j] << " " ;
//             }
//             cout << endl;
//         }   

//         for (int i = 0; i < size_x; i++) {
//             delete[] array[i];
//         }
//     delete[] array;
//     return 0;
// }
