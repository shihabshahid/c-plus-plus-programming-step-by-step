#include<iostream>
using namespace std;
class base_class{
    public:
        void show(){
            cout<<"base class show method "<<endl;
        }
};
class my_class:public base_class{
    public:
        void show(){
            cout<<"my class show method "<<endl;
        }
};
int main(){
    my_class obj1;
    obj1.show();
    base_class obj2;
    obj2.show();
}
