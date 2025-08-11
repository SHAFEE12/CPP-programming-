#include<iostream>
using namespace std;
class complex{
    private :
       int real;
       int imag;
       public:
         void setvalues( int a, int b){
                real=a;
                imag=b;
         }
         void print(){
            cout<<"number is " <<real<< " + " <<imag<<" i"<<endl;

         }
         complex(){
            real= 0;
            imag= 0;
            cout<<"0 argument wala";


         }
         complex(int x, int y){
            real= x;
            imag= y;
            cout<<" 2 argument wala";

         }
};
 int main(){
    complex c1,c2;
    // c1.setvalues(2,3);
    complex c3(20,100);
    complex c4=c3;
    // c1.print();
//     c2.print();
//   c3.print();

 }