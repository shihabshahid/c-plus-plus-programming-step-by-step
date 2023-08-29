#include<iostream>
using namespace std;
int main(){
    int v1=20;
    int *p1;
    cout<<"V1 address = "<<&v1<<endl;
    cout<<"V1 value = "<<v1<<endl;
    cout<<"p1 address = "<<&p1<<endl;
    cout<<"p1 garbage value = "<<p1<<endl;
    p1=&v1;
    cout<<"p1 address = "<<&p1<<endl;
    cout<<"v1 value through p1 = "<<*p1<<endl;
    *p1=30;
    cout<<"v1 address = "<<&v1<<endl;
    cout<<"v1 change value through p1 = "<<v1;
    return 0;
}
