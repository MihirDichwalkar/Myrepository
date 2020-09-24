#include <iostream>
#include <string>
using namespace std;



int main()
{
   int n1,n2,n3;
   cout<<"Enter N1 = ";
   cin>>n1;
   cout<<"Enter N2 = ";
   cin>>n2;
   cout<<"Enter N3 = ";
   cin>>n3;

   if(n1>n2 && n1>n3){
    cout<<n1<<" is the largest among "<< n2 << " and " <<n3;
   }
   else if (n2>n1 && n2>n3){
    cout<<n2<<" is the largest among "<< n1 << " and " <<n3;
   }
   else{
    cout<<n3<<" is the largest among "<< n1 << " and " <<n3;
   }

   return 0;


}
