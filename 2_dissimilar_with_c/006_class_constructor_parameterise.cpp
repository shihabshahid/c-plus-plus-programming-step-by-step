#include<iostream>
using namespace std;
class my_class{
        int c1,c2;
    public:
        my_class(int c1,int c2){
            this->c1 = c1;
            this->c2 = c2;
        }
        int my_fun(){
            return this->c1+this->c2;
        }
};

int main(){
    my_class obj1(10,20);
    cout<<"NVIT (Object Oriented Programming)"<<obj1.my_fun()<<endl;
}