#include<iostream>
using namespace std;
int main(){
    int v1=9, v2=10;
    int *p1 = &v1, *p2=&v2;

    cout<<&v1<<" = "<<v1<<", "<<&v2<<" = "<<v2<<endl;
    cout<<"Addition (variable): "<<v1+v2<<endl;
    //cout<<"Addition (pointer): "<<p1+p2<<endl;
    cout<<"Addition (pointer): "<<*p1+*p2<<endl;
    cout<<"Addition (pointer + 1): "<<*p1+(*p1+1);

    return 0;
}
