#include<iostream>
using namespace std;
class product {
    public:
      int a,b;
      static int s; // defination

};
int product::s = 23; // declaration karna padega static variable ko class se bahar 
int main(){
    product p1,p2;
    p1.a=100;
    cout<<p1.a<<endl;
    p2.b; // print garbage value
    cout<<p2.b<<endl;
    p1.s;
    cout<<p1.
}