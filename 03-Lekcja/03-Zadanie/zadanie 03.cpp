zadanie 03

#include <iostream>
using namespace std;
int main(){
int a,b;
    cin>>a>>b;
    if(b==0){
        cout<<"nie mozna dzielic przez 0"<<endl;
    }
        else if(a%b==0){
        cout<<"a jest podzielne przez b"<<endl;
        }
else{
    cout<<"a jest niepodzielne przez b"<<endl;
}
    
    return 0;
}