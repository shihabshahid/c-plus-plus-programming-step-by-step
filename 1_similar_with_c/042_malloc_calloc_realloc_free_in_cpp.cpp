#include<iostream>
#include <cstdlib>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
int main(){
    int *ptr,count=0;
    ptr = (int *)malloc(sizeof(int));
    //ptr = (int *)calloc(sizeof(int));
    while(1){
        cout<<"Type operation code: 1=entry, 0=exit: ";
        int code,data;
        cin>>code;
        if(code==1){
            ptr=realloc(ptr,1);
            cout<<"Type data int: ";
            cin>>data;
            ptr[count]=data;
            count++;
        }
        else{
            break;
        }
    }
    cout<<"----------------"<<endl;
    for(int i=0;i<count;i++){
        cout<<ptr[i]<<" ";
    }
    free(ptr);
    cout<<endl<<"Allocated memory free";

    return 0;
}
