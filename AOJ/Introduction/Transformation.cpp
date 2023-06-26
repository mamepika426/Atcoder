#include <iostream>
using namespace std;

void print(int ,int,string);
string reverse(int ,int ,string);
string replace(int ,int ,string ,string);

int main()
{
    string str,command;
    int q;
    cin >> str;
    cin >> q;
    for(int i=0;i<q;i++){
        cin >> command;
        int a,b;
        cin >> a >> b;
        if(command=="print") print(a,b,str);
        if(command=="reverse") str = reverse(a,b,str);
        else if(command=="replace"){
            string p;
            cin >> p;
            str = replace(a,b,str,p);
        }
    }
    return 0;
}

void print(int a,int b,string str){
    for(int i=a;i<=b;i++){
        cout << str[i];
    }
    cout << endl;
}

string reverse(int a,int b,string str){
    string temp=str;
    for(int i=0;i<=b-a;i++){
        temp[a+i] = str[b-i];
    }
    return temp;
}

string replace(int a,int b,string str,string p){
    string temp=str;
    for(int i=a;i<=b;i++){
        temp[i] = p[i-a];
    }
    return temp;
}