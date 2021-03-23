#include <iostream>
using namespace std;

int main(){
    int X;
    cin >> X;
    X = 100 - X%100;
    cout << X << endl;
    return 0;
}