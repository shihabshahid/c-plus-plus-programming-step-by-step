#include<iostream>
using namespace std;
int main(){
    float sub_marks,obj_marks;
    cout<<"Type your subjective marks: ";
    cin>>sub_marks;
    cout<<"Type your objective marks: ";
    cin>>obj_marks;
    if(sub_marks>=17.5 && obj_marks>=17.5){
        cout<<"Pass";
    }
    else{
        cout<<"Fail";
    }
}
