#include <iostream>
using namespace std;

int main(){
    int m,n,N;
    cin >> m >> n >> N;
    int sell = N,store = N;
    int new_made = (store/m)*n;
    while(new_made!=0){
        store -= (store/m)*m;
        sell += new_made;
        store += new_made;
        new_made = (store/m)*n;
    }
    cout << sell << endl;
    return 0;
}