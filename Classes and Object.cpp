#include <iostream>
#include <string>
using namespace std;

class Room {
    public:
    int Length;
    int Breadth;
    int Height;
};

int main()
{
    int volume;
    Room myRoom;
    cout<<"Enter Length of Room = ";
    cin>>myRoom.Length;
    cout<<"Enter Breadth of Room = ";
    cin>>myRoom.Breadth;
    cout<<"Enter Height of Room = ";
    cin>>myRoom.Height;

    volume = myRoom.Length*myRoom.Breadth*myRoom.Height;
    cout<<"The Volume of Room is = "<<volume<<" m^3 \n";

}