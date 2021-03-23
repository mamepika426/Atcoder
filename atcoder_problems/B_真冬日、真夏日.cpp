#include <iostream>
#include <vector>
using namespace std;

bool is_mousho(double max,double min){
    return max >= 35;
}
bool is_manatsu(double max,double min){
    return max >= 30 && max < 35;
}
bool is_natsubi(double max,double min){
    return max >= 25 && max < 30;
}
bool is_nettaiya(double max,double min){
    return min >= 25;
}
bool is_huyubi(double max,double min){
    return min < 0 && max >= 0 ;
}
bool is_mahuyubi(double max,double min){
    return max < 0;
}
int main(){
    int N;
    cin >> N;
    vector<double> MT(N),mT(N);
    for(int n=0;n<N;n++) cin >> MT[n] >> mT[n];
    int mousho=0,manatsu=0,natsubi=0,nettaiya=0,huyubi=0,mahuyubi = 0;
    for(int n=0;n<N;n++){
        if(is_mousho(MT[n],mT[n])) mousho++;
        if(is_manatsu(MT[n],mT[n])) manatsu++;
        if(is_natsubi(MT[n],mT[n])) natsubi++;
        if(is_nettaiya(MT[n],mT[n])) nettaiya++;
        if(is_huyubi(MT[n],mT[n])) huyubi++;
        if(is_mahuyubi(MT[n],mT[n])) mahuyubi++;
    }
    cout << mousho << " " << manatsu << " " << natsubi << " " << nettaiya << " " << huyubi << " " << mahuyubi << endl; 
}