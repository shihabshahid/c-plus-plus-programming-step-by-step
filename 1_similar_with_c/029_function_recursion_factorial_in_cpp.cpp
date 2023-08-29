#include<iostream>
using namespace std;
int factorial(int p1){
    if(p1<1){
        return 1;
    }
    else{
        return p1*factorial(p1-1);
    }
}
int main(){
    cout<<factorial(5);
    return 0;
}
