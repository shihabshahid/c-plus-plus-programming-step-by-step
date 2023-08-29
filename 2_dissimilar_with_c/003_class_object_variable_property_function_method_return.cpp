#include<iostream>
using namespace std;
class my_class{
    public:
        int c1,c2;
    public:
        int my_fun(){
            return this->c1+this->c2;
        }
};
int my_fun(int p1, int p2){
    return p1+p2;
}
int main(){
    int v1=10,v2=20;
    cout<<"Addition( Procedural Programming )"<<v1+v2<<endl;

    cout<<"NVIT (Functional Programming)"<<my_fun(v1,v2)<<endl;

    my_class obj1;
    obj1.c1=v1;
    obj1.c2=v2;
    cout<<"NVIT (Object Oriented Programming)"<<obj1.my_fun()<<endl;
    return 0;
}
