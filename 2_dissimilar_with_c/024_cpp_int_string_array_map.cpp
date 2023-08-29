#include <iostream>
#include <iterator>
#include <map>
using namespace std;
int main(){
    map<string,int> m1;
    map<string,int>::iterator m2;
    m1["A"]=30;
    m1["B"]=40;
    m1["C"]=10;
    m1["D"]=20;
    m1.insert(make_pair("E",50));
    cout<<m1["C"]<<endl;
    for(m2=m1.begin();m2!=m1.end();m2++){
         cout<<m2->first<<" : "<<m2->second<<endl;
    }
    return 0;
}
