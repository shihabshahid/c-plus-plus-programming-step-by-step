#include<iostream>
using namespace std;
class base_class{
    public:
        base_class(){
            cout<<"base class constructor"<<endl;
        }
};
class my_class:base_class{
    public:
        my_class(){
            cout<<"My Class constructor"<<endl;
        }
};
int main(){
    my_class obj1;
}
