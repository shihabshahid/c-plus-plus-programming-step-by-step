#include<iostream>
using namespace std;
int main(){
    char arr[3][6];
    for(int i=0;i<3;i++){
        cout<<"Type name(6 char): ";
        for(int j=0;j<6;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<6;j++){
            cout<<arr[i][j];
        }
        cout<<endl;
    }
    return 0;
}
