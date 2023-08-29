#include<iostream>
using namespace std;
int main(){
    int arr[] = {9,5};
    int *p1 = &arr[0];

    cout<<&arr[0]<<" = "<<arr[0]<<", "<<&arr[1]<<" = "<<arr[1]<<endl;
    cout<<"Sum with variable = "<<arr[0]+arr[1]<<endl;
    cout<<"Sum with pointer = "<<*arr+*(arr+1)<<endl;
    cout<<"Sum with pointer = "<<*p1+*(p1+1);
    return 0;
}
