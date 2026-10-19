#include <iostream>

using namespace std;

int main()
{
    cout<<"Podaj liczbe sekund: "<<endl;
    int s;
    cin>>s;
    int m=s/60;
    s=s-m*60;
    cout<<"Minut :"<<m<<endl;
    cout << "Sekund: " <<s<< endl;
    return 0;
}
