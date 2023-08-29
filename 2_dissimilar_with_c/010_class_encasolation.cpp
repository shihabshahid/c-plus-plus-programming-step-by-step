#include<iostream>
using namespace std;
class my_class{
    private:
        int c1,c2;
    public:
        my_class(){
             cout<<"NVIT Object Oriented Programming constructor"<<endl;
        }
        void set_c1(int c1){
            this->c1=c1;
        }
        int get_c1(){
            return this->c1;
        }
        void set_c2(int c2){
            this->c2=c2;
        }
        int get_c2(){
            return this->c2;
        }
        int my_fun(){
            return this->c1+this->c2;
        }
};

int main(){
    my_class obj1;
    obj1.set_c1(10);
    obj1.set_c2(20);
    cout<<"NVIT (Object Oriented Programming)"<<obj1.my_fun()<<endl;
}
