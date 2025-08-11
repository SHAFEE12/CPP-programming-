#include<iostream>
using namespace std;
class rectangle  {
    public:
         int length ;
         int breadth ;


int area (){


return length * breadth;
}
int perimeter(){
    return 2 * (length + breadth);

}

    

};
int main (){
    rectangle r1;
r1.length=14;
r1.breadth=45;

cout<<"area is = "<<r1.area()<<endl;
cout<<"perimeter is = "<<r1.perimeter()<<endl;
cout<<"length is = "<<r1.length<<endl;
cout<<"breadth is = "<<r1.breadth<<endl;

}