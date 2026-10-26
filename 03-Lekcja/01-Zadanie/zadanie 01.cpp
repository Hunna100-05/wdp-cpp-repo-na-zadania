zadanie 01

#include <iostream>

using namespace std;

int main()
{

    cout <<"podaj liczby"<< endl;
    int a;
    int b;
    cin>>a>>b;
    if (a<b){
        cout<<"wieksza liczba"<<b<<endl;
        cout<<"mniejsza liczba"<<a<<endl;
    }
    else{
        cout<<"mniejsza liczba"<<b<<endl;
        cout<<"wieksza liczba"<<a<<endl;
    }
     if (a<b){
         cout<<a<<"<"<<b<<endl;
     }
    else{
        cout<<b<<">"<<a<<endl;
    }
    return 0;
}
