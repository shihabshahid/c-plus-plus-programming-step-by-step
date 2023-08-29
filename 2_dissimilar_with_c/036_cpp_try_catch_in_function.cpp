#include<iostream>
using namespace std;
void Demo(){
    int a=2;
    if(a==1){
        throw a;
    }
    else if(a==2){
        throw 'A';
    }
    else if(a==3){
        throw 4.5;
    }
}
int main(){
    try{
        Demo();
    }
    catch(...){
        cout<<"\nException caught.";
    }
}
