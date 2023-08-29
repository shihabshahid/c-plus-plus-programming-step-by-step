#include<iostream>
using namespace std;
int main(){
    int arr[3][5]={
        {10,20,30,40,50},
        {60,70,80,90,100},
        {1,2,3,4,5}
    };
    for(int i=0;i<3;i++){
        for(int j=0;j<5;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
