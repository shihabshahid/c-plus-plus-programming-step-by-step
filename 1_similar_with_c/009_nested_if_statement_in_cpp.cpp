#include<iostream>
using namespace std;
int main(){
    float present,marks;
    cout<<"Type your present number(15/30): ";
    cin>>present;
    if(present>=15){
        cout<<"Type your marks: ";
        cin>>marks;
        if(marks>=33){
            cout<<"Pass";
        }
        else{
            cout<<"Fail";
        }
    }
    else{
        cout<<"Presence is not sufficient";
    }
}

