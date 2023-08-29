#include<iostream>
using namespace std;
class my_class{
    public:
        void my_fun();
};
void my_class::my_fun(){
    cout<<"NVIT Object Oriented Programming"<<endl;
}
int main(){
    my_class obj1;
    obj1.my_fun();
    return 0;
}
