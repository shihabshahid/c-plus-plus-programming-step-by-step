#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,3,5,7,9};
    cout<<"---Array Address Hexadecimal---"<<endl;
    cout<<&arr<<endl;
    cout<<&arr[0]<<endl;
    cout<<&arr[1]<<endl;
    cout<<&arr[2]<<endl;
    cout<<&arr[3]<<endl;
    cout<<&arr[4]<<endl;
    cout<<"---Array Address Decimal---"<<endl;
    cout<<(int)&arr<<endl;
    cout<<(int)&arr[0]<<endl;
    cout<<(int)&arr[1]<<endl;
    cout<<(int)&arr[2]<<endl;
    cout<<(int)&arr[3]<<endl;
    cout<<(int)&arr[4]<<endl;
    return 0;
}
