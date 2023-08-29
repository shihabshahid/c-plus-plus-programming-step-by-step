#include<iostream>
using namespace std;
class my_class{
        int c1=0,c2=0;
    public:
        my_class(){
            cout<<"NVIT Object Oriented Programming constructor"<<endl;
        }
        my_class(int c1){
            this->c1 = c1;
        }
        my_class(int c1,int c2){
            this->c1 = c1;
            this->c2 = c2;
        }
        int my_fun(){
            return this->c1+this->c2;
        }
};
int main(){
    my_class obj1;
    cout<<"NVIT (Object Oriented Programming)"<<obj1.my_fun()<<endl;
    my_class obj2(10);
    cout<<"NVIT (Object Oriented Programming)"<<obj2.my_fun()<<endl;
    my_class obj3(10,20);
    cout<<"NVIT (Object Oriented Programming)"<<obj3.my_fun()<<endl;
}