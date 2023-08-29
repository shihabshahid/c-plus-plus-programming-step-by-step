#include<iostream>
using namespace std;
class my_class{
    public:
        void show(){
            cout<<"Show method without parameter"<<endl;
        }
        void show(int p1){
            cout<<"Show method with parameter(int) "<<p1<<endl;
        }
        void show(string p1){
            cout<<"Show method with parameter(string) "<<p1<<endl;
        }
};
int main(){
    my_class obj1;
    obj1.show();
    obj1.show(10);
    obj1.show("10");
}
