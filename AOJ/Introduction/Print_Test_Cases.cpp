#include <iostream>
using namespace std;

int main(void)
{
   int x,i=1;
   cin >> x;
   while(x != 0){
       cout << "Case " << i << ": " << x << endl;
       i++;
       cin >> x;
   }
   return 0;
}