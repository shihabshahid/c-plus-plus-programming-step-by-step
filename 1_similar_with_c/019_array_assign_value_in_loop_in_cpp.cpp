#include<iostream>
using namespace std;
int main(){
    int arr[5];
    cout<<"---Array Value Assign---"<<endl;
    for(int i=0;i<5;i++){
        cout<<"Type number: ";
        cin>>arr[i];
    }
    cout<<"---Array Value Access---"<<endl;
    for(int i=0;i<5;i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}
