#include<iostream>
using namespace std;
int main(){
    int var1=45631,ex;
    try{
        if((var1>99999) && (var1<1000000)){
            cout<<"Valid";
        }
        else{
            throw ex;
        }

    }
    catch(...){
        cout<<"Invalid number it must be 6 digit";
    }
    return 0;
}
