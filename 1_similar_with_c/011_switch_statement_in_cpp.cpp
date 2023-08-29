#include<iostream>
using namespace std;
int main(){
    char operation;
    float n1, n2;
    cout<<"Enter an operator (+, -, *, /): ";
    cin>>operation;
    cout<<"Type first operand: ";
    cin>>n1;
    cout<<"Type Second operand: ";
    cin>>n2;
    switch(operation){
        case '+':
            cout<<n1<<" + "<<n2<<" = "<<n1+n2;
            break;
        case '-':
            cout<<n1<<" - "<<n2<<" = "<<n1-n2;
            break;
        case '*':
            cout<<n1<<" * "<<n2<<" = "<<n1*n2;
            break;
        case '/':
            cout<<n1<<" / "<<n2<<" = "<<n1/n2;
            break;
        default:
            cout<<"Error! operator is not correct";
    }
    return 0;
}
