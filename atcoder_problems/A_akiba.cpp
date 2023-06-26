#include <iostream>
using namespace std;

int main(){
    string S;
    cin >> S;
    if(S=="AKIHABARA"||
    S=="AKIHARAR"||
    S=="AKIHABRA"||
    S=="AKIHABR"||
    S=="AKIHBARA"||
    S=="AKIHBAR"||
    S=="AKIHBRA"||
    S=="AKIHBR"||
    S=="KIHABARA"||
    S=="KIHARAR"||
    S=="KIHABRA"||
    S=="KIHABR"||
    S=="KIHBARA"||
    S=="KIHBAR"||
    S=="KIHBRA"||
    S=="KIHBR") cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}