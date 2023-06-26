#include <stdio.h>
using namespace std;

int main(void)
{
    int n;
    scanf("%d",&n);
    long int arr[n];
    for(int i=0;i<n;i++){
        scanf("%ld",&arr[i]);
    }
    long int min=arr[0],max=arr[0],sum=arr[0];
    for(int i=1;i<n;i++){
        if(min>arr[i]){
            min = arr[i];
        }
        if(max<arr[i]){
            max = arr[i];
        }
        sum = sum + arr[i];
    }
    printf("%ld %ld %ld\n",min,max,sum);
    return 0;
}