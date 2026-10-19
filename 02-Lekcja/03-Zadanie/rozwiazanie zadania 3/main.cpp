#include <iostream>

using namespace std;

int main()
{
    cout<<"Witaj,podaj liczby:"<<endl;
    int a,b;
    cin>>a>>b;
    cout<<"Suma"<<a+b<<endl;
    cout<<"Roznica"<<a-b<<endl;
    cout<<"Iloczyn"<<a*b<<endl;
    cout<<"Iloraz"<<static_cast<float>(a)/b<<endl;


    return 0;
}
