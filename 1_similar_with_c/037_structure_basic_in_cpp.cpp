#include<iostream>
using namespace std;
struct my_stratct{
    char my_char;
    int my_int;
    float my_float;
    bool my_bool;
};
int main(){
    struct my_stratct s1;
    s1.my_char='A';
    s1.my_int=10;
    s1.my_float=12.123;
    s1.my_bool=false;
    cout<<s1.my_char<<endl;
    cout<<s1.my_int<<endl;
    cout<<s1.my_float<<endl;
    cout<<s1.my_bool<<endl;
    return 0;
}
