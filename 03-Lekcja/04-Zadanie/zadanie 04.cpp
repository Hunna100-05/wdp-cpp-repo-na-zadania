zadanie 04

#include <iostream>
using namespace std;
int main(){
int a,b,c,d,e;
    int p=0;
    cin>>a>>b>>c>>d>>e;
    if(a==1){
         p++;
    }
    if(b==1){
         p++;
    }
    if(c==1){
        p++;
    }
    if(d==1){
         p++;
    }
    if(e==1){
        p++;
    }
    cout<<"srednia="<<(a+b+c+d+e)/5<<endl;
    cout<<"liczba ocen niedostatecznych="<<p<<endl;
    return 0;
}