#include<iostream>
using namespace std;
class rectangle {
    private :
    int length;
    int breadth;

public :
 void setlength(int l) {
    if(l< 0)
length = 1;
else 
length =l;
}
void setbreadth(int b){
    if(b<0)
    breadth= 1;
      else
    breadth=b;
    
}
 int getlength(){
 return length;
 }
 int getbreadth(){
    return breadth;

 }
 double perimeter(){
    return 2*(length+breadth);
 }
 double area(){
    return  length*breadth;

 }
};
int main(){
    rectangle r;
    r.setlength(5);
    r.setbreadth(-1);
    cout<<"length = "<<r.getlength()<<endl;
    cout<<"breadth = "<<r.getbreadth()<<endl;
    cout<<"area of rectangle = "<<r.area()<<endl;
    cout<<"perimeter of rectangle = " <<r.perimeter()<<endl;


}