#include<iostream>
#include<list>
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
    cout<<endl<<"------CPP in Array(List)-----"<<endl;
    list<int> L1;
    list<int> ::iterator L2;
    L1.push_back(10);
    L1.push_back(20);
    L1.push_back(30);
    for(L2=L1.begin(); L2!=L1.end();L2++){
        cout<<*L2<<" ";
    }
    return 0;
}
