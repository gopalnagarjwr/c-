#include <iostream>
using namespace std;

int main()
{
   int a=0;
   int b=1;
   int temp=a+b;
    cout<<a<<" "<<temp<<" ";
   int i=0;

   while (i<6)
   {
      cout<<temp<<" ";
      a=b;
      b=temp;
      temp=a+b;
      i++;
   }
       

    return 0;
}