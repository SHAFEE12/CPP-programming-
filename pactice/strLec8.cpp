#include<iostream>
#include<string.h>
using namespace std;


struct student {
 
    int age ;
    char name[20];
    float marks;

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
      student s={12,"shafee",43.5};
    student s2;
    s2.age=24;
    strcpy(s2.name,"akash");
    s2.marks=58.5;
    cout<<"enter  age name and marks---->   ";
    struct  student s3;
    cin>>s3.age;
    cin.ignore();
    cin.getline(s3.name,20);
    cin>>s3.marks;
    student s4;
    student s5;
   s4.input();
   s5.input();
   s.printDetails();
   s2.printDetails();
   s3.printDetails();
   s4.printDetails();
   s5.printDetails();

return 0;
}