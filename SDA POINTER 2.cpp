#include <iostream>
#include <string>
using namespace std;

int main() {
 int a,b,c;
 int *P1,*P2,*P3;
 a=10;
 cout<<a<<"\n";
 b=15;
 cout<<b<<"\n";
 c=27;
 cout<<c<<"\n";
 p1=&a;
 cout<<P2<<"\n";
 p2=&b;
 cout<<&b<<"\n";
 *p1=&c;
 cout<<P1<<"\n";
 a=*p2;
 cout<<a<<"\n";
 b=6;
 cout<<b<<"\n";
 p3=&b;
 cout<<p3<<"\n";
 p3=&c;
 cout<<p3<<"\n";
 *p1=*p3;
 cout<<*p3<<"\n";
}
