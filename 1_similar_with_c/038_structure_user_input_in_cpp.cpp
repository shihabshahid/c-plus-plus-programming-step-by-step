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
    cout<<"Type char: ";
    cin>>s1.my_char;
    cout<<"Type int: ";
    cin>>s1.my_int;
    cout<<"Type float: ";
    cin>>s1.my_float;
    cout<<"Type bool(0/1): ";
    cin>>s1.my_bool;
    cout<<s1.my_char<<endl;
    cout<<s1.my_int<<endl;
    cout<<s1.my_float<<endl;
    cout<<s1.my_bool<<endl;

    return 0;
}
