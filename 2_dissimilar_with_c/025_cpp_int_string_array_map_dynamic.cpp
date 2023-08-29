#include<iostream>
#include<iterator>
#include<map>
using namespace std;
int main(){
    map<string,string> m1;
    map<string,string>::iterator m2;
    int var1;
    string var2,var3;
    while(true){
        cout<<"Continue....(1/0): ";
        cin>>var1;
        if(var1==0){
            break;
        }
        cout<<"Type country : ";
        cin>>var2;
        cout<<"Type capital : ";
        cin>>var3;
        m1.insert(make_pair(var2,var3));
    }
    for(m2=m1.begin();m2!=m1.end();m2++){
        cout<<m2->first<<" : "<<m2->second<<endl;
    }
}
