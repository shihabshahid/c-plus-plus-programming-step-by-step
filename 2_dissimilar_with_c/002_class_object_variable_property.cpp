#include<iostream>
using namespace std;
class my_class{
    public:
        int c1,c2;
    public:
        void my_fun(){
            cout<<"NVIT (Object Oriented Programming)"<<this->c1+this->c2<<endl;
        }
};
void my_fun(int p1, int p2){
    cout<<"NVIT (Functional Programming)"<<p1+p2<<endl;
}
int main(){
    int v1=10,v2=20;
    cout<<"Addition( Procedural Programming )"<<v1+v2<<endl;

    my_fun(v1,v2);

    my_class obj1;
    obj1.c1=v1;
    obj1.c2=v2;
    obj1.my_fun();
    return 0;
}
