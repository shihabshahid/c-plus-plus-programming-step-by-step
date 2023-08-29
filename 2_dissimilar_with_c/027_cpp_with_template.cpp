#include<iostream>
using namespace std;
template <class T>
T fun1(T v1,T v2){
    return v1+v2;
}
int main(){
    cout<<fun1<int>(10,5)<<endl;
    cout<<fun1<float>(10.55,5.55)<<endl;
    return 0;
}
