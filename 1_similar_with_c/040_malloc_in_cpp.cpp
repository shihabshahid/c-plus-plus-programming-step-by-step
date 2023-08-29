#include<iostream>
#include <cstdlib>
using namespace std;
int main(){
    int *ptr;
    ptr=NULL;
    if(ptr==NULL){
        cout<<"Memory not allocated"<<endl;
    }
    else{
        cout<<"Memory allocated"<<endl;
    }
    ptr = (int *)malloc(sizeof(int));
    if(ptr==NULL){
        cout<<"Memory not allocated"<<endl;
    }
    else{
        cout<<"Memory allocated"<<endl;
    }
    //cout<<"Size: "<<sizeof(ptr);
    return 0;
}
