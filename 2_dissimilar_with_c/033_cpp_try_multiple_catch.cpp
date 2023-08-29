#include<iostream>
using namespace std;
int main(){
    int a=3;
    try{
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
    catch(int a){
        cout<<"\nInteger exception caught.";
    }
    catch(char ch){
        cout<<"\nCharacter exception caught.";
    }
    catch(double d){
        cout<<"\nDouble exception caught.";
    }
}

