#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double a,b,c,d,e;
    cin>>a>>b>>c>>d>>e;
    cout<<fixed;
    cout << "Srednia: "<<setprecision(2)<<(a+b+c+d+e)/5<< endl;
    return 0;
}
