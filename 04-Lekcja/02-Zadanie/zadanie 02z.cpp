zadanie 02z
#include <iostream>
using namespace std;
int n;

int suma=0;
int srednia=0;
int liczba;
int main() {
    cin>>n;
    for(int i=0;n>i;i++){
     cin>>liczba;
     suma=suma+liczba;   
    }
    srednia=suma/n;
    cout <<"SUMA:"<<suma<<endl;
    cout<<"srednia:"<<srednia;
    return 0;
}