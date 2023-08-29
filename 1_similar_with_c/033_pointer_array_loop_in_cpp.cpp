#include<iostream>
using namespace std;
int main(){
    int arr[] = {9,8,3,6,2},sum=0;
    int *p1=&arr[0];
    for(int i=0;i<5;i++){
        sum=sum+arr[i];
    }
    cout<<"Sum with variable = "<<sum<<endl;

    sum=0;
    for(int i=0;i<5;i++){
        sum=sum+*(arr+i);
    }
    cout<<"Sum with pointer = "<<sum<<endl;
    sum=0;
    for(int i=0;i<5;i++){
        sum=sum+*(p1+i);
    }
    cout<<"Sum with pointer = "<<sum<<endl;
    return 0;
}
