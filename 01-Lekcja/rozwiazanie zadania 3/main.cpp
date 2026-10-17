#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
   string imie;
   int wiek;
   double wzrost;
   cin>>imie;
   cin>>wiek;
   cin>>wzrost;
   cout<<"imie: "<<imie<<endl;
   cout<<"wiek: "<<wiek<<endl;
    cout<<fixed<<endl;
    cout<<setprecision(2)<<"wzrost: "<<wzrost<<endl;
}
