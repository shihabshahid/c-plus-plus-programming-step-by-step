#include<iostream>
using namespace std;
int main(){
    int n1,n2,result;
    cout<<"\nEnter 1st number : ";
    cin>>n1;
    cout<<"\nEnter 2nd number : ";
    cin>>n2;
    try{
        if(n2==0){
            throw n2;
        }
        else{
            result = n1 / n2;
            cout<<"\nThe result is : "<<result;
        }
    }
    catch(int x){
        cout<<"\nCan't divide by : "<<x;
    }
}
