#include <iostream>
#include <cstdio>
#include<iomanip>
using namespace std;

int main() {
    

    int a;
    long int b;
    char c;
    float f;
    double d;

    scanf("%d %ld %c %f %lf",&a,&b,&c,&f,&d);
    cout<<a<<endl;
    cout<<b<<endl;
    cout<<c<<endl;
    cout<<fixed<<setprecision(3)<<f<<endl;
    cout<<fixed<<setprecision(9)<<d<<endl;
    return 0;
}


