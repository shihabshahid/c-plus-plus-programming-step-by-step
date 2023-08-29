#include<iostream>
using namespace std;
class my_class{
        int c1,c2;
    public:
        my_class(){
            cout<<"Constructor called"<<endl;
            this->c1 = 10;
            this->c2 = 20;
        }
        int my_fun(){
            return this->c1+this->c2;
        }
        ~my_class(){
            cout<<"Destruction called"<<endl;
            this->c1 = 0;
            this->c2 = 0;
        }
};
int main(){
    my_class obj1;
    cout<<"NVIT (Object Oriented Programming)"<<obj1.my_fun()<<endl;
    cout<<"NVIT "<<endl;
}
