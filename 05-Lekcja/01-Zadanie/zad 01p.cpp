z01
#include <iostream>
using namespace std;
char znak;
int a,b;
int main() {
    cin>>a>>b;
    cout<<"podaj znak"<<endl;
 cin>>znak;
 switch(znak){
    case '+':{
     cout<<a+b;    
       break;}
    case'-':{
        cout<<a-b;
        break;
    }
    case'*':{
       cout<<a*b<<endl;
      break;   
    }
    case'/':{
        if(b==0){
            cout<<"nie dzielimy przez zero"<<endl;
            break;
        }
      cout<<a/b;
      break;
    }}
    return 0;
}