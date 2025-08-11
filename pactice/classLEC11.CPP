#include<iostream>
using namespace std;
class complex{
    private :
       int real;
       int imag;
       public:
   
         
         void printdetails(){
            cout<<"number is " <<real<< " + " <<imag<<" i"<<endl;

         }
         complex(){
            real= 0;
            imag= 0;
           


         }
         complex(int x, int y){
            real= x;
            imag= y;


         }
         complex(complex &t){
            real= t.real;
            imag= t.imag;

         }
};
 int main(){
    complex c1,c2(2,3);
    complex c3=c2;
    c1.printdetails();
    c2.printdetails();
    c3.printdetails();

 }