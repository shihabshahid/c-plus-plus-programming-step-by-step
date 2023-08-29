#include<iostream>
#include<list>
using namespace std;
int main(){
    list<int> L1;
    list<int> ::iterator L2;
    int temp_int = 0,p=0;
    while(1){
        cout<<"Process continue(1/0): ";
        cin>>p;
        if(p==1){
            cout<<"Type any number: ";
            cin>>temp_int;
            L1.push_back(temp_int);
        }
        else{
            cout<<"Input Ended"<<endl;
            break;
        }

    }
    for(L2=L1.begin(); L2!=L1.end();L2++){
        cout<<*L2<<" ";
    }
    return 0;
}
