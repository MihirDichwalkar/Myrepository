#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n = 0;
    int tab = 0;
    cout<<"Enter the number = ";
    cin>>n;
    if(n%2 == 0){
        cout<<"The number "<<n<<" is a Even Number.\n";
    }
    else{
      cout<<"The number "<<n<<" is a Odd Number.\n";
    }
    return 0;
}
