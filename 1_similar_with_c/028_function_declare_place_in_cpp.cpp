#include<iostream>
using namespace std;
void fun_1(){
    cout<<"I declared before main function"<<endl;
}
void fun_2();

int main(){
    fun_1();
    fun_2();
    return 0;
}

void fun_2(){
    cout<<"I declared after main function"<<endl;
}
