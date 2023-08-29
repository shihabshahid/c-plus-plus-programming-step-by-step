#include<iostream>
using namespace std;
//abstraction class
class Shape{
    protected:
        float height;
        float width;
    public:
        //pure virtual /interface/abstraction method
        virtual void get_areay()=0;
};
class Triangle:public Shape{
    public:
        Triangle(float h, float w){
            this->height=h;
            this->width=w;
        }
        void show(){
            cout<<"I am a Triangle"<<endl;
        }
        void get_areay(){
            cout<<"Area: "<<height*width*.5<<endl;
        }
};
class Reactangle:public Shape{
    public:
        Reactangle(float h, float w){
            this->height=h;
            this->width=w;
        }
        void show(){
            cout<<"I am a Reactangle"<<endl;
        }
         void get_areay(){
            cout<<"Area: "<<height*width<<endl;
        }
};

int main(){
    //cun't create object
    //Shape obj1;
    Triangle obj2(10,20);
    obj2.show();
    obj2.get_areay();
    Reactangle obj3(10,20);
    obj3.show();
    obj3.get_areay();
}
