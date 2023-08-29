#include<iostream>
using namespace std;
int main(){
    int v1=25,v2=7,v3,result;
    float result_float;
    cout<<"----Arithmetic Operators-----"<<endl;
    result = v1+v2;
    cout<<"Addition: "<<result<<endl;
    result = v1-v2;
    cout<<"Subtraction: "<<result<<endl;
    result = v1*v2;
    cout<<"Multiplication: "<<result<<endl;
    result_float = (float)v1/v2;
    cout<<"Division(float casting): "<<result_float<<endl;
    result_float = (float)v1/v2;
    cout<<"Division(2 decimal): "<<result_float<<endl;
    result = (int)v1/v2;
    cout<<"Division(int casting): "<<result<<endl;
    result = v1%v2;
    cout<<"Remainder : "<<result<<endl;

    cout<<"----Assignment Operators-----"<<endl;
    result=v2;
    cout<<"Assign: %d\n"<<result<<endl;
    result+=2;
    cout<<"Assign Addition: "<<result<<endl;
    result-=2;
    cout<<"Assign Subtraction: "<<result<<endl;
    result*=2;
    cout<<"Assign Multiplication: "<<result<<endl;
    result/=2;
    cout<<"Assign Division: "<<result<<endl;
    result%=4;
    cout<<"Assign Remainder: "<<result<<endl;

    cout<<"----Increment and Decrement Operators-----"<<endl;
    cout<<"Result value: "<<result<<endl;
    result++;
    cout<<"Increment after: "<<result<<endl;
    ++result;
    cout<<"Increment before: "<<result<<endl;
    result--;
    cout<<"Decrement after: "<<result<<endl;
    --result;
    cout<<"Decrement before: "<<result<<endl;

    cout<<"----Relational Operators-----"<<endl;
    cout<<"Equal to: "<<(2==2)<<endl;
    cout<<"Greater than: "<<(3>2)<<endl;
    cout<<"Less than: "<<(3<20)<<endl;
    cout<<"Not equal to: "<<(2!=2)<<endl;
    cout<<"Greater than or equal to: "<<(2>=2)<<endl;
    cout<<"Less than or equal to: "<<(2<=2)<<endl;

    cout<<"----Logical Operators-----"<<endl;
    cout<<"AND: "<<(2==2 && 2!=2)<<endl;
    cout<<"OR: "<<(2==2 || 2!=2)<<endl;
    cout<<"NOT: "<<(!(2==2 || 2!=2))<<endl;

    cout<<"----Bitwise Operators-----"<<endl;
    cout<<"Bitwise AND: "<<(1&2)<<endl;
    cout<<"Bitwise  OR: "<<(1|2)<<endl;
    cout<<"Bitwise exclusive  OR: "<<(1^2)<<endl;
    cout<<"Bitwise complement: "<<(~2)<<endl;
    cout<<"Bitwise Shift left: "<<(1<<2)<<endl;
    cout<<"Bitwise Shift right: "<<(1>>2)<<endl;


    return 0;
}

