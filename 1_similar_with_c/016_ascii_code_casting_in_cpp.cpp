#include<iostream>
using namespace std;
int main(){
    cout<<"--------1 to 9--------"<<endl;
    for(int i=48;i<=57;i++){
        cout<<i<<"="<<(char)i<<" ";
    }
    cout<<endl<<"--------A to Z--------"<<endl;
    for(int i=65;i<=90;i++){
        cout<<i<<"="<<(char)i<<" ";
    }
    cout<<endl<<"--------a to z--------"<<endl;
    for(int i=97;i<=122;i++){
        cout<<i<<"="<<(char)i<<" ";
    }
    cout<<endl;
    return 0;
}
