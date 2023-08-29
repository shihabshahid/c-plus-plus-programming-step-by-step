#include<iostream>
using namespace std;
struct student{
    int roll_no;
    char name[30];
    int age;
};
int main(){
  int i;
  struct student stud[5];
  for(i=0; i<=4; i++){
    cout<<"Student "<<i+1<<endl;
    stud[i].roll_no = i+1;
    cout<<"Enter name :";
    cin>>stud[i].name;
    cout<<"Enter age :";
    cin>>stud[i].age;
  }
  cout<<"-----------Display ALL Data--------"<<endl;
  for(i=0; i<=4; i++){
      cout<<"Student "<<i+1<<endl;
      cout<<"Roll no. : "<<stud[i].roll_no<<endl;
      cout<<"Name : "<<stud[i].name<<endl;
      cout<<"Age. : "<<stud[i].age<<endl;
  }
  cout<<"-------------Search (2)-----------"<<endl;
  for(i=0; i<=4; i++){
    if(stud[i].roll_no == 2){
      cout<<"Student "<<i+1<<endl;
      cout<<"Roll no. : "<<stud[i].roll_no<<endl;
      cout<<"Name : "<<stud[i].name<<endl;
      cout<<"Age. : "<<stud[i].age;
    }
  }
  return 0;
}
