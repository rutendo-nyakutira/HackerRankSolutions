#include <iostream>
#include <cstdio>
#include <iomanip>
using namespace std;

int main() {
    int a;
    long b; 
    char c; 
    float d; 
    double e;
    cin>>a>>b>>c>>d>>e; //cin is used to accept the input from the standard input
    cout<<a<<"\n"<<b<<"\n"<<c<<"\n"; //cout is used to display the output to the standard output 
    cout<<fixed<<setprecision(3)<<d<<"\n"<<fixed<<setprecision(9)<<e;// setprecision from the header iomanip, it sets the decimal precision to be used to format floating-point values on output operations
    return 0;
}
