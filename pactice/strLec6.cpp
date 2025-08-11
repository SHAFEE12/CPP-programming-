#include<iostream>
#include<string.h>
using namespace std;


struct student {
    int age ;
    char name[20];
    float marks;

    // void printDetails(){
    //     cout<<"age= "<<age<<" "<<"name= "<<name<<" "<<"marks= "<<marks<<endl;
    // }
    //     void input(){
    //         cout<<"enter age name and marks"<<" ";
    //         cin>>age;
    //         cin.ignore();
    //         cin.getline(s3.name,20);
    //         cin>>s3.marks;
        
    //     } ;
};
void printDetails(struct student);
int main(){
    student s={12,"shafee",43.5};
    student s2;
    s2.age=24;
    strcpy(s2.name,"akash");
    s2.marks=58.5;
    cout<<"enter name age and marks---->   ";
    struct  student s3;
    cin>>s3.age;
    cin.ignore();
    cin.getline(s3.name,20);
    cin>>s3.marks;
    // printDetails(s);
    // printDetails(s2);
    // printDetails(s3);
     

return 0;
}
void printDetails(struct student x){
    cout<<"age= "<<x.age<<"name= "<<x.name<<"marks= "<<x.marks<<endl;
}
    