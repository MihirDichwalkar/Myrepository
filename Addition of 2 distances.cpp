#include <iostream>
#include <string>
using namespace std;

struct distance{
int feet;
float inch;
};


int main()
{
   struct distance dist1;
   struct distance dist2;

   int feet1 = dist1.feet;
   int feet2 = dist2.feet;
   float inch1 = dist1.inch;
   float inch2 = dist2.inch;

   int Feet;
   float Inch;

   cout<<"Enter the Feet of the Distance 1 = ";
   cin>>feet1;
    cout<<"Enter the Inch of the Distance 1 = ";
   cin>>inch1;

    cout<<"Enter the Feet of the Distance 2  = ";
   cin>>feet2;
    cout<<"Enter the Inch of the Distance 2 = ";
   cin>>inch2;

   Feet = feet1 + feet2;
   Inch = inch1 + inch2;

   if(Inch >= 12){
    Feet += 1;
    Inch -= 12;
   }
   cout<<"Sum of Distances = "<<Feet<<" feet "<<Inch<<" inches ";


   return 0;


}
