#include<iostream>
#include <cstdlib>
using namespace std;
int main(){
    int *ptr;
    ptr = (int *)malloc(sizeof(int));
    ptr[0]=10;
    ptr[1]=20;
    ptr[2]=30;

    cout<<ptr[0]<<endl;
    cout<<ptr[1]<<endl;
    cout<<ptr[2]<<endl;

    //cout<<"Size: "<<sizeof(ptr);
    return 0;
}
