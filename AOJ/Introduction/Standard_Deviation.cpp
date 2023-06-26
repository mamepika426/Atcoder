#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    while(n!=0){
        double sum = 0;
        double sigma = 0;
        double score[n];
        for(int i=0;i<n;i++){
            cin >> score[i];
            sum += score[i];
        }
        double n_double = static_cast<double>(n);
        double mean = sum/n_double;
        for(int i=0;i<n;i++) score[i] -= mean;
        for(int i=0;i<n;i++) score[i] = score[i]*score[i];
        for(int i=0;i<n;i++) sigma += score[i];
        sigma = sqrt(sigma/n_double);
        printf("%.5f\n",sigma);
        cin >> n;
    }
    return 0;
}