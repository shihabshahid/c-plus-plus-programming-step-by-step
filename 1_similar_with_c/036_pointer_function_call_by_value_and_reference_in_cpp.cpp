#include<iostream>
using namespace std;
void work_with_value(int p1,int p2){
    cout<<"Addition(work with value): "<<p1+p2<<endl;
}
void work_with_address(int *p1,int *p2){
    *p1=*p1+*p2;
}
int main() {
    int a=10, b=20;
    int *pa = &a, *pb = &b;
    work_with_value(a,b);
    work_with_address(pa, pb);
    cout<<"Addition(work with address): "<<*pa;
    return 0;
}
