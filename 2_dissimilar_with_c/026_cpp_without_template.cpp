#include<iostream>
using namespace std;
int fun1(int v1,int v2){
    return v1+v2;
}
float fun2(float v1,float v2){
    return v1+v2;
}
int main(){
    cout<<fun1(10,5)<<endl;
    cout<<fun2(10.55,5.55)<<endl;
    return 0;
}
