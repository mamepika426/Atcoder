#include <stdio.h>
#include <iostream>
using namespace std;

int main(void){
    int a,b,d,r;
    double f,a_d,b_d;
    scanf("%d %d",&a,&b);
    d = a/b;
    r = a%b;
    a_d = static_cast<double>(a);
    b_d = static_cast<double>(b);
    f = a_d/b_d;
    printf("%d %d %.5f\n",d,r,f);
    return 0;
}

/*
#include <stdio.h>

using namespace std;

int main(){
	int a,b;
	double a_d,b_d;
	scanf("%d %d",&a,&b);
	a_d = static_cast<double>(a);
	b_d = static_cast<double>(b);
	printf("%d %d %.5f\n",a/b,a%b,a_d/b_d);
}
*/