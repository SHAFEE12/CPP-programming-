#include<iostream>
#include<string.h>
using namespace std;


struct student {
  private :
    int age ;
    char name[20];
    float marks;
public :
    void printDetails(){
        cout<<"age= "<<age<<" "<<"name= "<< name<<" "<<"marks= "<< marks<<endl;
    }
        void input(){
            cout<<"enter age name and marks"<<" ";
            cin>>age;
            cin.ignore();
            cin.getline(name,20);
            cin>>marks;
        
        } ;
};
int main()
{

  student s4;
  student s5;
   s4.input();
   s5.input() ;
  //  s.printDetails();
  //  s2.printDetails();
  //  s3.printDetails();
   s4.printDetails();
   s5.printDetails();

return 0;
}