#include<iostream>
using namespace std;
class my_class{
    public:
        static void show(){
            cout<<"Show method "<<endl;
        }
        void view(){
            cout<<"View method "<<endl;
        }
};
int main(){
    //without object
    my_class::show();
    //with object
    my_class obj1;
    obj1.show();
    obj1.view();
}
