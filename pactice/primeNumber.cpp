#include<iostream>
using namespace std;
int main(){
int n,i,count=0;

cout<<"enrer a number to its a prime or not";
cin>>n;
for( i=1;i<=n;i++){
    if(n%i==0){
    count++;
    }
}
if (count==2)
{
    cout<<"prime number";

}else{
    cout<<"not a prime number";

}
}