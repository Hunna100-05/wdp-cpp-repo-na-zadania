zadanie 02

#include <iostream>
using namespace std;

int main(){
int a,b;
char z;
    cout<<"podaj liczby"<<endl;
cin>>a>>b;
    cout<<"podaj znak"<<endl;
cin>>z;
    if(z=='+'){
        cout<<"a+b="<<a+b<<endl;
    }
    else if(z=='-'){
        cout<<"a-b="<<a-b<<endl;
    }
    else if(z=='/'){
        if(b==0){
            cout<<a<<"/"<<b<<"=0"<<endl;
        }
        else{cout<<"a/b="<<a/b<<endl;}
       
    }
    else if(z=='*'){        
          cout<<"a*b="<<a*b<<endl;
    }
    else{
        if(b==0){
            cout<<a<<"%"<<b<<"=0"<<endl;
        }
        else{cout<<"a/b="<<a/b<<endl;}
    }
    return 0;
}