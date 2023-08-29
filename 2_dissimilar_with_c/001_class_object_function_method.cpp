#include<iostream>
using namespace std;
class my_class{
    public:
        void my_fun(){
            cout<<"NVIT Object Oriented Programming"<<endl;
        }
};
void my_fun(){
    cout<<"NVIT Functional Programming"<<endl;
}
int main(){
    cout<<"NVIT Procedural Programming"<<endl;

    my_fun();

    my_class obj1;
    obj1.my_fun();
    return 0;
}
