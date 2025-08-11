#include<iostream>
using namespace std;

int swap( int x, int y)
 int temp =x;
      x=y;
      y= temp;
cout<<"a= "<<x<<" b="<<y;


}
int main(){
    int a,b;
    cout<<"enter a =";
    cin>>a;
 cout<<"enter b =";
    cin>>b;
  swap( a,b );

}