#include<iostream>
#include<vector>
using namespace std;
int main(){
    cout<<"------C in Array-----"<<endl;
    int arr[3];
    arr[0]=10;
    arr[1]=20;
    arr[2]=30;
    for(int i=0; i<3;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl<<"------CPP in Array(Vector)-----"<<endl;
    vector<int> V1;
    V1.push_back(10);
    V1.push_back(20);
    V1.push_back(30);
    for(int i=0; i<3;i++){
        cout<<V1[i]<<" ";
    }
    return 0;
}
