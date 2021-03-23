#include <iostream>
using namespace std;

bool draw(string,string);
bool taro_win(string,string);

int main()
{
    int n;
    cin >> n;
    int taro_p = 0;
    int hanako_p = 0;
    for(int i=0;i<n;i++){
        string taro_c,hanako_c;
        cin >> taro_c >> hanako_c;
        if(draw(taro_c,hanako_c)){
            taro_p += 1;
            hanako_p += 1;
        }
        else if(taro_win(taro_c,hanako_c)) taro_p += 3;
        else hanako_p += 3;
    }
    cout << taro_p << " " << hanako_p << endl;
    return 0;
}


bool draw(string taro_c,string hanako_c){
    if(taro_c.size()!=hanako_c.size()) return false;
    else {
        int judge = 0;
        for(int i=0;i<taro_c.size();i++){
            if(taro_c[i]==hanako_c[i]) judge += 1;
        }
        if(judge==taro_c.size()) return true;
        else return false;
    }
}

bool taro_win(string taro_c,string hanako_c){
    int length = min(taro_c.size(),hanako_c.size());
    int i=0;
    while(i<length){
        if(taro_c[i]>hanako_c[i]){
            return true;
            break;
        }
        else if(taro_c[i]<hanako_c[i]){
            return false;
            break;
        }
        if(i==length-1){
            if(taro_c.size()<hanako_c.size()) return false;
            else return true;
        }
        i++;
    }
}