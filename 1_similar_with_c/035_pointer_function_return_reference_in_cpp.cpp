#include<iostream>
using namespace std;
int *fun_1(){
    static int arr[] = {9,8,3,6};
    return arr;
}
int main(){
    int *p;
    p=fun_1();
    for(int i=0;i<4;i++){
        cout<<*(p + i)<<" ";
    }
    return 0;
}

