#include<iostream>
using namespace std;
class my_class{
    public:
        my_class(){
            cout<<"NVIT Object Oriented Programming constructor"<<endl;
        }
        void my_fun(){
            cout<<"NVIT Object Oriented Programming"<<endl;
        }
};

int main(){
    my_class obj1;
    return 0;
}