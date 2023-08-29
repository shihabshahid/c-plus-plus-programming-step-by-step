#include<iostream>
using namespace std;
class base_class{
    private:
        void base_private(){
            cout<<"base class private method "<<endl;
        }
    protected:
        void base_protected(){
            cout<<"base class protected method "<<endl;
        }
    public:
        void base_public(){
            cout<<"base class public method "<<endl;
            base_protected();
            base_private();
        }
};
class my_class:public base_class{
    private:
        void my_private(){
            cout<<"my class private method "<<endl;
        }
    protected:
        void my_protected(){
            cout<<"my class protected method "<<endl;
        }
    public:
        void my_public(){
            cout<<"my class public method "<<endl;
            my_protected();
            my_private();
            base_protected();
        }
};
int main(){
    my_class obj1;
    obj1.my_public();
    //obj1.my_protected();
    //obj1.my_private();
    obj1.base_public();
}
