#include<iostream>
using namespace std;
void fun_1(){
    cout<<"I am from the function 1: 10"<<endl;
}
int fun_2(){
    return 20;
}
void fun_3(int p1){
    cout<<"I am from the function 3: "<<p1+10<<endl;
}
int fun_4(int p1,int p2){
    return p1+p2;
}
int main(){
    fun_1();
    cout<<"I am from the function 2: "<<fun_2()<<endl;
    fun_3(20);
    cout<<"I am from the function 4: "<<fun_4(25,15);
    return 0;
}
