#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> V1;
    int temp_int = 0,p=0;
    while(1){
        cout<<"Process continue(1/0): ";
        cin>>p;
        if(p==1){
            cout<<"Type any number: ";
            cin>>temp_int;
            V1.push_back(temp_int);
        }
        else{
            cout<<"Input Ended"<<endl;
            break;
        }

    }
    for(int i=0; i<V1.size();i++){
        cout<<V1[i]<<" ";
    }
    return 0;
}
