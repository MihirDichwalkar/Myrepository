#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n = 0;
    int tab = 0;
    cout<<"Enter the number = ";
    cin>>n;
    cout<<"The Table of "<<n<<" is \n";
    for(int i = 1; i<=10;i++){
      tab = n*i;
      cout<<n<<" x "<<i<<" = "<<tab<<endl;
    }
    return 0;
}
