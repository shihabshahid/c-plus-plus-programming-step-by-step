#include<iostream>
using namespace std;
int main(){
    char arr[3][6]={
        {'s','h','i','h','a','b'},
        {'s','h','a','h','i','d'},
        {'s','u','l','t','a','n'}
    };
    for(int i=0;i<3;i++){
        for(int j=0;j<6;j++){
            cout<<arr[i][j];
        }
        cout<<endl;
    }
    return 0;
}
