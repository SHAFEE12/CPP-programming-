#include<iostream>
using namespace std;

int cube(int a){
    return a*a*a;
}
inline int cube(int);



int main(){
    int n ,result;
    cout<<"enter a number ";
    cin>>n;
    result=cube(n);
    cout<<"the cube is "<<result;

}
