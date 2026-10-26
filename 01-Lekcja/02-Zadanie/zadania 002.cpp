zadania 02

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
   double liczba;
   cin>>liczba;
    cout<<fixed;
    cout<<"Liczba z jednym miejscem po przecinku"<<setprecision(1)<<liczba<<endl;
    cout<<"Liczba z trzema  miejscami po przecinku"<<setprecision(3)<<liczba<<endl;
    cout<<"Liczba z piecioma miejscami po przecinku"<<setprecision(5)<<liczba<<endl;
    return 0;
}
